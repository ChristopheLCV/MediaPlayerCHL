#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string> Gettracklist() { return tracklist; }
        void Settracklist(std::vector<std::string> val) { tracklist = val; }
        int GetcurrTrk() { return currTrk; }
        void SetcurrTrk(int val) { currTrk = val; }
        State Getstate() { return state; }
        void Setstate(State val) { state = val; }

    protected:

    private:
        bool playing;
        std::vector<std::string> tracklist;
        int currTrk;
        State state;
};

#endif // PLAYER_H