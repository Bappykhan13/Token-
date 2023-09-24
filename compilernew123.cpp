#include<iostream>

using namespace std;



bool isOperator(char c)

{

    // Check if the character is one of the common operators

    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^' || c == '=' || c == '<' || c == '>');

}



int main()

{

    string input;

    cout << "Enter a string: ";

    cin >> input;



    for (char c : input)

    {

        if (isOperator(c))

        {

            cout <<"operator: "<< c <<endl;

        }

    }

    cout << endl;



    return 0;

}
