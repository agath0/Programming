#include <iostream>
using namespace std;

void vowel_or_consonant(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		cout<<"vowel"<<endl;
	else
		cout<<"consonant"<<endl;
}


int main()
{
	char ch;
	cout<<"\nInput a character: ";
	cin>>ch;
	vowel_or_consonant(ch);
	return 0;
}
