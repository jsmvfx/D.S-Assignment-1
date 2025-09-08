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
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Roll Numbers in Linked List: ");
    while (temp != NULL) {
        printf("%d", temp->rollNo);
        if (temp->next != NULL) printf(" → ");
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Replace with your team’s roll numbers
    insertEnd(&head, 101); // your roll no
    insertEnd(&head, 102); // teammate 1
    insertEnd(&head, 103); // teammate 2
    insertEnd(&head, 104); // teammate 3

    displayList(head);

    return 0;
}
