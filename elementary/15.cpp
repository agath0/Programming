
#include <iostream>
using namespace std;

int sum_of_natural_numbers(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"\nEnter the number : ";
	cin>>n;
	cout<<"\nSum of "<<n<<" Natural NUmbers is "<<sum_of_natural_numbers(n);
	cout<<endl;
	return 0;
}

