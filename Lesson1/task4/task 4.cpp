#include <iostream>

using namespace std;
int main()
{
    int a, b, c, x1, x2;
    cout << "Enter a, b,c  " << endl;
    cin >> a >> b >> c ;


    int D;
    D = b * b - 4 * a * c;
    cout << " D=";
    cout << D=<< endl;
        if (D > 0) {
            x1 = -b - sqrt(D) / 2;
            cout << x1 << endl;
            x2 = -b + sqrt(D) / 2;
            cout << x2 << endl;
        }
        if (D < 0) {
        cout << "There is no roots" << endl;
        }
        if (D < 0) {
            x1 = -b - sqrt(D) / 2;
        }
}
