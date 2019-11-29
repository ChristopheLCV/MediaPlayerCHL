#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
using namespace std;

class State;

class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string> *Gettracklist() { return tracklist; }
        void Settracklist(std::vector<std::string> *val) { tracklist = val; }
        int GetcurrTrk() { return currTrk; }
        void SetcurrTrk(int val) { currTrk = val; }
        State *Getstate() { return state; }
        void Setstate(State *val) { state = val; }
        string nextTrack(void);
        string prevTrack(void);
        void displayCurrTrack ( void );
        void pause(void);
        void stop(void);
        void play(void);
        void next(void);
        void prev(void);


    protected:

    private:
        bool playing;
        std::vector<std::string> *tracklist;
        int currTrk;
        State *state;
};

#include "State.h"
#include "StoppedState.h"

#endif // PLAYER_H
