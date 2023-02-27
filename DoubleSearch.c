#include<stdio.h>
#include<stdlib.h>

struct Node{

int data;
struct Node *prev;
struct Node *next;

};


void Traversal(struct Node *head){

struct Node *p=head;

while(p->next!=NULL){


printf("\nElement:%d\n",p->data);
p=p->next;

}
//printf("");



while(p->prev!=NULL){

printf("\nElement:%d\n",p->data);
p=p->prev;
}

printf("\nElement:%d\n",p->data);










//return head;




}


struct Node* InsertAtFirst(struct Node *head,int data){

    

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->prev=NULL;
    ptr->next=head;

    head->prev=ptr;

    head=ptr;


    
    return head;





}


struct Node* InsertAtIndex(struct Node *head,int data,int index){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    struct Node *q=head->next;

    //int i=0;

    for(int i=0;i<index-1;i++){


        p=p->next;
        q=q->next;




    }

    ptr->next=q;
    ptr->prev=p;

    p->next=ptr;
    q->prev=ptr;


return head;

}

struct Node* InsertAtEnd(struct Node *head,int data){


struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;

struct Node *p=head;

while(p->next!=NULL){

  p=p->next;

}


ptr->prev=p;
ptr->next=NULL;

p->next=ptr;


    return head;
}



struct Node* InsertAtValue(struct Node *head,int data,int value){



struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;

struct Node *p=head;
struct Node *q=head->next;

while(q->data!=value && q->next!=NULL){
p=p->next;
q=q->next;

}
if(q->data==value){

    
    ptr->next=q;
    ptr->prev=p;

    p->next=ptr;
    q->prev=ptr;


}







    return head;
}




int main(){

struct Node *head=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));


head->data=10;
head->prev=NULL;
head->next=second;


second->data=20;
second->prev=head;
second->next=third;

third->data=30;
third->prev=second;
third->next=fourth;

fourth->data=40;
fourth->prev=third;
fourth->next=NULL;


//Insert at first

/*
printf("\nBefore Inserting!");
Traversal(head);

printf("\nAfter insertion!");
head=InsertAtFirst(head,66);
Traversal(head);*/


//Insert at any index


/*
printf("\nBefore Inserting!");
Traversal(head);

printf("\nAfter insertion!");
head=InsertAtIndex(head,66,2);
Traversal(head);*/


//Insert at end

/*

printf("\nBefore Inserting!");
Traversal(head);

printf("\nAfter insertion!");
head=InsertAtEnd(head,66);
Traversal(head);*/



//Insert at value


printf("\nBefore Inserting!");
Traversal(head);

printf("\nAfter insertion!");
head=InsertAtValue(head,44,70);
Traversal(head);




    return 0;
}