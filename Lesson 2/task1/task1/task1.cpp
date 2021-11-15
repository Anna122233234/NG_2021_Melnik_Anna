#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;

    cout << "please, enter number = ";
    cin >> number;

    for (int i = number; i > 0;  i /= 10)
    {
        sum += i % 10;
    }
    cout << "sum = " << sum << endl;

    return 0;
}
