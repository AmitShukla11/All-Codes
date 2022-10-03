#include <stdio.h>

// 23507 - Rakshita Bhatia

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1;
	int r = 2 * i + 2; 

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(&arr[i], &arr[largest]);

		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
    // in-place type of algorithm
    // works in O(n*logn) time complexity
	
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		swap(&arr[0], &arr[i]);

		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 


int main()
{
	int n ;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Elements : ");
    for(int i =0;i<n;i++) scanf("%d",&arr[i]);
    
    printf("=========> o <=========\n");

    printf("Before Heap Sort : "); 
    printArray(arr,n);
	
    heapSort(arr, n); 
	
    printf(" After Heap Sort : "); 
    printArray(arr, n); 
    return 0;
}
