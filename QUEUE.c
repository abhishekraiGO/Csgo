#include<stdio.h>
#define MAX 10
#include<stdlib.h>

struct QUEUE
{
    int front;
    int rare;
    int queue[MAX];
};
typedef struct QUEUE abhi;
abhi s;
void insert();
int delete();
void display();
int main()
{s.front =-1;
s.rare=-1;
    while(1)
    {   int choice;
        printf(".............\n");
        printf("1. insert element\n");
        printf("2. delete element\n");
        printf("3. display elements\n");
        printf("4. exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
}}
void insert()
{int n;
    printf("enter the element to insert\n");
    scanf("%d",&n);
    if(s.rare==MAX-1)
        printf("queue is full\n");
    else{
        if(s.front==-1)
        {
            s.front ++;
        }
        s.rare++;
        s.queue[s.rare]=n;
        printf("%d is inserted\n",s.queue[s.rare]);
    }}
int delete()
{
 if(s.front==-1 || s.front>s.rare){
        printf("queue underflow\n");
           return 0;}
printf("%d is deleted\n",s.queue[s.front]);
s.front++;
}
void display()
{
    for(int i =s.front;i<=s.rare;i++)
        printf("%d ",s.queue[i]);
    printf("\n");
}







