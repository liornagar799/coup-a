#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Ambassador: public Player{
    private:
  
    public:
    Ambassador( Game const& game, string const& name);
    ~Ambassador();
     void to_convey();  
     void transfer(Player play1, Player play2);

    };


}