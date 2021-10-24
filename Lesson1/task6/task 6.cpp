#include <iostream>

using namespace std ;
int main()
{
    int testingSwitchNumber= -1;
    cout << "Enter number: 255.255.255.*";
    cin >> testingSwitchNumber;

    switch (testingSwitchNumber)
    {
    case 255:cout << "Number of the address: 1 " ;
        break;
    case 254:cout << "Number of the address: 2 " ;
        break;
    case 252:cout << "Number of the address: 4 " ;
        break;
    case 248:cout << "Number of the address: 8 " ;
        break;
    case 240:cout << "Number of the address: 16 " ;
        break;
    case 224:cout << "Number of the address: 32 " ;
        break;
    case 192:cout << "Number of the address: 64 " ;
        break;
    case 128:cout << "Number of the address: 128 " ;
        break;
    default: cout << "Wrong number!!!" ;
    }
    cout << endl;
    return 0;
}
