#include "StoppedState.h"

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
    player->play();
}
void StoppedState::onStop()
{
    cout << "Already Stopped !" << endl;
}
