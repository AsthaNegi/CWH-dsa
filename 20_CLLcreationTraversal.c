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



traversal(head);




    return 0;
}

