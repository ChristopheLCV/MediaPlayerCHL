#include "StoppedState.h"
#include "PlayingState.h"
#include "PausedState.h"

StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPause()
{
    cout << "Cannot pause in stopped state !" << endl;
}
void StoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    player->play();
    delete this;
}
void StoppedState::onStop()
{
    cout << "Already Stopped !" << endl;
}
