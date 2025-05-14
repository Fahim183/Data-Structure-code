#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function from the image
struct node* add_beg(struct node* head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit if memory allocation fails
    }
    ptr->data = d;
    ptr->link = NULL; // Initially, the new node points to NULL

    ptr->link = head; // New node points to the current head
    head = ptr;        // Update head to the new node

    return head;
}

int main() {
    struct node *head = NULL, *ptr;
    int choice = 1, data;

    // Create the initial linked list with user input
    while (choice) {
        printf("Enter data: ");
        scanf("%d", &data);
        head = add_beg(head, data);

        printf("Do you want to continue? (1 to continue, 0 to stop)\n");
        scanf("%d", &choice);
    }

    // Print the initial linked list
    printf("\nInitial Linked List: ");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    // Get user input for the new node
    printf("Enter data for the new node to insert at the beginning: ");
    scanf("%d", &data);
    head = add_beg(head, data);

    // Print the updated linked list
    printf("\nUpdated Linked List: ");
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    // Free the allocated memory
    ptr = head;
    while (ptr != NULL) {
        struct node *temp = ptr;
        ptr = ptr->link;
        free(temp);
    }

    return 0;
}
