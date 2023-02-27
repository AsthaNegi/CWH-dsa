#include<stdio.h>
#include<stdlib.h>



//making a custom datatype by defining a node
struct Node{

//a node will require two things 1:data it is storing 2:the pointer pointing to next node

    int data;
    struct Node *next;
};
 


//Traversal function is defined 
void Traversal(struct Node *head){

//adress of first node is stored in ptr pointer
    struct Node *ptr=head;

//ptr is updated to next node till ptr does not start pointing to next node
    while(ptr!=NULL){

        printf("\nElement:%d",ptr->data);

        ptr=ptr->next;


    }



}



//case 1: 
//insertion at first node
//updated head is returned after insertion
struct Node* insertAtFirst(struct Node *head,int data){

//memory for new node ahs to be defined every time an insertionb function is called as we are making a new node
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

    
    ptr->data=data;
    ptr->next=head;

//head is updated with new node address
    head=ptr;

//updated haed is returned
    return head;

}


//case 2: insert in the end

//in next three cases there was no need to return the head as address contained bty head is not changed but  still for simpliucity purpose we returned head in every case

struct Node* insertAtEnd(struct Node*head,int data){

struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

//we will require p pointer and nned to update it till it starts pointing the end node
struct Node *p=head;


while(p->next!=NULL){
       
p=p->next;
   

}

ptr->data=data;
p->next=ptr;
ptr->next=NULL;


return head;

}

//case 3: Insert at index
// we would need to pass the value of index at which we want to insert our new node and at that index node will be inserted


//our linked list will start from index 0

//this function won't work for index 0 or indexes which are not present in our linked list


//we would require head,data and index

struct Node* insertAtIndex(struct Node *head,int data,int index){

struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));

//pointer p is required and it will be updated till it starts pointing to the index-1 node
struct Node *p=head;

int i=0;

//loop will stop when p will be pointing to index-1 node
while(i!=index-1){

p=p->next;
i++;


}

ptr->data=data;
ptr->next=p->next;
p->next=ptr;

   
return head;

}





//case 4: Insert after node 

//head is not necessarily required in this case as we can operate through the prevNode provided

// node will be passed along with data
//new node will be inserted after the specified node


struct Node* insertAfterNode(struct Node *head,struct Node *prevNode,int data){

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;


   ptr->next=prevNode->next;
   prevNode->next=ptr;



return head;
}


int main(){

   // new nodes are defined with their memory allocated

struct Node *head=(struct Node*)malloc(sizeof(struct Node));

struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));

//data is set to each node and they are linked to one another
head->data=23;
head->next=second;

second->data=45;
second->next=third;

third->data=67;                                                    third->next=fourth;

fourth->data=89;   
fourth->next=NULL;



printf("\nBefore Insertion:");

Traversal(head);

//head=insertAtFirst(head,99);


//head=insertAtEnd(head,99);
//head=insertAtIndex(head,99,1);

head=insertAfterNode(head,third,99);

printf("\nAfter Insertion:");
Traversal(head);


return 1;
}