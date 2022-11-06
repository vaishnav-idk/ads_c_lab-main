#include<stdio.h>
struct Node{
int dt;
struct Node *next;
};
void printLL(struct Node *d)
{
    while(d!=NULL)
    {
       printf("%d \t",d->dt);
       d=d->next; 
    }
    

}

void main()
{
    struct Node* head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=NULL;
    second=(struct Node*)malloc(sizeof(struct Node));
        struct Node* third=NULL;
    third=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter 1st element: ");
    scanf("%d",&head->dt);
    head->next=second;
    printf("\nEnter 2nd element: ");
    scanf("%d",&second->dt);
    second->next=third;
    printf("\nEnter 3rd element: ");
    scanf("%d",&third->dt);
    third->next=NULL;
    printLL(head);
}