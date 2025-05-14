#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void createList(int n) {
    int data;
    Node* temp;
    for (int i = 0; i < n; i++) {
        cout << "Enter data for node :" ;
        cin >> data;
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void display() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteEnd() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
    } else {
        Node* temp = head;
        Node* prev = nullptr;
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = nullptr;
        delete temp;
    }
    cout << "Deleted node from end." << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    createList(n);
    display();
    deleteEnd();
    display();
    return 0;
}
