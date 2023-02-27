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


Traversal(head);



    return 0;
}