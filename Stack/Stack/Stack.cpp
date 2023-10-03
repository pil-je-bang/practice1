#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v; //저장할 벡터

public:
    //스택에 원소 추가 함수
    void push(int value) {
        v.push_back(value);
    }

    //스택에서 가장 위의 원소를 제거하고 반환하는 함수
    void pop() {
        if (!isEmpty()) {
            v.pop_back();
        }
    }

    //스택의 가장 위의 원소를 반환하는 함수
    int top(){
        if (!isEmpty()) {
            return v.back();
        }
        else {
            return 0;
        }
    }

    //스택이 비어 있는지 확인하는 함수
    bool isEmpty() const {
        return v.empty();
    }
};

int main() {
    Stack st; //스택 객체 생성

    //원소 추가
    st.push(10);
    st.push(20);
    st.push(30);

    //스택에서 원소 꺼내기
    cout << "top 원소: " << st.top() << endl;
    st.pop();
    cout << "pop 진행 후 top 원소: " << st.top() << endl;

    //스택이 비어있는지 확인
    if (st.isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}