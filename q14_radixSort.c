#include<stdio.h>

// 23507 - Rakshita Bhatia

int get_max (int a[], int n){
   int max = a[0];
   for (int i = 1; i < n; i++)
      if (a[i] > max)
         max = a[i];
   return max;
}

void radixSort (int a[], int n)
{
    //time complexity O(kn)

   int bucket[10][10], bucket_cnt[10];
   int i, j, k, r, NOP = 0, divisor = 1, lar, pass;
   lar = get_max(a, n);
   while (lar > 0){
      NOP++;
      lar /= 10;
   }
   for (pass = 0; pass < NOP; pass++){
      for (i = 0; i < 10; i++){
         bucket_cnt[i] = 0;
      }
      for (i = 0; i < n; i++){
         r = (a[i] / divisor) % 10;
         bucket[r][bucket_cnt[r]] = a[i];
         bucket_cnt[r] += 1;
      }
      i = 0;
      for (k = 0; k < 10; k++){
         for (j = 0; j < bucket_cnt[k]; j++){
            a[i] = bucket[k][j];
            i++;
         }
      }
      divisor *= 10;
   }
}

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main ()
{
   int i, n, arr[10];
   printf("Enter Number of Elements : ");
   scanf("%d", &n);
   
   printf("Enter Elements : ");
   for (i = 0; i < n; i++) scanf ("%d", &arr[i]);

   printf("=========> o <=========\n");
   
    printf("Before Radix Sort : "); 
    printArray(arr,n);
	
    radixSort(arr, n); 
	
    printf(" After Radix Sort : "); 
    printArray(arr, n); 
   return 0;
}