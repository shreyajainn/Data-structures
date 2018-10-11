//	QUICK SORT
using namespace std;
#include<iostream>
void swap(int *p,int *n)
{
	int temp;
	temp=*p;
	*p=*n;
	*n=temp;
}
int partion(int arr[],int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
		swap(&arr[i],&arr[j]);
	}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void quick(int arr[],int low,int high)
{
	int pi;
	if(low<high)
	{
		pi = partion(arr,low,high);
		quick(arr,low,pi-1);
		quick(arr,pi+1,high);
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
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int low= 0;
	int high=n;
	quick(arr,low,high-1);
	print(arr,n);
}
