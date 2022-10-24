#include<stdio.h>
#include<math.h>

void insertionSort(int [] , int );
void printArray(int [] , int );
int main(){
    int arr[] = {12 , 89 , 90 , 15 , 31 , 56 };
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr , n);
    printArray(arr , n);

    return 0 ;
}

void insertionSort(int arr[] , int n){

    int key,j,i;
    for(i = 1 ; i < n ; i++){
        key=arr[i];
        j = i - 1 ; 

        while(j>0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1 ;
        }
        arr[j+1] = key;
    }
}
void printArray(int arr[] , int n){

    for(int i =0 ; i < n ; i++){
        printf("%d ",arr[i]);
        
    }


}