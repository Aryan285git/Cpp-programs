#include <iostream>
using namespace std;
int  main()
{
	cout<<"Number of inputs in an array"<<endl;
	int n;
	cin>>n;
	int input[100];
		for(int i=0;i<n;i++)
		{
			cin>>input[i];
		}
	cout<<"Enter the Number to be searched"<<endl;
	int a;
	cin>>a;
	int l=-1;
		for(int i=0;i<n;i++)
		{
			if(input[i]==a)
				{
					l=i;
					break;
				}
		}
		cout<<l;
		return 0;
}