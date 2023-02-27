


#include<stdio.h>
#include<stdlib.h>


struct Node{

int data;
struct Node *next;

};



void CircularTraversal(struct Node *head){

struct Node *p=head;

    do{
        printf("\nElement:%d\n",p->data);
        p=p->next;


    }while(p!=head);


}

struct Node* InsertAtFirst(struct Node *head,int element){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=element;
    

    struct Node *p=head->next;


    while(p->next!=head){
    p=p->next;

    }

    
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;






    
}


struct Node* InsertAtIndex(struct Node *head,int data,int index){


    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    

    struct Node *p=head;

    for(int i=0;i<index-1;i++){

       p=p->next;

    }

    ptr->next=p->next;
    p->next=ptr;



    return head;



}

struct Node* InsertAtEnd(struct Node *head,int data){


    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node *p=head;

    while(p->next!=head){
      
      p=p->next;



    }

ptr->next=head;
p->next=ptr;
    



    return head;
}


struct Node* InsertAtValue(struct Node *head,int data,int value){


struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));ptr->data=data;



struct Node *p=head;
struct Node *q=head->next;

while(q->data!=value && q->next!=head){

p=p->next;
q=q->next;


}


if(q->next!=head){
  
ptr->next=q;
p->next=ptr;


}




    return head;




}
 


int main(){

  
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;



head=(struct Node*)(malloc(sizeof(struct Node)));
second=(struct Node*)(malloc(sizeof(struct Node)));
third=(struct Node*)(malloc(sizeof(struct Node)));
fourth=(struct Node*)(malloc(sizeof(struct Node)));
    

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=head;

CircularTraversal(head);

printf("\nAfter Insertion:\n");

//head = InsertAtFirst(head,62);
//CircularTraversal(head);

//head=InsertAtIndex(head,70,2);
//CircularTraversal(head);


//head=InsertAtEnd(head,70);
//CircularTraversal(head);

head=InsertAtValue(head,88,3);
CircularTraversal(head);




    return 0;
}