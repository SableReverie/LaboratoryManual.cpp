#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    
    const double PI = 3.14159;
    double circumference;
    
    cout << "Enter the Circumference: ";
    cin >> circumference;
    
    double result = 2 * PI * circumference;
    cout << fixed << setprecision(4);
    cout << "The Area of the circle is: " << result << endl;
    
    return 0;
}
/*
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char room;

    while (true) {
        cout << "Enter room (a, b, c): ";
        cin >> room;
        room = tolower(room); // allow uppercase input

        if (room == 'a') {
            cout << "You are in room A." << endl;
            break;
        }
        else if (room == 'b') {
            cout << "You are in room B." << endl;
            break;
        }
        else if (room == 'c') {
            cout << "You are in room C." << endl;
            break;
        }
        else {
            cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    long long f;
    int i;
    char again;

    do {
        cout << "Enter a number: ";
        cin >> i;

        if (i < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            f = 1; // reset factorial for each new input
            for (int j = 1; j <= i; j++) {
                f *= j;
            }
            cout << "The factorial of " << i << " is: " << f << endl;
        }

        cout << "Do you want to calculate another factorial? (y/n): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    return 0;
}
*/
