#include<iostream>

using namespace std;

class QuickSort
{
	int i;
	public:
	/*	void setArray(int size)
		{
			for(i=0;i<size;i++)
			{
				cin>>a[i];
			}
		}	*/
		void getArray(int size,int a[])
		{
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<" ";
			}
			
		}
		
		void qSorting(int a[],int first,int last)
		{
			int i,j,pivot,temp;
			if(first<last)	
			{
				pivot=first;
				i=first;
				j=last;
				while(i<j)
				{
					while(a[i]<=a[pivot])
						i++;
					while(a[j]>a[pivot])
						j--;
					if(i<j)
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
				temp=a[pivot];
				a[pivot]=a[j];
				a[j]=temp;
				qSorting(a,first,j-1);
				qSorting(a,j+1,last);
			}
		}
};

int main()
{
	QuickSort sort; 
	int size,a[20],i;
	cout<<"Enter the no. of elements";
	cin>>size;
	cout<<"Enter the elements"<<endl;
	for(i=0;i<size;i++)
			{
				cin>>a[i];
			}
	sort.qSorting(a,0,size-1);
	cout<<"Result -"<<endl;
	sort.getArray(size,a);
	
return 0;		
	
}
