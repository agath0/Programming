#include <iostream>
using namespace std;

int main()
{
	int fibo=0,n,a=0,b=1;
	cout<<"Enter the n'th value until which fibonacci series has to be generated: ";
	cin>>n;
	cout<<"Fibonacci series: ";
	while(fibo<=n){
		cout<<fibo<<" ";
		a=b;
		b=fibo;
		fibo=a+b;
	}
	return 0;
}



