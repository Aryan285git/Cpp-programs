#include <iostream>
using namespace std;
void binarySearch(int a[],int start,int end,int n)
{
	int pos=-1;
	while(start<end)
	{
		int mid=start+(end-start)/2;
		if(n==a[mid])
			{
				pos=mid;
				break;
			}
		else if(n>a[mid])
			start=mid+1;
		else
			end=mid-1;
	}
	if(pos!=-1)
		cout<<"Element is at position : "<<pos<<endl;
	else
		cout<<"Element not found"<<endl;
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[10]={12,19,21,36,43,50,64,75,88,95};
	print(a,10);
	binarySearch(a,0,10,36);
	return 0;
}