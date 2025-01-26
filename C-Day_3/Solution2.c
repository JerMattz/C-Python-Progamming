// reverse a linked list:
// 1 -> 2 -> 3 -> 4 -> 5
// reversed:
// 5 -> 4 -> 3 -> 2 -> 1

// C Program to create a Linked List
#include <stdio.h>
#include <stdlib.h>

// Define the structure of Node
typedef struct Node {
    // Data field. Can add more data according to our need
    int data;
    // Pointer to the next node
    struct Node *next;
} Node;

struct Node* reverseList(struct Node* head) {

    // Initialize three pointers: curr, prev and next
    struct Node *curr = head, *prev = NULL, *next;

    // Traverse all the nodes of Linked List
    while (curr != NULL) {

        // Store next
        next = curr->next;
        // Reverse current node's next pointer
        curr->next = prev;
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    // Return the head of reversed linked list
    return prev;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d", node->data);
        node = node->next;
    }
}

int main() {
  
    // Create the First Node of the Linked List
  	// This will serve as the head of the list
    Node *first = (Node *)malloc(sizeof(Node));
    // Assigning data
    first->data = 10;

    Node *second = (Node *)malloc(sizeof(Node));
    second->data = 20;

    Node *third = (Node *)malloc(sizeof(Node));
    third->data = 30;

    // Linking the nodes
    first->next = second; // This will create: 10 -> 20
    second->next = third; // This will create: 10 -> 20 -> 30
    third->next = NULL;   // This will create: 10 -> 20 -> 30 -> NULL

    printf("Linked List: ");
    printList(first);
    
    printf("\n");
    
    struct Node* head = reverseList(first);
    printf("Reverse Linked List: ");
    printList(head);

    return 0;
}
