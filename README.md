# D.S-Assignment-1
# Linked List Team Project – <TeamName>

## 📌 Overview
This repository is part of **CO3 – Data Structures Lab (S3, INMCA2024-29)**.  
It demonstrates:
- Implementation of a **Singly Linked List** in C.
- **Collaborative development** using GitHub (branches, commits, pull requests).
- **Visualization** of linked list operations using Figma diagrams.
- **Team collaboration & reporting**.

---

## 🖥️ Singly Linked List Program
The program creates a linked list where:
- The first node stores the **creator's roll number**.
- Other nodes store the **team members’ roll numbers**.
- Traversal displays the linked list in order.

### Code File
➡️ [`code/linked_list.c`]( [Upl#include <stdio.h>
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
    insertEnd(&head, 101); // your roll no
    insertEnd(&head, 102); // teammate 1
    insertEnd(&head, 103); // teammate 2
    insertEnd(&head, 104); // teammate 3

displayList(head);

return 0;
}
oading DS-Assignment-1.c…]()

)

### Sample Output



*(101, 102, 103,104)*

---

## 🔀 GitHub Collaboration
- **Repository Name:** `HAHAH`
- **Workflow:**
  1. Each teammate created a branch using their roll number.
  2. Contributed small features (insertion, display, comments).
  3. Opened a **Pull Request (PR)** to merge into `main`.
  4. Resolved merge conflicts collaboratively.

---

## 🎨 Figma Diagrams
- **Diagram File:** [`[figma-diagrams/linked_list_diagram.png`]( <img width="1405" height="137" alt="Untitled" src="https://github.com/user-attachments/assets/aaaeb4e5-ba2c-46db-97f9-48ed517e5bc6" />

d_list_diagram.png](https://www.figma.com/design/bgFi4sUR8xhhzqdrJYJA3T/Untitled?node-id=0-1&p=f&t=hfkFim0ejPAuJUQI-0))  
- **Public Figma Link:** [View Diagram]([[https://www.figma.com/file/xxxxx/linked-list-diagram](https://www.figma.com/design/bgFi4sUR8xhhzqdrJYJA3T/Untitled?node-id=0-1&t=hfkFim0ejPAuJUQI-1)](https://www.figma.com/community/file/1547522998378907705/node-structure))

---

## 📑 Report
Final report (PDF) is available here:  
➡️ [`report/final_report.pdf`]()[Documentation.docx](https://github.com/user-attachments/files/22250886/Documentation.docx)


Contents:
- GitHub Repo Link
- Figma Link + Screenshot
- Code snippet + sample output
- Contribution table
- Reflections

---

## 👥 Team Contributions
| Member              | Roll No | Contribution                          |
|---------------------|---------|---------------------------------------|
| Richan Jose         |   101   | Repo setup + Insertion function       |
| Akash Mathew Thomas |   102   | Display function + Code improvements  |
| Josemon Tomy        |   103   | Figma diagram + Report preparation    |
| Richu Francis Se.etc|   104   | Testing + Documentation updates       |


---



## ✨ Reflection
Through this project, we learned:
- How **linked lists** are constructed and traversed.
- How to use **GitHub collaboratively** (branches, commits, PRs).
- How **Figma diagrams** improve visualization of data structures.
- The importance of **teamwork** in software development.

---

