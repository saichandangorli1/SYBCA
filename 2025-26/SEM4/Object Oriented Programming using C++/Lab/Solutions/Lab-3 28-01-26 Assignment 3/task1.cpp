#include <iostream>
using namespace std;

void checkCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an Uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a Lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a Digit." << endl;
    }
    else
    {
        cout << ch << " is a Special Symbol." << endl;
    }
}

int main()
{
    char input;

    cout << "Enter any character: ";
    cin >> input;

    checkCharacter(input);

    return 0;
}