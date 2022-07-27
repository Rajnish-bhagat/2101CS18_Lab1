#include <math.h>
#include <stdio.h>

//Part of selection sort algorithm
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
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
    printf("Enter 1 for insertion sort, 2 for selection sort : ");
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
    
    printArray(arr, n);

	return 0;
}
