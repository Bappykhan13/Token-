
#include <iostream>
#include <string>
using namespace std;

 bool isNumerical(const string &input) {

    for (char c : input) {

        if (!isdigit(c) && c != '.') {

            return false;

        }

    }

    return true;

}



int main() {

    string input;

    cout << "Enter a number: ";

    cin >> input;



    if (isNumerical(input)) {

        cout << input << " is a numerical number." << endl;

    } else {

        cout << input << " is not a numerical number." << endl;

    }



    return 0;

}
