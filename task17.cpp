#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool res;
    cout<<"Type number 1: ";
    cin >> a;
    cout<<"Type number 2: ";
    cin >> b;
    cout<<"Type number 3: ";
    cin >> c;
    if (b > a && b < c || b > c && b < a) {
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
