#include <iostream>
using namespace std;

int main() {
	char s[100], *p;
	int i,count=0;
	cout<<"\n enter the string\n";
	cin>>s;
	i=0;
	while(s[i]!='\0')
	{
		count++;
		i++;
	}
	cout<<"\n the length of the string is "<<count;
	return 0;
}