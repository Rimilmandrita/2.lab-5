#include<iostream>
using namespace std;

class bubbleSort
{            
	public:
	
		
	int* sort(int a[],int n)
	{
	int temp;
	for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	return a;
	}
	
};

int main()
{
            bubbleSort b;
	int n, i, arr[50],*p;
	cout<<"Enter total number of elements.";
	cin>>n;
	cout<<"\nEnter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe array is:";
	{
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}	
	}
	cout<<"\nSorting array using bubble sort technique...\n";
	p=b.sort(arr,n);
		cout<<"Elements sorted successfully..!!\n";
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<*(p+i)<<" ";
	}

}
