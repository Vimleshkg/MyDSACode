#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{int data;
struct node *next;
};
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"element="<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct node *addinIndex(struct node *ptr)
{
    struct node *ptr1=new struct node;
    int index=0;
    int i=0;
    while(i!=index)
    {
        ptr=ptr->next;
        i++;
    }
    ptr1->data=200;
    ptr1->next=ptr->next;
    ptr->next=ptr1;
    return ptr;

}
int main()
{
    struct node *head=new struct node;
    struct node *first=new struct node;
    struct node *second=new struct node;
    head->data=23;
    head->next=first;
    first->data=34;
    first->next=second;
    second->data=43;
    second->next=NULL;
    traverse(head);
    head=addinIndex(head);
    traverse(head);


}
