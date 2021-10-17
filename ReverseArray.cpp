#include <iostream>
using namespace std;
void reverse(int a[],int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	print(a,10);
	reverse(a,10);
	print(a,10);
	return 0;
}