#include <iostream>

using namespace std;

int main()
{
    int a, b;
    bool res;
    cout<<"Type number 1: ";
    cin >> a;
    cout<<"Type number 2: ";
    cin >> b;
    if (a % 2 != 0 || b % 2 != 0) {
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
