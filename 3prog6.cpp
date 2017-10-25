#include <iostream>
using namespace std;

int main() {
    int a[10], *p,n;
    p=a;
    cout<<"enter mode 1 / 2";
    cin>>n;
    switch(n)
    {
    	case 1:cout<<"\nenter the value of array elements\n";
                   for(int i=0;i<10;i++)
                   {
		cin>>a[i];
		 }
                   break;
       
            case 2:cout<<"\nenter the value of array elements\n";
    
                  for(int i=0;i<10;i++)
	   {
		cin>>*(p+i);
               }
    }
    
    
    for(int i=0;i<10;i++)
    {
    	cout<<"\t"<<a[i];
    }
    	return 0;
}