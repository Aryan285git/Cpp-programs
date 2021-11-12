#include <iostream>
# define SIZE 25
using namespace std;
int sum(int a[],int n)
{
	if(n==0)
		return 0;
	else{
		return a[n]+sum(a,n-1);
	}

}
int main(){
	int n;
	int a[SIZE];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sumarray=sum(a,n-1);
	cout<<sumarray;

}