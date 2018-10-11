// INSERTION SORT

using namespace std;
#include<iostream>
void sort(int arr[],int n)
{
	int temp;
	int k=1;
	while(k<=n-1)
	{
	
		temp=arr[k];
			int j=k-1;
		while(temp<=arr[j])
		{
			arr[j+1]=arr[j];
			arr[j]=temp;
			j--;
		}
		k++;
		
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,n);
}
