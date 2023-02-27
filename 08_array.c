#include<stdio.h>
#include<stdlib.h>


//defining the array 

//array custom data type consists of three things
//total size  2: used size 3: a pointer containing base address

struct myArray{

int total_size;
int used_size;
//pointer will store the base address
int *ptr;

};


//allocating the memory of the array by defining the createarray function 


void createArray(struct myArray* a,int tsize,int usize){

//first total size and used size of array is defined
a->total_size=tsize;
a->used_size=usize;

//then using total size and malloc function we will be assigning the memory to our array
a->ptr=(int*)malloc(tsize*sizeof(int));


}


//the values in the array will be set through set array function
//it will need array pointer ie the base address
void setArray(struct myArray *a){
int n;

//the loop will execute till used size

for(int i=0;i<a->used_size;i++){

  printf("\nEnter the value:");
  scanf("%d",&n);
  //the different blocks of array is accessed by array pointer containing base address
  (a->ptr)[i]=n;
 
}    

}


//show function is used to show the values contained in array
void showArray(struct myArray *a){

for(int i=0;i<a->used_size;i++){

  
  printf("\n%d",(a->ptr)[i]);
 
}    


}

int main(){


//the myarray is created but the memory is not allocated to our array

struct myArray marks;

//createArray function is called to allocate memory to our array

// the size of the array and used size will be defined here only 

createArray(&marks,10,3);

printf("We will enter the lements:"); 
//entering the elements

setArray(&marks);

printf("\nwe will show the elements");
//showing the array
showArray(&marks);

return 1;  
}