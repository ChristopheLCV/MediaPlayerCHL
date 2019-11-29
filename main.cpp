#include <iostream>

using namespace std;

int main()
{
    string input;

    cout << "Input text (type \"exit\" to exit):" << endl;
    while(input != "exit")
    {
        cin >> input;
        cout << input << endl;
    }
    return 0;
}
