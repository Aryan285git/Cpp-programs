#include <iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int n,r;
	cout<<"ENTER N AND R"<<endl;
	cin>>n;
	cin>>r;
	int nf=fact(n);
	int rf=fact(r);
	int n_r=fact(n-r);
	float f= ((float)nf)/((float)rf*n_r);
	cout<<f<<endl;

}