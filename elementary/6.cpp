#include <iostream>
using namespace std;

bool isEven(int n)
{
	return(!(n&1));
}

int main()
{
	int n;
	cout<<"\nEnter a number : ";
	cin>>n;
	cout<<endl;
	cout<<n<<" is ";
	isEven(n)?cout<<"Even":cout<<"Odd";
	cout<<endl;
	return 0;

}
