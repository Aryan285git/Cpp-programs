#include <iostream>
using namespace std;
int main(){

	int a[10][10];
	int r,c;
	cout<<"Enter No. of rows and column"<<endl;
	cin>>r;
	cin>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int co=1;
	for(int j=0;j<c;j++)
	{
		if(co%2!=0){
		for(int i=0;i<r;i++)
		{
			cout<<a[i][j]<<" ";
		}}
		else{
		for(int i=r-1;i>=0;i--)
		{
			cout<<a[i][j]<<" ";
		}}
		cout<<endl;
		co++;

	}

}