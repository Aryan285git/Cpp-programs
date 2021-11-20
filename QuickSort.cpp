#include <iostream>
using namespace std;
void sort( int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int i=l;
	int j=h;
	while(i<j)
	{
		do{
			i++;
		}while(a[i]<=pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			swap(a[i],a[j]);
		}
	}
		swap(a[l],a[j]);
		return j;
	}
	void quicksort(int a[],int l,int h)
	{
		if(l<h)
		{
			int j=partition(a,l,h);
			quicksort(a,l,j);
			quicksort(a,j+1,h);
		}
	}
	int main(){
		int a[6]={5,4,3,2,1,6};
		quicksort(a,0,6);
		for(int i=0;i<6;i++)
		{
			cout<<a[i]<<" ";
		}
	}


