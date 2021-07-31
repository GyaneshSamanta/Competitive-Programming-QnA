#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;          // Data
    struct node *next; // Address
}*head;


void createList(int n);
void traverseList(int k);


int main()
{
    int n, k;
    scanf("%d", &n);
    createList(n);
    scanf("%d", &k);
    traverseList(k);
    return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        exit(0);
    }
    scanf("%d", &data);
    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            break;
        }
        scanf("%d", &data);
        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL
        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}

void traverseList(int k)
{
    if(head == NULL)
    {
        return;
    }
    while(k!=0)
    {
        head = head->next;
        k--;
    }
    while(head != NULL)
    {
        if (head->next == NULL)
            printf("%d", head->data);
        else
            printf
("%d->", head->data); // Print data of current node
        head = head->next;                 // Move to next node
    }}
