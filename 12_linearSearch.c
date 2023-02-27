//linear search 
//sorted or un sorted array
//time complexity O(n)

#include<stdio.h>
#include<stdlib.h>


// function takes array size and element
int linearSearch(int arr[],int size,int element){


//for loop is used for iterating all the elements
    for(int i=0;i<size;i++){

        //if the element is found in the loop index is returned

        if(arr[i]==element){
            return i;
        }
    }
//if the element is not found negative number is returned
    return -1;




}

int main(){

    int arr[]={23,56,38,96,13,45,673,238};
    //size of array is found out 
    int size=sizeof(arr)/sizeof(int);
    //element to be searched is given
    int element=56;
    // the returned index is stored in an int variable
    int searchIndex=linearSearch(arr,size,element);

    

    printf("\nthe element %d was found at %d index",element,searchIndex);






    return 0;
}