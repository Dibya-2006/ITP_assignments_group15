#include <iostream>

using namespace std;

int main() {
    double a, b, c;


    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;


    if (a + b > c && a + c > b && b + c > a) {
        cout << "A triangle can be formed.\n";


        if (a == b && b == c) {
            cout << "The triangle is Equilateral.\n";
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles.\n";
        } else {
            cout << "The triangle is Scalene.\n";
        }
    } else {
        cout << "A triangle cannot be formed with these sides.\n";
    }

    return 0;
}
