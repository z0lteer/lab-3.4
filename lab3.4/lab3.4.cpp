#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x, y;  
    double R1, R2;  
    cout << "Введіть R1: ";
    cin >> R1;
    cout << "Введіть R2: ";
    cin >> R2;
    cout << "Введіть координати точки (x, y): " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    
    double r = sqrt(x * x + y * y);

   
    if (R1 < r && r <= R2) {
        cout << "Так." << endl;
    }
    else {
        cout << "Ні." << endl;
    }

    return 0;
}
