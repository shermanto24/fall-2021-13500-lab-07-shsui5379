#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"

TEST_CASE("removeLeadingSpaces")
{
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
    CHECK(removeLeadingSpaces("int x = 1;") == "int x = 1;");
    CHECK(removeLeadingSpaces("   ") == "");
}