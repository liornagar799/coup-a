#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"

using namespace std;
namespace coup{
    class Player{
    public:
    int sun_coins;
    Game game;
    string name_of_player;
    string role_of_player;

    public:
    Player();
    ~Player();
     void income();
     void foreign_aid();
    string role(Player play);
     void coup(Player play);   
    int coins(); 
    };


}