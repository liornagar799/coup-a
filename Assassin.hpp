#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Assassin: public Player{
    private:
  
    public:
    Assassin( Game const& game, string const& name);
    ~Assassin();
    // במימוש שונה 
     void coup(Player play);  

    };


}