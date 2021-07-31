#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int n;
    struct node *next;
}*start=0;
void input(int d){
    struct node *new_node;
    new_node=new node;
    new_node->n=d;
    new_node->next=start;
    start=new_node;
}
int main() {
    int n,i=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        input(x);
    }
    struct node *temp;
    temp=start;
    while(temp!=0){
        if(temp->next==0){
            printf("%d",temp->n);
            break;
        }
        printf("%d->",temp->n);
        temp=temp->next;

    }
    
    return 0;
}
