#include<iostream>
using namespace std ;
int Reverse(int n);
int main()
{
    int n ;
    cout << "Reverse Number" << endl ;
    cout << "Enter number :" ;
    cin >> n ;
    cout << "Result :" << Reverse(n) ;
}
int Reverse(int n)
{
    int num = n , rev = 0 , rem ;
    while(num!=0)
    {
        rem = num % 10 ;
        rev = rev * 10 + rem ;
        num /= 10 ;
    }
    return rev ;
}