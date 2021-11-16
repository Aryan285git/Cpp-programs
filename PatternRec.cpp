#include <iostream>
using namespace std;
void printn(int n)
{
	if(n==0)
		return;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	printn(n-1);
}
int main()
{
	printn(5);
}