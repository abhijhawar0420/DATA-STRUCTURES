#include<stdio.h>
#include<stdlib.h>
#include"display.c"
int size;
void Wave_Sort(int arr[size])
{
     int i=0;
     while(i<size-1)
     {
          if(arr[i]>arr[i-1])
          {
               swap(arr,i-1,i);
          }
          if(arr[i]>arr[i+1] && i>size-1)
          {
               swap(arr,i+1,i);
          }
          i=i+2;
     }
     display(arr,size);
}
void main()
{
     printf("Enter the Size of the Array : \n");
     scanf("%d",&size);
     int arr[size];
     for(int i=0;i<size;i++)
     {
          printf("Element %d : ",i+1);
          scanf("%d",&arr[i]);
     }
     display(arr,size);
     printf("\nThe Sorted Array is : \n");
     Wave_Sort(arr);
}