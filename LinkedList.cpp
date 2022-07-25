#include<iostream>

using namespace std;

struct LinkedListNode
{
    int data;
    struct LinkedListNode *nextNode;
};

void traverse_list(struct LinkedListNode *head)
{
    struct LinkedListNode *currentNode = new LinkedListNode();

    currentNode = head;
    while(currentNode != NULL)
    {
        printf("%d ", currentNode->data);

        currentNode = currentNode->nextNode;
    }
}

void insert_at_head(struct LinkedListNode **head, int data) {
    struct LinkedListNode *newNode = new LinkedListNode();
    newNode->data = data;

    newNode->nextNode = (*head);

    (*head) = newNode;
}

int main()
{
    struct LinkedListNode *head = new LinkedListNode();
    struct LinkedListNode *n1 = new LinkedListNode();
    struct LinkedListNode *n2 = new LinkedListNode();
    struct LinkedListNode *n3 = new LinkedListNode();

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->nextNode = n2;
    n2->nextNode = n3;
    n3->nextNode = NULL;

    head = n1;

    insert_at_head(&head, 40);
    insert_at_head(&head, 50);

    traverse_list(head);

    return 0;
}

