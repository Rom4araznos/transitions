#include "transitions.hpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

auto check_equality(f32 func_res, f64 expected_res) -> bool {

    if (func_res < expected_res + 0.001 && func_res > expected_res - 0.001)

        return true;

    else return false;
}

TEST_CASE("Testing transition functions") {

    CHECK(check_equality(lx::ease(100, 73), 0.836631));
    CHECK(check_equality(lx::ease_in(10, 3), 0.216));
    CHECK(check_equality(lx::ease_out(743, 432), 0.62106));
    CHECK(check_equality(lx::ease_in_out(1324, 753), 0.602447));

    CHECK(lx::ease(5000, 5000) == 1);
    CHECK(lx::ease(5000, 0) == 0);
    CHECK(check_equality(lx::ease(5000, 1233), 0.194434));

    CHECK(lx::ease_in(10000, 10000) == 1);
    CHECK(lx::ease_in(10000, 0) == 0);
    CHECK(check_equality(lx::ease_in(10000, 5434), 0.5650));

    CHECK(lx::ease_out(15000, 15000) == 1);
    CHECK(lx::ease_out(15000, 0) == 0);
    CHECK(check_equality(lx::ease_out(15000, 12456), 0.923464));

    CHECK(lx::ease_in_out(20000, 20000) == 1);
    CHECK(lx::ease_in_out(20000, 0) == 0);
    CHECK(check_equality(lx::ease_in_out(20000, 17435), 0.954875));
}