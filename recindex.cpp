#include <iostream>
using namespace std;

int search(int a[],int size, int x)
{
	if(a[0]==x)
		return 0;
	else if(size==-1)
		return -1;
	else
	{
		int smallsize= search(a+1,size-1,x);
		if(smallsize==-1)
		return-1;
		else
		return smallsize+1;
	}
}
int main()
{
	int a[]={1,2,3,4,5,6,7};
	cout<< search(a,7,3)<<endl;
}