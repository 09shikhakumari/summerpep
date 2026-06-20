//write c++ program to implement stack using array
#include<iostream>
using namespace std;

class Stack {
    int top;
    int arr[5];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}