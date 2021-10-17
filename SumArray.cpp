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
		int sum =0;
		for(int i=0;i<n;i++)
		{
			sum=sum+input[i];
			cout<<input[i]<<endl;
		}
		cout<<sum;
		return 0;
}