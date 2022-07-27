#include <math.h>
#include <stdio.h>

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
    printf("The sorted array using Insertion sort algorithm is\n");
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

    //function call for insertion sort
	insertionSort(arr, n);
    //printing sorted array
	printArray(arr, n);

	return 0;
}
