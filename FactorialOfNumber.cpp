#include<iostream>
using namespace std;
int Factorial(int n) ;

int main()
{
    int n ;
    cout << "Enter Number :" ;
    cin >> n ;
    cout << "Factorial of " << n << " :" <<  Factorial(n) << endl;
}
int Factorial(int n)
{
    return n== 0 ? 1 : n * Factorial(n-1) ;
}