#include <iostream>
using namespace std;
void natural(int n)
{
	if(n==0)
		return;
	else{
		cout<<n<<" ";
		natural(n-1);
	}

}
int main(){
	int i;
	cin>>i;
	natural(i);

}