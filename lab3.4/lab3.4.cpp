#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x, y;  
    double R1, R2;  
    cout << "������ R1: ";
    cin >> R1;
    cout << "������ R2: ";
    cin >> R2;
    cout << "������ ���������� ����� (x, y): " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    
    double r = sqrt(x * x + y * y);

   
    if (R1 < r && r <= R2) {
        cout << "���." << endl;
    }
    else {
        cout << "ͳ." << endl;
    }

    return 0;
}
