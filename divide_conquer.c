#include<stdio.h>
int find(int arr[],int  low,int high );
int find(int arr[],int low,int high)
{
    if(low==high)return arr[low];
    int mid=(low+high)/2;
   int max1= find(arr,low,mid);
   int max2 =find(arr,mid+1,high);
   return max1>max2?max1:max2;
}