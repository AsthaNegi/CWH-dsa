#include<stdio.h>
#include<stdlib.h>


struct Node{

int data;
struct Node *next;

};



void CircularSearch(struct Node *head,int element){

struct Node *p=head;
int i=0;

    do{
        if(p->data==element){

            printf("\nElementfound at index:%d\n",i);
            break;

        }
        i++;
        p=p->next;


    }while(p!=head);

    if(p==head){

        printf("\nElement not found!");
    }





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

CircularSearch(head,2);




    return 0;
}