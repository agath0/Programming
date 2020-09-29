#include <iostream>
using namespace std;


int main()
{
	char ch;
	cout<<"enter a number :";
	cin>>ch;
	cout<<"the ASCII value of character is "<<int(ch)<<endl;
	if(ch>=65 && ch<=90)
	       cout<<"upper";
	else if(ch>=97 && ch<=122)
		cout<<"lower";
	else if(ch>=48 && ch<=57)
		cout<<"number";
	else
		cout<<"symbol";
	return 0;
}


	
