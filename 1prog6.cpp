#include <iostream>
using namespace std;

int main() {
    int a=1,*a1;
    long int b=32768,*b1;
    char c='a',*c1;
    float d=5.9,*d1;
    double e=12.56,*e1;
    long double f=1892787,*f1;
    a1=&a;
    b1=&b;
    c1=&c;
    d1=&d;
    e1=&e;
    f1=&f;
    
    cout<<"the size of int is  "<<sizeof(a)<<"\t size of pointer    "<<sizeof(a1)<<"\n";
    cout<<"the size of long int is  "<<sizeof(b)<<"\t size of pointer    "<<sizeof(b1)<<"\n";
    cout<<"the size of char is  "<<sizeof(c)<<"\t size of pointer    "<<sizeof(c1)<<"\n";
    cout<<"the size of float is  "<<sizeof(d)<<"\t size of pointer    "<<sizeof(d1)<<"\n";
    cout<<"the size of double is  "<<sizeof(e)<<"\t size of pointer    "<<sizeof(e1)<<"\n";
    cout<<"the size of long double is  "<<sizeof(f)<<"\t size of pointer    "<<sizeof(f1)<<"\n";
    
	return 0;
}