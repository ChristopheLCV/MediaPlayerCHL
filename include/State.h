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

    protected:
        Player *player;

    private:
};

#include "Player.h"


#endif // STATE_H
