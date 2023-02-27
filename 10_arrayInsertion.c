
//insertion in array

//updation in used size of array is necessary in case of insertion in array


#include<stdio.h>
#include<stdlib.h>




//traversal of array
void display(int arr[],int n){
 
 



  for(int i=0;i<n;i++){
    
    printf("%d ",arr[i]);

  }

  printf("\n");
 
 


}


// insertion in array when order of elements is necessary

int sortedInsertion(int arr[],int index,int element,int size,int capacity){

  if(size>=capacity){

    return 0;
  }
  else{
    for(int i=size-1;i>=index;i--){
      arr[i+1]=arr[i];
    }
    arr[index]=element;
    

    return 1;

  }


}

int main(){

int size=5,capacity=10,element=64,index=0;
int arr[10]={45,78,9,12,30};

printf("\nBefore insertion: ");
display(arr,size);

int value=sortedInsertion(arr,index,element,size,capacity);
size+=1;


if(value){
  printf("\nInsertion was successful!");
  printf("\nafter insertion: ");
  display(arr,size);


}
else{
  printf("\nInsertion was not successful!");
}



return 0;
}