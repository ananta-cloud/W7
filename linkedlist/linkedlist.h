#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void appendNode(Node** head, int data);
void displayLinkedList(Node* head);

#endif 