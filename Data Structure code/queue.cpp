#include <iostream>
using namespace std;
#define MAX 100

struct Queue {
    int arr[MAX];
    int head, tail;

    Queue() { head = -1; tail = -1; }

    bool isEmpty() { return head == -1 || head > tail; }
    bool isFull() { return tail == MAX - 1; }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (head == -1) head = 0;
        arr[++tail] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        return arr[head++];
    }

    int peek() {
        if (isEmpty()) return -1;
        return arr[head];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << q.dequeue() << endl;  // Output: 10
    cout << q.peek() << endl;     // Output: 20
    return 0;
}
