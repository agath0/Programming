
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n, res;
cout << "Enter the number : ";
cin >> n;
res = tgamma(n + 1); 
cout << "Factorial of the number " << n << " is " << res;
}
