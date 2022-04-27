#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Captain: public Player{
    private:
  
    public:
    Captain( Game const& game, string const& name);
    ~Captain();
    void steal(Player play);  
    void block (Player play);

    };


}