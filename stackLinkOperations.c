#include<conio.h>
#include<stdio.h>
#include<stdlib.h>



//defining a node


struct Node{

int data;
struct Node *next;

};


//defining isEmpty function

int isEmpty(struct Node *top){

    if(top==NULL){

        return 1;
    }
    else{
        return 0;
    }



}


//defining isFull function


int isFull(struct Node *top){
struct Node *p=(struct Node*)malloc(sizeof(struct Node));
if(p==NULL){

    return 1;
}
else{

    return 0;
}


}


struct Node* push(struct Node *top,int data){
  
if(isFull(top)){

    printf("\nStack Overflow!\n");
}  
else{
 struct Node *n= (struct Node*)malloc(sizeof(struct Node));
 n->data=data;
 n->next=top;
 top=n;
 return top;




}
   



}

void Traversal(struct Node *top){

    while(top!=NULL){

    printf("\nElement %d",top->data);
    top=top->next;

    }

    



}

int pop(struct Node** top){

if(isEmpty(*top)){

printf("\nStack underflow!");

}

else{
  int data=(*top)->data;
  struct Node *n=*top;
  *top=n->next;
  free(n);
  return data;

}


}



int main(){

    //assigning value to top node

    
    struct Node *top=NULL;
    top=push(top,34);
    top=push(top,4);
    top=push(top,89);

    Traversal(top);

    int element = pop(&top);
    printf("\npopped element is:%d",element);
    Traversal(top);







    




    


    





    return 0;
}