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

struct node *deletenodeIndex(struct node *head,int index)
   { int i=0;
   struct node *ptr=head;
     struct node *ptr1=head->next;
   while(i!=index-1){
     ptr=ptr->next;
     ptr1=ptr1->next;
 i++;
   }

      ptr->next=ptr1->next;
      free(ptr1);
      return head;

      /* while(ptr1!=NULL)
       {
     ptr1= ptr1->next;
     ptr=ptr->next;
     ptr->next=NULL;
   free(ptr1);
   }*/



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

  Traverse(head) ;
int index;
    cout<<"give index that you want to delete"<<endl;
cin>>index;
cout<<endl;
head=deletenodeIndex(head,index);
Traverse(head) ;

}
