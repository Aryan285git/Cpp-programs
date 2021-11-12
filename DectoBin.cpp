#include <iostream>
using namespace std;
void binary(int n)
{
	if(n==0)
		return;
	else{
		int t= n%2;
		binary(n/2);
		cout<<t<<" ";
	}

}
int main(){
	int i;
	cin>>i;
	binary(i);

}