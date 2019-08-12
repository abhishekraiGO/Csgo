#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node * next;

}
NODE;

NODE* insertnode(NODE*,int,NODE*);
void display(NODE*);
int main()
{int n;
NODE* head=NULL;
NODE* temp;
NODE* temp1=NULL;
    while(n!=-1)
    {
         temp=(NODE*)(malloc)(sizeof(NODE));
    temp->next=NULL;
        printf("enter the element to insert else -1 to stop\n");
       scanf("%d",&n);
       if(n==-1)
        continue;
        head=insertnode(head,n,temp);
    }
    display(head);

}

NODE * insertnode(NODE* head,int n,NODE * temp)
{
    NODE* temp1;
    temp->data=n;
    if(head==NULL)
        head=temp;
    else{
        temp1=head;
        while(temp1->next!=NULL)
            temp1=temp1->next;
    }
    temp1->next=temp;
return head;
}
void display(NODE * head)
{
    while(head!=NULL){
        printf("%d ,",head->data);
        head=head->next;
}
}
