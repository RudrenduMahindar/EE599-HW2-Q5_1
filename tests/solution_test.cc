#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapTest, HandlesValidIndex) {
  Solution solution;
  int x=0;
  int y=2;
  string s="TEST";
  solution.SwapChar(s,x,y);
  string actual=s; 
  string expected="SETT";
  EXPECT_EQ(expected, actual);

}

TEST(SwapTest, HandlesInvalidIndex) { //invalid index-->> no swap
  Solution solution;
  int x=0;
  int y=4;
  string s="TEST";
  string expected=s;
  solution.SwapChar(s,x,y);
  string actual=s; 
  EXPECT_EQ(expected, actual);
}