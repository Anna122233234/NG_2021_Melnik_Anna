#include <iostream>

using namespace std ;
int main()
{
    int testingSwitchNumber= -1;
    cout << "Enter number: 255.255.255.*";
    cin >> testingSwitchNumber;
      cout << "Number of the address:" ;
    switch (testingSwitchNumber)
    {
        case 255:cout << " 1 " ; break;
        case 254:cout << " 2 " ; break;
        case 252:cout << " 4 " ; break;
        case 248:cout << " 8 " ; break;
        case 240:cout << " 16 " ; break;
        case 224:cout << " 32 " ; break;
        case 192:cout << " 64 " ; break;
        case 128:cout << " 128 " ; break;
        default: cout << "Wrong number!!!" ;
    }
    cout << endl;
    return 0;
}
