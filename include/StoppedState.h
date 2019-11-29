#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>


class StoppedState : public State
{
    using State::State;

    public:
        StoppedState();
        virtual ~StoppedState();

        void onPause();
        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // STOPPEDSTATE_H
