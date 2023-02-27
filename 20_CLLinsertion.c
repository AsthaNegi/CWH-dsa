//circular linked list

//the difference is that the last node will be pointing back to the head node

//in traversal do while loop is used

#include<stdio.h>
#include<stdlib.h>

//defining the node which consists of data and a pointer whiuch will point to next node
struct Node{

int data;
struct Node *next;

};

//traversal function defined

//the pointer containing head node is passed as argument
void traversal(struct Node *head){

    struct Node *p=head;

//the loop continues till the pointer does not point to head
//do while loop is used as the first node has to be printed before it's updation
do{

//the data of ptr pointing is printed
    printf("\nelement:%d",p->data);

//the pointer is pointed to the next node
    p=p->next;
 
}while(p!=head);

}

//case 1: insertion at first node
//an extra pointer is required

struct Node* insertAtFirst(struct Node *head,int data){


struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

struct Node *p=head->next;

while(p->next!=head){

    p=p->next;

}

ptr->data=data;
ptr->next=head;

p->next=ptr;

head=ptr;


return head;

}


//case2: insert in the end

void insetAtEnd(struct Node* head,int data){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    

    struct Node *p=head->next;

    while(p->next!=head){

        p=p->next;

    }
    ptr->next=head;  
    p->next=ptr;
    

   // return head;
}


//case 3: inserting at the index

void insertAtIndex(struct Node* head,int data,int index){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    struct Node *p=head;
    int i=0;

    while(i<index-1){

        p=p->next;
        i++;

    }

    ptr->next=p->next;
    p->next=ptr;






}


//case 4: inserting after a node

void insertAfter(struct Node *head,int data,struct Node* node){

struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
    struct Node *p=head;

    while(p!=node){

        p=p->next;
    }

    ptr->next=p->next;
    p->next=ptr;

}

//case 5: inserting in the place of a value 

void insertAtValue(struct Node *head,int data,int value){

struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    ptr->data=data;
             
    struct Node *p=head->next;
    struct Node *q=head;

    while(p->data!=value && p->next!=head){

        q=q->next;
        p=p->next;


    }

    ptr->next=p->next;
    q->next=ptr;

}


int main(){


//memory for every node is allocated seperately

//allocating the memory of a node containing it in a pointer which points towards head node
struct Node *head=(struct Node*)malloc(sizeof(struct Node));

//memory for second node
 struct Node *second=(struct Node*)malloc(sizeof(struct Node));
 //memory for third node
 struct Node *third=(struct Node*)malloc(sizeof(struct Node));

 //memory for fourth node
 struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));  


//assinging the values at every node and link8ing each node with it's next node

//linking head node to second
head->data=34;
head->next=second;


//linking second to third
second->data=67;
second->next=third;


//linking third to fourth
third->data=55;
third->next=fourth;

//linking fourth to head
fourth->data=92;
fourth->next=head;

   

printf("\nBefore insertion:");
traversal(head);

//head=insertAtFirst(head,77);
//insertAtEnd(head,72);

//insertAtIndex(head,2,3);

//insertAfter(head,104,third);

insertAtValue(head,199,55);

printf("\nAfter insertion:");
traversal(head);


    return 0;
}

