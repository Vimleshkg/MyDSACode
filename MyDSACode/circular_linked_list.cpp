#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};


struct node * insertb(struct node *head,int d)
{ struct node *ptr=(struct node *)malloc(sizeof(struct node));
  struct node *p=head;
   ptr->data=d;

    while(p->next!=head){
    p=p->next;
    }
  p->next=ptr;
    ptr->next=head;
    head=ptr;
return ptr;
}
void display(struct node *head)
{
    struct node *ptr1=head;
    do
    {
        cout<<ptr1->data<<endl;
        ptr1=ptr1->next;
    }
    while(ptr1!=head);

}

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *f=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=f;
    f->data=56;
    f->next=head;


head=insertb(head,50);
head=insertb(head,30);
head=insertb(head,60);

display(head);
}
