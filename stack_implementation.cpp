#include <iostream>
using namespace std;

const int MAX = 100;
int stk[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow\n" << endl;
        return;
    }
    stk[++top] = value;
    cout << value << " Pushed to Stack\n" << endl;
}

void pop() {
    if (top < 0) {
        cout << "Stack Underflow\n" << endl;
        return;
    }
    cout << stk[top--] << " Popped from Stack\n" << endl;
}

void display() {
    if (top < 0) {
        cout << "Empty Stack\n" << endl;
        return;
    }
    cout << "Current Stack:\n";
    for (int i = top; i >= 0; i--) {
        cout << stk[i] << endl;
    }
    cout << endl;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);

    display();

    pop();

    display();

    return 0;
}
