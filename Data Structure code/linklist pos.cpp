#include <stdio.h>
#include <stdlib.h> // For malloc

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int input, pos, i;

    printf("If you want to create a linked list, type 1\n");
    scanf("%d", &input);

    // Create the initial linked list
    while (input) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;  // Exit if memory allocation fails
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;  // First node
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;  // Traverse to the end
            }
            temp->next = newnode;  // Insert at the end
        }

        printf("Do you want to continue? (1 to continue, 0 to stop)\n");
        scanf("%d", &input);
    }

    // User specifies position to insert
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Create new node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);

    // Insert at position 1 (beginning)
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
    } else {
        // Insert at other positions
        temp = head;
        for (i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;  // Traverse to the node before the position
        }

        if (temp != NULL) {
            newnode->next = temp->next;  // Link new node to the next node
            temp->next = newnode;        // Link the previous node to new node
        } else {
            printf("Position is out of range\n");
        }
    }

    // Printing the linked list
    printf("\nLinked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Free allocated memory
    temp = head;
    while (temp != NULL) {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}
