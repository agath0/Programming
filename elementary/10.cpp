#include <iostream>
using namespace std;
int main()
{
	int a,b,gcd;
	cout<<"\nEnter two numbers: "<<endl;
	cin>>a>>b;
	int i;
	for(i=1;i<=a && i<=b;i++)
	{
		if((a%i==0) && (b%i==0))
		{
			gcd=i;
		}
	}
	cout<<"\nGCD of "<<a<<" and "<<b<<" is "<<gcd;
	cout<<endl;
	return 0;
}
