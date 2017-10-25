#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[13], *p;
	int n;
	p=a;
	cout<<"enter your name\n";
	cin>>a;
	cout<<a[0];
	cout<<"enter mode 1 / 2\n";
    cin>>n;
    switch(n)
    {
    	case 1:for(int i=0;i<13;i++)
	   {
		cout<<a[i]<<"\t";
               }
    	       break;
       
            case 2:
    
                  for(int i=0;i<13;i++)
	   {
		cout<<*(p+i)<<"\t";
               }
    }
    
    
   
	return 0;
}