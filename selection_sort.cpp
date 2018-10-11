//SELECTION SORT
using namespace std;
#include<iostream>
selection_sort(int arr[],int n)
{     int temp=0;
int min;
	for(int i=0;i<n;i++)
	{
		 min=arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			min=arr[j];
		}
		temp=arr[i];
		arr[i]=min;
		min=temp;
	}
	for(int k=0;k<n;k++)
	cout<<arr[k]<<" ";
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
    selection_sort(arr,n);
	
}
