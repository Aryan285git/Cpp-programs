#include <iostream>
using namespace std;

int length(char ch[])
{
	if(ch[0]=='\0')
		return 0;
	else
	{
		return 1+length(ch+1);
	}
}
int main()
{
	char ch[100]="ikfcend";
	cout<<length(ch);
}