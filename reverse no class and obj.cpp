#include<iostream >
using namespace std;
class H
{
int n,r;
public:
	int input()
	{
		cout<<"enter number";
		cin>>n;
		}
		int show()
	{
		while(n>0)
		{
			r=n%10;
			cout<<r;
			n=n/10;
			
		}
	}	
};
int main()
{
	H obj ;
	obj.input() ;
	obj. show();
	return 0;
}


