#include<stdio.h>

// 23507 - Rakshita Bhatia

void shellSort(int arr[], int n) 
{
    // time complexity - O(n*n) 

	for (int gap = n/2; gap > 0; gap /= 2) 
	{ 
		for (int i = gap; i < n; i += 1) 
		{ 
			int temp = arr[i]; 

			int j;			 
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
				arr[j] = arr[j - gap]; 
			
			arr[j] = temp; 
		} 
	} 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i=0; i < n; i++) 
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
    
    printf("Before Shell Sort : "); 
    printArray(arr,n);
	
    shellSort(arr, n); 
	
    printf(" After Shell Sort : "); 
	printArray(arr, n); 
	
    return 0; 
} 
