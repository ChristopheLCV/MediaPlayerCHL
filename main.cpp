#include <iostream>
#include <algorithm>
#include "Player.h"

using namespace std;

int main()
{
    string input;
    Player player;

    for_each ( player.Gettracklist()->begin(),
               player.Gettracklist()->end(),
               [](string trkName) {
                    cout << trkName << endl;
                }
              );

    cout << "Input text (type \"exit\" to exit):" << endl;
    while(input != "exit")
    {
        cin >> input;
        cout << input << endl;
    }
    return 0;
}
