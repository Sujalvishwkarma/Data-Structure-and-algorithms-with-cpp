#include<iostream>
using namespace std ;
int SumOfIndividualDigits(int n);
int main()
{
    int n ;
    cout << "Sum of Individual Digits" << endl ;
    cout << "Enter number :" ;
    cin >> n ;
    cout << "Result :" << SumOfIndividualDigits(n) ;
}
int SumOfIndividualDigits(int n)
{
    int num = n , sum = 0 , rem ;
    while(num!=0)
    {
        rem = num % 10 ;
        sum = sum + rem ;
        num /= 10 ;
    }
    return sum ;
}