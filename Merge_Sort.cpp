
#include<iostream>
//#define SIZE 20
using namespace std;

class mSort
{
	//int size=20;
	public:
	merge(int arr[],int low,int mid,int high)
		{
			int SIZE=20;
			int b[SIZE];
			int i=low,j=mid+1,k=low;
			while(i<=mid && j<=high)
			{
				if(arr[i]<=arr[j])
				{
					b[k]=arr[i];
					i++;
				}
				else
				{
					b[k]=arr[j];
					j++;
				}
				k++;
			}
			while(j<=high)
			{
				b[k]=arr[j];
				j++;
				k++;
			}
			while(i<=mid)
			{
				b[k]=arr[i];
				i++;
				k++;
			}
			for(k=low;k<=high;k++)
			{
				arr[k]=b[k];
			}
		}
		mergeSorting(int arr[],int low,int high)
		{
			int mid;
			if(low<high)
			{
				 mid=(low+high)/2;
			}
			mergeSorting(arr,low,mid);
			mergeSorting(arr,mid+1,high);
			merge(arr,low,mid,high);
		}
};

int main()
{
	mSort sort;
	int SIZE,arr[20];
	cout<<"Enter the no. of elements ";
	cin>>SIZE;
	cout<<"Enter the elements "<<endl;
	for(int i=0;i<SIZE;i++)
	{
		cin>>arr[i];
	}
	sort.mergeSorting(arr,0,SIZE-1);
	cout<<"Sorted array elements are- ";
	for(int i=0;i<SIZE;i++)
	{
		cout<<arr[i];
	}
return 0;
}
