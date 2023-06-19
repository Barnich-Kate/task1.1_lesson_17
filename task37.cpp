
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout<<"Type coord x1 from 1 to 8: ";
    cin >> x1;
    cout<<"Type coord y1 from 1 to 8: ";
    cin >> y1;
    cout<<"Type coord x2 from 1 to 8: ";
    cin >> x2;
    cout << "Type coord y2 from 1 to 8: ";
    cin >> y2;
    if (abs(x1-x2) <= 1 && abs(y1-y2) <= 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
   
    
    return 0;
}
