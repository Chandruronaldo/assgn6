#include <iostream>
using namespace std;

int main() {
	char s[10], *p;
        p=s;
	cout<<"\n input about 10 characters of string \n";
	cin>>s;
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			cout<< *(p+j);
		}
		cout<<"\n";
	}
	return 0;
}
