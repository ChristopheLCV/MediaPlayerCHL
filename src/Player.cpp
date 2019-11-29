#include "Player.h"

// Constructor
Player::Player()
{
    // assign a new tracklist
    tracklist = new vector<string>;

    Setplaying(false);
    tracklist->push_back("trk 01: The Pretty Reckless - Make me wanna die");
    tracklist->push_back("trk 02: The Pretty Reckless - Heaven knows");
    tracklist->push_back("trk 03: The Pretty Reckless - Take me down");
    tracklist->push_back("trk 04: Scorpions - Holiday");
    tracklist->push_back("trk 05: Scorpions - When the smoke is going down");
    tracklist->push_back("trk 06: Scorpions - Stairway to heaven");
    tracklist->push_back("trk 07: Scorpions - Daddy's girl");
    tracklist->push_back("trk 08: Scorpions - Lady Starlight");
    tracklist->push_back("trk 09: Scorpions - The good men die");
    tracklist->push_back("trk 10: Metallica - Nothing else matters");
    tracklist->push_back("trk 11: Rammstein - Du Hast");
    tracklist->push_back("trk 12: Rammstein - Engel");
    tracklist->push_back("trk 13: Muse - Supermassive black hole");
    tracklist->push_back("trk 13: Muse - Supremacy");
}

// Destructor
Player::~Player()
{
    delete tracklist;
}
