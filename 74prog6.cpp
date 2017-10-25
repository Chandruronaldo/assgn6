#include <iostream>
using namespace std;

int main() {
	char s1[10],s2[10], *p1,*p2,m;
	p1=s1;
	p2=s2;
	cout<<"\n enter the value of string 1";
	cin>>s1;
	cout<<"\n enter the value of string 2";
	cin>>s2;
	for(int i=0;i<10;i++)
	{
		if(*(p1+i)== *(p2+i))
		   {
		   	if(i<9)
		   	{
		   		continue;
		   	}
		   	else
		   	{
		   	cout<<"\n the strings are the same";	
		   	}
		   }
		
		else
		{
			cout<<"\nThe strings are not the same";
		break;
		}
		
	}
	return 0;
}