#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << �nEnter three numbers : �;
cin >> a >> b >> c;
int max = 0;
if(a > b && a > c)
cout << �nThe largest among the three numbers is � << a;
else if(b > a && b > c)
cout << �nThe largest among the three numbers is � << b;
else
cout << �nThe largest among the three numbers is � << c;
cout << endl;
return 0;
}
