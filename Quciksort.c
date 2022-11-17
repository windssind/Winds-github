#include<stdio.h>
void Quicksort(int arr[], int low, int high);
void Quicksort(int arr[], int low, int high)
{
    if (low >= high)return;
    int mid = (low + high) / 2;
    int i = low;
    int j = high;
    int temp = 0;
    int insert = arr[low];
    while (i < j)
    {
        while (i < j && arr[j]>=insert) {
            j--;

        }
        while (i < j && arr[i] <= insert) {
            i++;
        }

        

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }




        arr[low] = arr[i];
        arr[i] = insert;
        //只需要将目标的放在找到的位置就行了(在这个算法中,第一个元素必定不会被换走)
        if(i>low)Quicksort(arr, low, i-1);
        if(i<high)Quicksort(arr, i + 1, high);
    }
