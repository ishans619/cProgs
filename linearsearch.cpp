#include <stdio.h>
 
int search(int arr[], int n, int item)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == item)
            return i;
    return 1;
}

int shift(int arr[] , int temp , int n)
{
     temp=arr[0];
    for(int i=0 ; i<n-1 ; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
 
   

}

int del(int arr[], int pos , int n)
{
     if (pos < n+1)  
    {
        for (int i = pos - 1; i < n -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
       
          
    }  
    
}
 

int main()
{
    int arr[] = { 23 , 13 , 14 , 25 , 32 , 52 , 40 };
    int item = 23;
    int n = 7;
    int pos = 5;
    int temp;
   
    
    int result = search(arr, n, item);
    (result == 1)
        ? printf("Element is not present in array")
        : printf("Jersey number 23 is present at index %d", result);

         printf("\nInitially the order was : \n");
        for(int i = 0 ; i < n ; i++)
        {
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }

    int result2 = shift(arr , temp , n);
    
         printf("\nNew order after changing the position of jersey number 23 to the 7th position\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }



        printf("\nNow the jersey number 52 is at the 5th position in the line : \n");
        for(int i = 0 ; i < n ; i++)
        {
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }
    int result3 = del(arr , pos , n);
     printf (" \nThe resultant order after taking out jersey number 52 is: \n");  
          
        // display the final array  
        for (int i = 0; i < n - 1; i++)  
        {  
            printf (" arr[%d] = ", i);  
            printf (" %d \n", arr[i]);  
        }        
    return 0;
}