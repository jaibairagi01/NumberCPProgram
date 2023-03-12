#include <iostream>
using namespace std;
int main()
{
    int num, factorial = 1;
    cout << "Enter the number : " << endl;
    cin >> num;

    if (num < 0)
        cout << "Can't find the factorial for negative number";
    else if (num <= 1)
        cout << num << "! = " << factorial;

    else
    {
        for (int counter = num; counter >= 2; counter--)
        {
            factorial = factorial * counter;
        }
    }
    cout << num << "! = " << factorial;

    return 0;
}