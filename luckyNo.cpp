#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int a,b,c;
		bool check=false;
		cin>>a;
		cin>>b;
		cin>>c;
		if(a==7||b==7||c==7)
			check=true;
		if(check==false)
		cout<<"No"<<endl;
	    else
		cout<<"Yes"<<endl;
	}
	return 0;
}