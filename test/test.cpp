#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


#include <nonstd/continuous_string.hpp>


TEST_SUITE("continuous_string") {

    TEST_CASE("continuous_string::continuous_string") {
        nonstd::continuous_string<> target;
        REQUIRE(target.empty());
        REQUIRE(target.size() == 0);
        REQUIRE(target.length() == 0);
    }


    TEST_CASE("continuous_string(\"test\")") {
        nonstd::continuous_string<> target("test");
        REQUIRE(!target.empty());
        REQUIRE(target.size() == sizeof("test") - 1);
        REQUIRE(target.length() == sizeof("test") - 1);
        REQUIRE(target == "test");
        REQUIRE(strcmp(target.data(), "test") == 0);
    }

}
