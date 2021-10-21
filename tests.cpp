#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

TEST_CASE("removeLeadingSpaces")
{
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
    CHECK(removeLeadingSpaces("int x = 1;") == "int x = 1;");
    CHECK(removeLeadingSpaces("   ") == "");
}

TEST_CASE("countChar")
{
    CHECK(countChar("{ab{cdef{g{", '{') == 4);
    CHECK(countChar("asdf", '.') == 0);
    CHECK(countChar("", 'a') == 0);
}

TEST_CASE("addLeadingSpaces")
{
    CHECK(addLeadingSpaces("", 2) == "\t\t");
    CHECK(addLeadingSpaces("asdf", 3) == "\t\t\tasdf");
}