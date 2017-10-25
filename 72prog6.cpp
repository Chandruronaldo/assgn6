#include <iostream>
using namespace std;

int main() {
	char s1[10],s2[10],s3[20],*p3, *p1,*p2,m;
	p1=s1;
	p2=s2;
	p3=s3;
	cout<<"\n enter the value of string 1";
	cin>>s1;
	cout<<"\n enter the value of string 2";
	cin>>s2;
	for(int i=0;i<20;i++)
	{
		if(i<10)
		{
			*(p3+i)=*(p1+i);
		}
		else
		{
			*(p3+i)=*(p2+i-10);
		}
	}
	cout<<"\nthe concatenated string is ";
	cout<<s3;
	return 0;
}