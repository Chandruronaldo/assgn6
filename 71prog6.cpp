#include <iostream>
using namespace std;

int main() {
	char s1[10],s2[10], *p1,*p2,m;
	p1=s1;
	p2=s2;
	cout<<"\n enter the value of string 1";
	cin>>s1;
	for(int i=0;i<10;i++)
	{   
		*(p2+i)=*(p1+i);
		
	
	}
	cout<<"\nthe original string is  "<<s1;
	cout<<"\nthe copied string is    " <<s2;
	return 0;
}