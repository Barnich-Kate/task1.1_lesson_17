#include <iostream>

using namespace std;

int main()
{
    int a;
    bool res;
    cout<<"Type number 1: ";
    cin >> a;
    if (a % 2 != 0 && a > 99 && a < 1000) {
        res = true;
    } else {
        res = false;
    }
    
    if (res) {
        cout << "True";
    } else {
        cout << "False";
    }
    
    return 0;
}
