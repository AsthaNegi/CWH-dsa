#include<stdio.h>
#include<stdlib.h>

//struct stack is defined
struct stack {
   int size;
   int top;
   int *arr;


};

//isEmpty function is defined

int isEmpty(struct stack *ptr){

    if(ptr->top==-1){

        return 1;

    }
    else{


        return 0;
    }



}

//isFull function is defined

int isFull(struct stack *ptr){

    if(ptr->top==ptr->size-1){

        return 1;
    }
    else{

        return 0;
    }




}


void push(struct stack *ptr,int val){

    if(isFull(ptr)){

        printf("\nStack is full! cannot push %d in stack",val);



    }
    else{

        ptr->top++;
        ptr->arr[ptr->top]=val;


    }



}

int pop(struct stack *ptr){

if(isEmpty(ptr)){

printf("\nCannot pop! stack is empty");
return -1;
}
else{


    int val=ptr->arr[ptr->top];
    ptr->top--;

    return val;



}



}


int peek(struct stack *ptr,int position){
int index=ptr->top-position+1;
if(index<0){

    printf("\nIndex is invalid!");
    return -1;
}  
else{

  return ptr->arr[index];

}

}


//defining stackTop operation
int stackTop(struct stack *ptr){

return ptr->arr[ptr->top];

}


//dedfining stackBottom operation

int stackBottom(struct stack *ptr){

return ptr->arr[0];

}



int main(){

//assigning memory to structure stack 
struct stack *s=(struct stack*)malloc(sizeof(struct stack ));

//assigning values to first stack
s->size=7;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));


//before pushing 
printf("\n before pushing!\n");
printf("\nempty:%d",isEmpty(s));
printf("\nfull:%d",isFull(s));
printf("\n%d",s->arr[s->top]);



//pushing the elements
printf("\n after pushing!\n");
push(s,10);
push(s,20);
push(s,30);
push(s,40);
push(s,50);
push(s,60);
//printf("\nempty:%d",isEmpty(s));
//printf("\nfull:%d",isFull(s));
//printf("\n%d",s->arr[s->top]);

//poping the top most element 
//printf("\nAfter poping!");
//pop(s);
//printf("\n%d",s->arr[s->top]);



//travewrsing through the array using peek operation

for(int j=1;j<=s->top+1;j++){
printf("\nelement at posiotion %d is %d",j,peek(s,j));

}


//calling top element
printf("\ntop:%d",stackTop(s));


//calling bottom element
printf("\nbottom:%d",stackBottom(s));







    return 0;
}