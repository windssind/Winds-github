#include<stdio.h>
void mergesort(int arr[],int save[], int low,  int high);
void merge(int arr[],int save[], int low ,int mid, int high);
int main()
{
	int arr[] = { 1,4,8,7,6,2,5,3 };
	int save[8] = {0};
	mergesort(arr,save, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", save[i]);
	}
}
void mergesort(int arr[],int save[], int low, int high)
{
	if (low == high)return;
	else {
		int mid = (low + high) / 2;
		mergesort(arr,save, low, mid);
		mergesort(arr, save,mid + 1, high);
		merge(arr,save,low, mid, high);
	}
}
void merge(int arr[], int save[], int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;
	int point = low;
	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			save[point] = arr[i];
			point++;
			i++;
		}

		else if (arr[i] >= arr[j])
		{
			save[point] = arr[j];
			point++;
			j++;
		}
	}

	if (i > mid)
	{
		while (point <= high)
		{
			save[point] = arr[j];
			point++;
			j++;
		}
	}

	else if (j > mid)
	{
		while (point <= high)
		{
			save[point] = arr[i];
			point++;
			i++;
		}
	}
	for (int i = low; i <= high; i++)
	{
		arr[i] = save[i];

	}
	for (int i = low; i <= high; i++)
	{
		arr[i] = save[i];
	}
}
