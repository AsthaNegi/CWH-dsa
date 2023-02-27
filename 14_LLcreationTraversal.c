// linked list 
// continous memory is not necessary 
//each node consists of two blocks one block contains data and another block contains the pointer to the next node
//the last node points to the NULL

#include<stdio.h>
#include<stdlib.h>

//defining the node which consists of data and a pointer whiuch will point to next node
struct Node{

int data;
struct Node *next;

};

//traversal function defined

//the pointer containing head node is passed as argument
void traversal(struct Node *ptr){

//the loop continues till the pointer does not point to NULL
while(ptr!=NULL){

//the data of ptr pointing is printed
    printf("\nelement:%d",ptr->data);

    //the pointer is pointed to the next node
    ptr=ptr->next;

}

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
third->data=88;
third->next=fourth;

//linking fourth to NULL
fourth->data=92;
fourth->next=NULL;


//three steps in making a linked list
//define the node
//alloacte the memory to each node
//assign the value to each node and link each node to next node

//calling the traversal function
traversal(head);




    return 0;
}

