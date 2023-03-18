#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node *next;
};
void Traverse(struct node *ptr)
{
while(ptr!=NULL){
    cout<<"element="<<ptr->data<<endl;;
    ptr=ptr->next;
}
}
struct node *begAddElement(struct node *ptr1)
{
    struct node *ptr2=new struct node;
   ptr2->data=100;
   ptr2->next=ptr1;
   return ptr2;

}
struct node *deletenode(struct node *head)
   {
       struct node *ptr=head;

       head=ptr->next;
       free(ptr);
       return head;

   }
int main()
{
    struct node *head=new struct node;
    struct node *first=new struct node;
    struct node *second=new struct node;
    struct node *third=new struct node;
    head->data=19;
    head->next=first;
    first->data=22;
    first->next=second;
    second->data=34;
    second->next=third;
    third->data=45;
    third->next=NULL;
  // Traverse(head) ;
 //head=begAddElement(head);
  Traverse(head) ;

cout<<endl;
head=deletenode(head);
Traverse(head) ;

}

