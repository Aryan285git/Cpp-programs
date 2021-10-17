#include <iostream> 
using namespace std;

int main(){
    
    int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int count=2;
	bool divided=false;
	while(count<n)
	{
		if(n%count==0){
			cout<<"Not Prime"<<endl;
			divided=true;
		}
		count++;
	}
	if(!divided)
		cout<<"Prime";
}