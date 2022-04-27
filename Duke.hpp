#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"


using namespace std;
namespace coup{
    class Duke: public Player{
    private:
  
    public:
    Duke( Game const& game, string const& name);
    ~Duke();
    void block (Player play);
    void tax();
      
    };


}