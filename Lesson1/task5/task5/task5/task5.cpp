#include <iostream>

using namespace std;
int main()
{
    int y = 0;
    cout << "Enter the weight of the spaceship ";
    cin >> y;
    cout << "This is fuel: " << (y / 3) - 2 << endl;
    cout << "This is y: " << y;

    return 0;
}