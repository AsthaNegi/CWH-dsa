#include<conio.h>
#include<stdio.h>
#include<stdlib.h>



//defining a node


struct Node{

int data;
struct Node *next;

};

struct Node *top=NULL;
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

int pop(struct Node* tp){

if(isEmpty(tp)){

printf("\nStack underflow!");

}

else{
  int data=tp->data;
  struct Node *n=tp;
  top=n->next;
  free(n);

  return data;

}   


}
 


int peek(int pos){

    struct Node *ptr=top;
    for(int i=0;i<pos-1 && ptr!=NULL;i++ ){

        ptr=ptr->next;



    } 
if(ptr!=NULL){

return ptr->data;

}

else{

    return -1;
}

}


int stackTop(struct Node *top){

return top->data; 

}



int stackBottom(struct Node *top){
  

  struct Node *ptr=top;

  while(ptr->next!=NULL){

   ptr=ptr->next;

  }

return ptr->data;

}

int main(){

    //assigning value to top node

    
    
    top=push(top,34);
    top=push(top,4);
    top=push(top,89);

    Traversal(top);

    //int element = pop(top);
    //printf("\npopped element is:%d",element);
    //Traversal(top);

    //int pos;
    //scanf("%d",&pos);
    //int value=peek(pos);
    //printf("\nValue at position %d is %d",pos,value);

    printf("\nThe bottom element is %d",stackBottom(top));








    




    


    





    return 0;
}