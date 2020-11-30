#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int f=1,f1=1,f2=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='h'&&s[i+1]=='t'&&s[i+2]=='t'&&s[i+3]=='p'&& f1==1)
		{
			f1=0;f2=0;
			cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<"://";
			i+=3;
		}
		else if(s[i]=='f'&&s[i+1]=='t'&&s[i+2]=='p'&& f2==1)
		{
			f2=0;f1=0;
			cout<<s[i]<<s[i+1]<<s[i+2]<<"://";
			i+=2;
		}
		else if(s[i]=='r'&&s[i+1]=='u'&&f==1 &&i>4)
		{
			f=0;
			cout<<"."<<s[i]<<s[i+1];
			if((i+2)<s.size())
			{
				cout<<"/";
			}
			i+=1;
		}
		else
			cout<<s[i];
	}
	return 0;
}
