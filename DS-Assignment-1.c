#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int rollNo;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int rollNo) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->rollNo = rollNo;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at end
void insertEnd(struct Node** head, int rollNo) {
    struct Node* newNode = createNode(rollNo);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the list
// Improved display function
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("\n📋 Linked List of Roll Numbers:\n");
    printf("HEAD → ");
    while (temp != NULL) {
        printf("[%d]", temp->rollNo);
        if (temp->next != NULL)
            printf(" → ");
        temp = temp->next;
    }
    printf(" → NULL\n");
}


int main() {
    struct Node* head = NULL;

    // Replace with your team’s roll numbers
    insertEnd(&head, 34); // your roll no
    insertEnd(&head, 06); // teammate 1
    insertEnd(&head, 48); // teammate 2
    insertEnd(&head, 49); // teammate 3

    displayList(head);

    return 0;
}


