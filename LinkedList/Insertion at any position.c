#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node sn;
sn* head;
void insert(int pos, int val){
    sn*nn=(sn*)malloc(sizeof(sn));
    nn->data=val;
    if(pos==0){
        nn->next=head;
        head=nn;
    }
    else{
        sn*t=head;
        for(int i=0;i<pos-1;i++)
            t=t->next;
        nn->next=t->next;
        t->next=nn;
    }
}
void display(){
    sn*t=head;
    while(t){
        if(t->next)

       printf("%d->",t->data);
        else
            printf("%d",t->data);
        t=t->next;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int pos,val;
        scanf("%d %d",&pos,&val);
        insert(pos,val);
    }
    display();
    return 0;
}
