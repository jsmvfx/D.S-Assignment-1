#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int rollNo;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int rollNo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) { // check memory allocation
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->rollNo = rollNo;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertEnd(struct Node** head, int rollNo) {
    struct Node* newNode = createNode(rollNo);

    if (*head == NULL) { // empty list
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the list in a nice format
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("\n The linked list is empty.\n");
        return;
    }

    printf("\n Linked List of Roll Numbers:\n");
    printf("HEAD ->");

    struct Node* temp = head;
    while (temp != NULL) {
        printf("[%d]", temp->rollNo);
        if (temp->next != NULL)
            printf("->");
        temp = temp->next;
    }
    printf("-> NULL\n");
}

// Function to free memory of the entire list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;

    // Example: Add your team's roll numbers
    insertEnd(&head, 34); // Your roll no
    insertEnd(&head, 6);  // Teammate 1
    insertEnd(&head, 48); // Teammate 2
    insertEnd(&head, 49); // Teammate 3
     insertEnd(&head, 50); // Teammate 4

    displayList(head);

    // Free memory before program ends
    freeList(head);

    return 0;
}


