#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL; // Head of the linked list

// Function to insert a node at the beginning
void insertAtBegin(int value)
{
    Node* newNode = new Node(); // Create a new node
    newNode->data = value;  // Assign value
    newNode->next = head;   // Link to previous head
    head = newNode;         // Update head
}

// Function to display the list
void printList()
{
    Node* temp = head;
    cout << "Linked List: [ ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]\n";
}

int main()
{
    insertAtBegin(12);
    insertAtBegin(22);
    insertAtBegin(30);
    insertAtBegin(44);
    insertAtBegin(50);

    printList();

    return 0;
}

