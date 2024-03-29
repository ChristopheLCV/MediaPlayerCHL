#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

class Player;

class State
{
    public:
        State(Player *_pl);
        virtual ~State();

        Player *Getplayer() { return player; }
        void Setplayer(Player *val) { player = val; }

        virtual void onPause() = 0;
        virtual void onPlay() = 0;
        virtual void onStop() = 0;

    protected:
        Player *player;

    private:
};

#include "Player.h"


#endif // STATE_H
