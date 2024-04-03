/**
* @author James Huston | huston@uleth.ca
* @date 02/03/2024
*/




#include <catch2/catch_test_macros.hpp>
#include "Player.h"



TEST_CASE("Player Class", "[Player]") {
  SECTION("default player constructor") {
    Player* p1 = new Player();
    REQUIRE(p1->getName() == "Unknown");
    REQUIRE(p1->getSymbol() == '-');
    REQUIRE(p1->getScore() == 0);
    delete p1;
  }

  SECTION("two param player constructor") {
    Player* p2 = new Player("name", 'O');
    REQUIRE(p2->getName() == "name");
    REQUIRE(p2->getSymbol() == 'O');
    REQUIRE(p2->getScore() == 0);
    delete p2;
  }
}


TEST_CASE("User Class", "[User]") {
  SECTION("default user constructor") {
    Player* u1 = new User();
    REQUIRE(u1->getName() == "Unknown");
    REQUIRE(u1->getSymbol() == '-');
    REQUIRE(u1->getScore() == 0);
    delete u1;
  }

  SECTION("two param user constructor") {
    Player* u2 = new User("name", 'O');
    REQUIRE(u2->getName() == "name");
    REQUIRE(u2->getSymbol() == 'O');
    REQUIRE(u2->getScore() == 0);
    delete u2;
  }
}

TEST_CASE("AI Class", "[AI]") {
  SECTION("default ai constructor") {
    Player* ai1 = new AI();
    REQUIRE(ai1->getName() == "AI");
    REQUIRE(ai1->getSymbol() == '#');
    REQUIRE(ai1->getScore() == 0);
    delete ai1;
  }
}


