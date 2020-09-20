#include <header.hxx>
#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

TEST_CASE("Check if SUM is working") {
  REQUIRE(sum(1, 2) == 3);
  REQUIRE(sum(1, 3) == 4);
  REQUIRE(sum(3, 2) == 5);
}