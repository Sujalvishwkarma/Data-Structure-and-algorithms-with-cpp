#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number";
    cin >> n;
    cout << "Fibonnaci Series :" << endl;
    int prev, current;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            prev = 0;
            current = 1;
        }
        cout << current << "->";
        prev = current;
        current = prev + current;
    }
}