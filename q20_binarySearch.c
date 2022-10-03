#include <stdio.h> 

// 23507 - Rakshita Bhatia

int binarySearch(int arr[], int l, int r, int search) 
{ 
    //works in O(logn) time if array is sorted
	if (r >= l) { 
		int mid = l + (r - l) / 2; 


		if (arr[mid] == search) 
			return mid; 

		if (arr[mid] > search) 
			return binarySearch(arr, l, mid - 1, search); 


		return binarySearch(arr, mid + 1, r, search); 
	} 

	return -1; 
} 

int main(void) 
{
    
	int n ,search,result;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    
	int arr[n];
    printf("Enter Elements in Ascending order (must): ");
    for(int i =0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter Value to be Searched : ");
    scanf("%d" , &search);

	result = binarySearch(arr, 0, n-1, search);

	if(result == -1 ) 
        printf("Element not found \n");
    else
        printf("Element found at index : %d \n" , result);
	return 0;
} 
