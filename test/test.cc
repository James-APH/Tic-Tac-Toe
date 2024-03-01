#include <catch2/catch_test_macros.hpp>
#include "Player.h"



TEST_CASE("parent player class","[Player]") {
  Player* p = new Player("name", 'O');
  REQUIRE(p->getName() == "name");
  REQUIRE(p->getSymbol() == '0');
  REQUIRE(p->getScore() == 0);
}
