#include <iostream>
using namespace std;

int main() {
	char s[30],a, *p;
	int i;
	p=s;
	cout<<"\n enter the string";
	cin>>s;
	cout<<"\n enter the character you want to find in the string";
	cin>>a;
	for(i=0;i<30;i++)
	{
		if(*(p+i)==a)
	            break;
	}
	cout<<"\n the character found at  "<<i+2;
	return 0;
}