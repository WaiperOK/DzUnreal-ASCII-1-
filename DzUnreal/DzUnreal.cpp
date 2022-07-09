#include <iostream>
using namespace std;
int main()
{
    unsigned char q = 'F';
    cout << q << " " << (int)q << endl;
    q = 126;      // char можно присвоить и числовое значение
    cout << q << " " << (int)q << endl;
    return 0;
}