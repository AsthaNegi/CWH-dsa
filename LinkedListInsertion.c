#include<stdio.h>
#include<stdlib.h>

// defining the definition of node
struct Node{

int data;
struct Node *next;

};

//defining the traversal function
void LinkedListTraversal(struct Node* ptr){

    while(ptr!=NULL){

        printf("element: %d\n",ptr->data);
        ptr=ptr->next;

    }


}

struct Node* InsertAtFirst(struct Node *head,int data){

struct Node *ptr= (struct node*)malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=data;

return ptr;

}


struct Node* InsertAtIndex(struct Node *head, int data,int index){

struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
 
struct Node *p=head;
int  i=0;

while(i!=index-1){
p=p->next;
i++;

}

ptr->next=p->next;
p->next=ptr;

return head;


}


// function for inserting the node in the end

struct Node* InsertAtEnd(struct Node *head,int data){

 struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
 ptr->data=data;

 struct Node *p=head;

 while(p->next!=NULL){

   p=p->next;


 }

 p->next=ptr;
 ptr->next=NULL;

 return head;
 





}


//Insert after a node

struct Node* InsertAfterNode(struct Node *head,struct Node *prevNode,int data){


  struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;

  

        ptr->next=prevNode->next;
        prevNode->next=ptr;

    return head;    
 




  




} 



int main(){

//declaring pointers to keep the nodes    

struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

// allocating dynamic memory to nodes and storing their addresses

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

//giving values to nodes and linking them

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=NULL;

// calling the traversal function

LinkedListTraversal(head);


//insertion at first
//printf("\nInsert at first:\n");

//head=InsertAtFirst(head,22);
//LinkedListTraversal(head);

// insertion at any  index

/*printf("\nInsertion after a given index that is in between:\n");

head=InsertAtIndex(head,33,2);
LinkedListTraversal(head);
*/
/*

printf("\nInserying at the end:\n");

head=InsertAtEnd(head,64);
LinkedListTraversal(head); */


printf("\nInserying at the end:\n");

head=InsertAfterNode(head,second,64);
LinkedListTraversal(head);






    return 0;
}








































































































































































































































