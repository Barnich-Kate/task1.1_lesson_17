#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Type side a: ";
    cin >> a;
    cout<<"Type side b: ";
    cin >> b;
    cout<<"Type side c: ";
    cin >> c;
    if (a+b > c && b+c > a && a+c > b) {
        cout << "It is triangle";
    } else {
        cout << "It is not a triangle";
    }
   
   
    
    return 0;
}
