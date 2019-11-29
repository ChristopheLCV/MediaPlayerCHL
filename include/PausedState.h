#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include <State.h>


class PausedState : public State
{
    using State::State;

    public:
        PausedState();
        virtual ~PausedState();

        void onPause();
        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PAUSEDSTATE_H
