// Algorithm Challenge #6 - Full Name Input
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, middle, last;

    cout << "Type the first name: ";
    getline(cin, first);

    cout << "Type the middle name: ";
    getline(cin, middle);

    cout << "Type the last name: ";
    getline(cin, last);

    cout << "\nFull Name: " << first << " " << middle << " " << last << endl;

    return 0;
}
