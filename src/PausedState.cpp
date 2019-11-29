#include "PausedState.h"
#include "StoppedState.h"
#include "PlayingState.h"

PausedState::~PausedState()
{
    //dtor
}

void PausedState::onPause()
{
    player->Setstate(new PlayingState(player));
    player->play();
    delete this;
}
void PausedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    player->play();
    delete this;
}
void PausedState::onStop()
{
    player->Setstate(new StoppedState(player));
    player->stop();
    delete this;
}

