#include <iostream>
using namespace std;

int main() {
	int a=1,b, *p;
	p=&a;
	b=*p;
	cout<<"part A\n";
	cout<<"the value of a,b,p are  " <<a<<"\t"<<b<<"\t"<<p;
	//Result :: The value of b is nothing but value of a
	a=2;
	b=3;
	cout<<"\npart B\n";
	cout<<"the value of a,b,p are  " <<a<<"\t"<<b<<"\t"<<p;
	p=&b;
            cout<<"\npart C\n";
	cout<<"the value of a,b,p are  " <<a<<"\t"<<b<<"\t"<<p;
	p=&b;
	
	
	return 0;
}