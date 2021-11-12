#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int a[5];
		int in=0,e=0;
		for(int j=0;j<5;j++)
			cin>>a[j];
		for(int j=0;j<5;j++)
		{
			if(a[j]==1)
				in++;
			if(a[j]==2)
				e++;
		}
		if(in>e)
			cout<<"INDIA"<<endl;
		else if(in<e)
			cout<<"ENGLAND"<<endl;
		else
			cout<<"DRAW"<<endl;
		}
	return 0;
}