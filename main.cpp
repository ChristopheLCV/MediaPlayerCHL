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

        if ( input == "pause")
            player.Getstate()->onPause();
        else if ( input == "stop")
            player.Getstate()->onStop();
        else if ( input == "play")
            player.Getstate()->onPlay();

        cout << input << endl;
    }
    return 0;
}
