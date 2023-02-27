#include<stdio.h>
#include<stdlib.h>



struct stack{

int size;
int top;
int *arr;

};



int isEmpty(struct stack *ptr){


if(ptr->arr[ptr->top]==NULL){
return 1;

}

else{

  return 0;
}


}


int isFull(struct stack *ptr){


if(ptr->top==size-1){
return 1;

}

else{

  return 0;
}


}



void push(struct stack *ptr,char data){

if(isFull(ptr)){

  printf("\nStack is full!");
}
else{
   
   ptr->top++;
   ptr->arr[ptr->top]=data;

}

}

char pop(struct stack *ptr){

  if(isEmpty(ptr)){
  printf("\nStack is empty! cannot pop");
  return -1;
  }

  else{

    struct stack *n=ptr;
    char x=n->arr[n->top];
    n->top--;
    return x;




  }

}






int parenthesisMatch(char *exp){

//create and initialise stack

struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=100;
sp->top=-1;
sp->arr=(char*)malloc(sp->size*sizeof(char));


for(int i=0;exp[i]!='\0';i++){


  if(exp[i]=='('){

    push(sp,'(');
  }
  else if(exp[i]==')'){

    pop(sp);



  }

  }

  if(isEmpty(sp)){
    return 1;
  }
  else{

    return 0;
  }



}




}



int main(){
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));

    char *exp="(34-8/27)";

    if(parenthesisMatch(exp)){

      printf("\nParenthesis is matching!");

              
    }
    else{

      printf("\nParenthesis is not matching");
    }




      return 1;
}