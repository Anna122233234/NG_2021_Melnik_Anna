#include <iostream>

using namespace std;

int main()
{
    int a[3], i, k = 0;
    cout << "Enter 10 elements of array: " << endl;
    for ( i = 0; i < 3; i++)
    {
      cin >> a[i];
    }
    cout << "Enter the number: ";
    cin >> k;
    for (i = 0; i < 3; i++)
    {
      cout << a[i]*k << endl;
    }

    return 0;
}
