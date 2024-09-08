#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;};
int main()
{ struct node *head,*newnode,*temp;
head = 0;
int choice = 1;
while(choice){
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter the element : ");
scanf("%d",&newnode->data);
newnode->next = 0;
if(head == 0)
{ head = temp=newnode;
}else{
temp->next = newnode;
temp = newnode; }
printf("Do you want to continue(0 to stop and 1 to continue) : ");
scanf("%d",&choice);
}
//Deletion at the end
    if (head == NULL) {
        printf("List is already empty.");
    } else if (head->next == NULL) {
        
        free(head);
        head = NULL;
    } else {
        ptr = head;
        while (ptr->next->next != NULL) {
            ptr = ptr->next;
        }
        free(ptr->next);
        ptr->next = NULL;
    }




 temp=head;
while(temp!=0)
{
 printf(" ");  
printf("%d",temp->data);
temp=temp->next; }
return 0;
}

