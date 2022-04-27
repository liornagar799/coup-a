#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace coup{
    class Game{
    private:
    vector<string> players_of_game;

    public:
    Game();
    ~Game();
    vector<string> players();
    string turn();
    string winner();    
    };


}