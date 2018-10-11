//--------bubble sort---------//
using namespace std;
#include<iostream>
void bubble_sort(int a[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp = a[j];
			a[j]=a[j+1];
			a[j+1]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	bubble_sort(arr,n);
	
}
