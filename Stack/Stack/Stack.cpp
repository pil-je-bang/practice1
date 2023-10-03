#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v; //������ ����

public:
    //���ÿ� ���� �߰� �Լ�
    void push(int value) {
        v.push_back(value);
    }

    //���ÿ��� ���� ���� ���Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
    void pop() {
        if (!isEmpty()) {
            v.pop_back();
        }
    }

    //������ ���� ���� ���Ҹ� ��ȯ�ϴ� �Լ�
    int top(){
        if (!isEmpty()) {
            return v.back();
        }
        else {
            return 0;
        }
    }

    //������ ��� �ִ��� Ȯ���ϴ� �Լ�
    bool isEmpty() const {
        return v.empty();
    }
};

int main() {
    Stack st; //���� ��ü ����

    //���� �߰�
    st.push(10);
    st.push(20);
    st.push(30);

    //���ÿ��� ���� ������
    cout << "top ����: " << st.top() << endl;
    st.pop();
    cout << "pop ���� �� top ����: " << st.top() << endl;

    //������ ����ִ��� Ȯ��
    if (st.isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}