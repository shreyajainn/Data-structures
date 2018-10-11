//MERGE SORT
using namespace std;
#include<iostream>
void merge(int arr[], int l, int m, int r) ;
merge_sort(int arr[],int low,int high)
{

	if(low<high)
	{
	int	m=low+(high-low)/2;
	merge_sort(arr,low,m);
	merge_sort(arr,m+1,high);
	merge(arr,low,m,high);
}}
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
  
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}
void print(int arr[],int n)
{ 
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int low=0;
	int high=n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	merge_sort(arr,low,high-1);
	print(arr,n);
}
