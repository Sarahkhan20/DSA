//bubble  sort 
#include <stdio.h>

void printArray(int *arr,int size){
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
       
    }
}
 void selectionSort(int *arr,int size){
  //loop for passes
    for(int i=0;i<size;i++) {
       int indexOfMin = i;
          // loop for each pass 
          for(int j=i+1;j<size;j++)
          {
              if(arr[j]<arr[indexOfMin]);
              {
                  indexOfMin=j;
              }
          }
           int temp=arr[i];
            arr[i]=arr[indexOfMin];
            arr[indexOfMin]=temp;
        }
         
    }
    
 
 
int main(){
    int arr[]= { 3,5,2,13,12};
    int size=5;
    printArray(arr,size);
    selectionSort(arr,size);
     printf("\n\nSorted Array : \n");
    printArray(arr,size);
    return 0;
}


//Dry run 
  // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13
