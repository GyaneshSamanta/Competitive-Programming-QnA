#include <cmath>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
    int val;
    struct node *next;
}*head,*tem;

int main() {
    int n;
    cin>>n;
    head=(struct node *)malloc(sizeof(struct node));
    cin>>head->val;
    tem=head;
    for (int i=1;i<n;i++)
    {
        tem->next=(struct node*)malloc(sizeof(struct node));
        tem=tem->next;
        cin>>tem->val;
    }
    int target;
    cin>>target;
    tem=head;
    while(tem!=NULL)
    {
        if(tem->val==target)
        {
            cout<<"yes";
            break;
        }
        tem=tem->next;
    }
    if (tem==NULL)
        cout<<"no";
    return 0;
}
