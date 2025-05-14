
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

void insertAtPosition(Node*& head, int data, int position)
{
    Node* newNode = new Node(data);

    if (position <= 1 || head == nullptr)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Position out of range, inserting at the end.\n";
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display(Node* head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    Node* head = nullptr;
    int n, value, position;

    cout << "Enter the number of elements to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value and position: ";
        cin >> value >> position;
        insertAtPosition(head, value, position);
        display(head);
    }

    return 0;
}

