#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the elements of the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating nodes
    struct Node* node1 = createNode(10);
    struct Node* node2 = createNode(20);
    struct Node* node3 = createNode(30);

    // Linking nodes to form a linked list
    node1->next = node2;
    node2->next = node3;

    // Head of the linked list
    struct Node* head = node1;

    // Printing the linked list
    printf("Linked List: ");
    printLinkedList(head);

    // Don't forget to free the allocated memory when done
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
