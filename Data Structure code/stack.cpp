
#include <iostream>
using namespace std;
#define MAX 100

struct Stack {
    int arr[MAX];
    int top;

    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;  // Output: 20
    cout << s.peek() << endl; // Output: 10
    return 0;
}

