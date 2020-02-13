#include<iostream>
using namespace std;
 
 class binarySearch
 {
 	int mid,first,last;
 	public:
int search(int a[],int key,int size)
{
 	for(int i=0;i<size-1;i++)
 	{
 		for(int j=0;j<size-i-1;j++)	//for sorting the array
 		{
 			if(a[j]>a[j+1])	
 			{
 				int temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 			}
		}
	}
	first=0;
	last=size-1;
	while(first<=last)
	{
		mid=(last+first)/2;
		if(a[mid]<key)
		{
			first=mid+1;
		}
		else if(a[mid]==key)
		{
			break;
		}
		else
		{
			last=mid-1;
		}
	}
	return mid;
}
};

int main()
{
	binarySearch bin;
	int i,key,size,a[20],holder;
	cout<<"Enter the no. of elements  ";
	cin>>size;
	cout<<"Enter the elements "<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	cout<<"Enter the searching elements";
	cin>>key;
	holder=bin.search(a,key,size);
	for(i=0;i<size;i++)
	cout<<a[i]<<endl;
	if(holder>=0 && holder<size)
	cout<<"Element found at position at "<<holder+1;
	else
	cout<<"Element not found in it";
	
	return 0;
}
