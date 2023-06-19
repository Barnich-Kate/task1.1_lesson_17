
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d, x;
    cout<<"Type number 1 more, than 0: ";
    cin >> a;
    if (a < 0 && a == 0) {
        cout << "You type wrong number, please, type number more, than 0: "; 
        cin >> a;
    }
   cout << "Type number 2: ";
   cin >> b;
   cout << "Type number 3: ";
   cin >> c;
   d = pow (b,2) - 4 * a * c;
   if (a * (x*x) + b * x + c == 0) {
       cout << "The frase have a things squares";
   } else {
       cout << "The frase don't have a things squares";
   }
   
    
    return 0;
}
