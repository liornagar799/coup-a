#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#pragma once

using namespace std;
namespace coup{
    class Contessa: public Player{
    private:
  
    public:
    Contessa( Game const& game, string const& name);
    ~Contessa();
    void block (Player play); 


    };


}