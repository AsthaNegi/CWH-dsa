#include<stdio.h>
#include<stdlib.h>



struct Node{

int data;
struct Node *next;

};


void LinkedListTraversal(struct Node *head){


    while(head!=NULL){

    printf("\n%d",head->data);
    head=head->next;

    }





}


struct Node* DeleteAtFirst(struct Node *head){

    struct Node *ptr=head;
    head=head->next;
    free(ptr);

    return head;

}

struct Node* DeleteAtIndex(struct Node *head,int index){
  
  struct Node *p=head;
  struct Node *q=head->next;

  for(int i=0;i<index-1;i++){

    p=p->next;
    q=q->next;

  }

  p->next=q->next;
  free(q);


  return head;


}


struct Node* DeleteAtLast(struct Node *head){

struct Node *p=head;
struct Node *q=head->next;

while(q->next!=NULL){
  p=p->next;
  q=q->next;


}

p->next=NULL;
free(q);

return head;

}


struct Node* DeleteAtValue(struct Node *head,int value){

struct Node *p=head;
struct Node *q=head->next;
while(q->data!=value && q->next!=NULL){

p=p->next;
q=q->next;

}

if(q->data==value){

p->next=q->next;
free(q);

}


    return head;
}

int main()
{

struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
fifth=(struct Node*)malloc(sizeof(struct Node));

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=fifth;

fifth->data=5;
fifth->next=NULL;



LinkedListTraversal(head);

//delete the first element
/*
printf("\nDeletion of first node:\n");
head=DeleteAtFirst(head);
LinkedListTraversal(head);
*/

//Delete element at particular index
/*
printf("\nDeleting element at perticular index\n");
head=DeleteAtIndex(head,2);
LinkedListTraversal(head);*/

/*
//Delete element at last node

printf("\nDeleting element at last node\n");
head=DeleteAtLast(head);
LinkedListTraversal(head);
*/


//Delete element having a particular value

printf("\nDeleting element having a partisular value\n");
head=DeleteAtValue(head,15);
LinkedListTraversal(head);


return 0;
}