#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<endl;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		cout<<ch<<" is an alphabet"<<endl;
	else
		cout<<ch<<" is not an alphabet"<<endl;
	return 0;
}

