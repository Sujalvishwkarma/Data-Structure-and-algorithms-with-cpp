#include <iostream>
using namespace std;
void FibonacciSeries(int n);

int main()
{
    int n;
    cout << "Enter Number :" ;
    cin >> n;
    FibonacciSeries(n);
}
void FibonacciSeries(int n)
{
    int a = 0 , b = 1 , next = 0 ;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " " ;
        next = a + b ;
        a = b ;
        b = next ;
    }
    
}