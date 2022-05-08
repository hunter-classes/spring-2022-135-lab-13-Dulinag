#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "funcs.h"
#include <sstream>


TEST_CASE("checks printRange and its first value"){


CHECK(printRange(-2, 10) == "-2");
}

TEST_CASE("checks sumrange and its value"){


CHECK(sumRange(1, 3) == 6);
}

TEST_CASE("checks sumArray and its value"){

  int size = 10;
     int *arr = new int[size]; // allocate array dynamically
     arr[0] = 12;
     arr[1] = 17;
     arr[2] = -5;
     arr[3] = 3;
     arr[4] = 7;
     arr[5] = -15;
     arr[6] = 27;
     arr[7] = 5;
     arr[8] = 13;
     arr[9] = -21;

     int sum1 = sumArray(arr, size);


CHECK(sumArray(arr, 10) == 43);
}


TEST_CASE("checks isAlphanumeric"){


CHECK(isAlphanumeric("ABCD") == true);
CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}


TEST_CASE("checks nestedParens"){


CHECK(nestedParens("((()))") == true);

CHECK(nestedParens("a(b)c") == false);
}
