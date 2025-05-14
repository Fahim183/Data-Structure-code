#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtEnd(Node*& head, int data)
{
    Node* newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{

    Node* head = nullptr;
    int n, value;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);


    cout << "Enter the number of elements to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;
        insertAtEnd(head, value);
        display(head);
    }

    return 0;
}

