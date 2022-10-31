//bubble  sort 
#include <stdio.h>

void printArray(int *arr,int size){
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
       
    }
}
 void bubbleSort(int *arr,int size){
  //loop for passes
    for(int i=0;i<size;i++) {
        // loop for each pass 

        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
        }
     }
 }
 
int main(){
    //sorted            unsorted
    //0   1    2        3  4   5
    // 12  54  65       7  23  9
    // int arr[]= { 12,54,65,7,23,9};
     int arr[]= { 1,2,3,4,5,6};
    int size=6;
    printArray(arr,size);
    bubbleSort(arr,size);
     printf("\n\nSorted Array : \n");
    printArray(arr,size);
    return 0;
}


