#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace coup;


    Game the_game{};


    Captain captain{the_game, "lior"};
	Duke duke{the_game, "liam"};
	Assassin assassin{the_game, "kobi"};
	Ambassador ambassador{the_game, "haya"};
	Contessa contessa{the_game, "ori"};
    Captain captain2{the_game, "eliram"};

	vector<string> players = the_game.players();



TEST_CASE("Good input - Scalar multiplication") {
    CHECK((players.at(0)) == "lior");
	CHECK((players.at(1)) == "liam");
	CHECK((players.at(2)) == "kobi");
	CHECK((players.at(3)) == "haya");
	CHECK((players.at(4)) == "ori");
	CHECK((players.at(5)) == "eliram");
    captain.income();
    CHECK((captain.sun_coins) == 1);
	CHECK((duke.sun_coins) == 0);
    CHECK((the_game.turn()) == "liam");
	duke.tax();
	CHECK((duke.sun_coins) == 3);
	CHECK((the_game.turn()) == "kobi");
	CHECK((assassin.sun_coins) == 0);
	assassin.foreign_aid();
	CHECK((assassin.sun_coins) == 2);
	CHECK((the_game.turn()) == "haya");
	CHECK((ambassador.sun_coins) == 0);
	CHECK((ambassador.role_of_player) == "ambassador");
	CHECK((ambassador.name_of_player) == "haya");
	CHECK((contessa.sun_coins) == 0);
	CHECK((contessa.role_of_player) == "contessa");
	CHECK((contessa.name_of_player) == "ori");

}



TEST_CASE("Bad input - Improper matrix size") {
CHECK_THROWS(captain2.income());   


}

