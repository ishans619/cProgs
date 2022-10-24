#include<stdio.h>
#include<conio.h>

int main(){

    int i , marks[5] , n , sum = 0;
    float avg ; 

    printf("enter the number of elements");
    scanf("%d" , &n);

    printf("enter the elements of the array");

    for(i = 0 ; i < n ; i++){

        scanf("%d" , &marks);
    }

    for(int i = 0 ; i < n ; i++){

        sum = sum + marks[i];

    }

    avg = sum/n;

    printf("the sum of the elements is" , sum);
    printf("the average of the elements is" , avg);
    return 0;
  
}