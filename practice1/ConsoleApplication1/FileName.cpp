#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int x, y;            // �÷��̾� ���ּ��� ��ġ
int obstacleX, obstacleY;  // ��ֹ��� ��ġ
int bulletX, bulletY;      // �Ѿ��� ��ġ
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
                cout << "O"; // �÷��̾� ���ּ�
            else if (i == obstacleY && j == obstacleX)
                cout << "@"; // ��ֹ�
            else if (i == bulletY && j == bulletX)
                cout << "^"; // �Ѿ�
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
    // ��ֹ� �̵�
    obstacleY++;

    // �Ѿ� �̵�
    if (bulletY >= 0) {
        bulletY--;
        if (bulletY == obstacleY && bulletX == obstacleX) {
            score++;
            bulletY = -1;
            obstacleX = rand() % width;
            obstacleY = 0;
        }
    }

    // �浹 ����
    if (x == obstacleX && y == obstacleY)
        gameOver = true;
}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // 100ms ������
    }

    cout << "���� ����! ���� ����: " << score << endl;
    return 0;
}