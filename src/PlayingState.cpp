#include "PlayingState.h"
#include "StoppedState.h"

PlayingState::~PlayingState()
{
    //dtor
}

void PlayingState::onPause()
{
    player->pause();
}
void PlayingState::onPlay()
{
    player->pause();
}
void PlayingState::onStop()
{
    player->Setstate(new StoppedState(player));
    player->stop();
    delete this;
}
