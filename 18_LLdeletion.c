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



//case 1: delete the first node
//the head is required the deletion of head is performed and new head is returned

struct Node* deleteAtFirst(struct Node *head){

// the head is made to point to the next node
struct Node* p=head;
head=head->next;

//then memory stored by first node is freed
free(p);



return head;

}


//case 2: Deletion at the end


struct Node* deleteAtEnd(struct Node* head){

//two struct node pointers are required 
struct Node *p=head;
struct Node *q=head->next;

//the second pointer is made to point till last node
while(q->next!=NULL){

    p=p->next;
    q=q->next;
}

//the first ppinter is then made to poinbt to NULL
p->next=NULL;

//the memory of last node is freed with the help of second pointer
free(q);


return head;

}


//case 3: deletion at given index
//head and index is required

struct Node* deleteAtIndex(struct Node* head,int index){

//two pointers are required
struct Node  *p=head;
struct Node  *q=head->next;


int i=0;

//loop is executed till the second pointer is made to point at given index
while(i!=index-1){


p=p->next;
q=q->next;

i++;
}

//the first pointer is then made to point to the node next to the index or second pointer
p->next=q->next;

//the node at index is freed with the help of second pointer
free(q);


return head;

}

//case 4: Delete the node given 

//head and the given node is needed

struct Node* deleteAtNode(struct Node *head,struct Node *node){

//only one pointer is needed

struct Node *p=head;

//pointer is updated till it reaches a node before the given node
while(p->next!=node){

    p=p->next;
}

// the node before given node is pointed to the node next to given node

p->next=node->next;

//the given node is freed
free(node);


return head;
}


//case 5: deletion of node at given value
//head and value of node is needed
struct Node* deleteAtValue(struct Node *head,int value){

//two pointers are required
    struct Node *p=head;
    struct Node *q=head->next;

//loop is executed till the node having that value is found out or the pointer reaches the last node in search of value
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }

//it is checked that whether the node having value was found if it was found only then the previous node is linked to the node next to found node
    if(q->data==value){

        p->next=q->next;

        //memory of found node is freeed
        free(q);


    }

    



    return head;
}

void main(){



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




printf("\nBefore deletion:");
traversal(head);

//head=deleteAtFirst(head);

//head=deleteAtEnd(head);

//head=deleteAtIndex(head,2);

//head=deleteAtNode(head,second);

head=deleteAtValue(head,77);

printf("\nAfter deletion:");
traversal(head);





return 1;

}