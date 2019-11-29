#include "PlayingState.h"
#include "StoppedState.h"
#include "PausedState.h"

PlayingState::~PlayingState()
{
    //dtor
}

void PlayingState::onPause()
{
    player->Setstate(new PausedState(player));
    player->pause();
    delete this;
}
void PlayingState::onPlay()
{
    player->Setstate(new PausedState(player));
    player->pause();
    delete this;
}
void PlayingState::onStop()
{
    player->Setstate(new StoppedState(player));
    player->stop();
    delete this;
}
