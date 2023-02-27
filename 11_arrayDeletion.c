#include<stdio.h>
#include<stdlib.h>       

   
   void display(int arr[],int n){
   for(int i=0;i<n;i++){


       printf("%d ",arr[i]);
   }


}


int sortedDeletion(int arr[],int index,int size,int capacity){
 if(index>capacity-1){

      return 0;
  }
  else{

      for(int i=index;i<size-1;i++){

          arr[i]=arr[i+1];
      }

      return 1;

  }


}

int main(){
int size=5,capacity=10,index=11;
    int arr[10]={23,84,99,11,58};

printf("\nbefore deletion:");
    display(arr,size);

int value=sortedDeletion(arr,index,size,capacity);
size-=1;

printf("\nafter deletion:");

if(value){
    printf("\nDletion was successful!\n");
    display(arr,size);
}
else{
   printf("\ndeletion was not done!");

}
    
   






    return 0;
}