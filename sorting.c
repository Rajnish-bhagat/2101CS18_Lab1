#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//Quick sort
int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (pivot >= arr[i])
            i++;
        while (pivot < arr[j])
            j--;
        if (i < j)
            swap(&arr[i], &arr[j]);
    }
    swap(&arr[low], &arr[j]);
    return j;
}
  
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
  
//Merge sort
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 




//Bubble sort 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}



//selection sort algorithm
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        
        swap(&arr[min_idx], &arr[i]);
    }
}



/* Function for sorting an array using insertion sort algorithm */
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
    {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) 
        {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// A function to print an array of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
	printf("\n");
}

int main()
{
    int n;
    printf("Enter the size of array you want to sort : ");
    scanf("%d",&n);

    printf("Enter the elements of the array you want to sort\n");

	int arr[n];
	for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int choice;
    printf("Enter 1 for insertion sort, 2 for selection sort, 3 for bubble sort, 4 for merge sort, 5 for quick sort : ");
    scanf("%d",&choice);

    if(choice==1)
    {
       //function call for insertion sort
	   insertionSort(arr, n);
       //printing sorted array
       printf("The sorted array using Insertion sort algorithm is\n");
    }
    else if(choice==2)
    {
        selectionSort(arr, n);
        printf("The sorted array using Selection sort algorithm is\n");
    }
    else if(choice==3)
    {
        bubbleSort(arr, n);
        printf("The sorted array using Bubble sort algorithm is\n");
    }
    else if(choice==4)
    {
        mergeSort(arr, 0, n-1);
        printf("The sorted array using Merge sort algorithm is\n");
    }
    else if(choice==5)
    {
        quickSort(arr, 0, n-1);
        printf("The sorted array using Quick sort algorithm is\n");
    }
    
    
    printArray(arr, n);

	return 0;
}
