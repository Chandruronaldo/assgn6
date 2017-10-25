#include <iostream>
using namespace std;

int main() {
	char s1[30],s2[30], *p;
	int c,i;
	cout<<"\n enter the string\n";
	cin>>s1;
	cout<<"\n enter the sequence of characters u want to search in the string";
	cin>>s2;
	i=0;
	while(s2[i]!='\0')
	{
		c++;
		i++;
	}
	
	for(int i=0;i<30;i++)
	{
		if(s1[i]==s2[0])
		{
			p=s1+i;
			for(int j=0;j<30;j++)
			{
				if(*(p+j)==s2[j])
				{
					if(j<c-1)
					continue;
					else
					goto jump;
				}	
				else 
					{
						p=NULL;
						break;
					}	
				
			}
		}
	}
	jump:
            if(p==NULL)
            cout<<"\n the sequence is not found";
            else
            cout<<"\n the sequence is found";
	return 0;
}