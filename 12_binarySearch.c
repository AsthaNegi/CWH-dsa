//Binary search
//works on sorted arrays
//time complexicity O(logn)

#include<stdio.h>
#include<stdlib.h>

//array size and element is taken as arguments in the function

int binarySearch(int arr[],int size,int element){

    

    int low,high,mid;

    //low will be the first element 
    //high will be the last element

    low=0;
    high=size-1;

// searching will continue until either low does not become greater than high  or the element was found in between the process

    while(low<=high){




//the mid is found out everytime
        mid=(low+high)/2;

// the element is checked at the mid index
        if(arr[mid]==element){

            //if found the index is returned
            return mid;

        }
//  if element was not found in mid the low or high is changed

//if element was greater than element at mid index ,low is changed    
        if(element>arr[mid]){
            low=mid+1;
        }
//if element was less than element at mid index, high is changed 

        else{
            high=mid-1;
        }



    }

 // if element was not found negative index is rerturned   
    return -1;



}



int main(){
//array is declared
    int arr[]={23,44,56,78,80,99};

    // size is found
    int size=sizeof(arr)/sizeof(int);
//element to be searched is declared
    int element=80;

// the index returned in stored in an int variable
    int searchIndex=binarySearch(arr,size,element);


    printf("\nthe element is found at index %d",searchIndex);





    return 0;
}