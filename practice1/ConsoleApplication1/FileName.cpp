#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int x, y;            // 플레이어 우주선의 위치
int obstacleX, obstacleY;  // 장애물의 위치
int bulletX, bulletY;      // 총알의 위치
int score;

void Setup() {
    gameOver = false;
    x = width / 2;
    y = height - 1;
    obstacleX = rand() % width;
    obstacleY = 0;
    bulletX = -1;
    bulletY = -1;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";

            if (i == y && j == x)
                cout << "O"; // 플레이어 우주선
            else if (i == obstacleY && j == obstacleX)
                cout << "@"; // 장애물
            else if (i == bulletY && j == bulletX)
                cout << "^"; // 총알
            else
                cout << " ";

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score:" << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case 'w':
            if (bulletY == -1)
                bulletY = y - 1;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    // 장애물 이동
    obstacleY++;

    // 총알 이동
    if (bulletY >= 0) {
        bulletY--;
        if (bulletY == obstacleY && bulletX == obstacleX) {
            score++;
            bulletY = -1;
            obstacleX = rand() % width;
            obstacleY = 0;
        }
    }

    // 충돌 감지
    if (x == obstacleX && y == obstacleY)
        gameOver = true;
}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // 100ms 딜레이
    }

    cout << "게임 오버! 최종 점수: " << score << endl;
    return 0;
}