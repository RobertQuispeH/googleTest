#include <gtest/gtest.h>
#include "linkenList.cc"

TEST(LinkenList, testFuncion){
  List<int>* a = new LinkenList<int>;
  a->append(5);
  a->append(4);
  a->append(3);
  a->append(2);
  EXPECT_EQ(a->get(2), 3);
  a->insert(2,75);
  EXPECT_EQ(a->get(3), 3);
  EXPECT_EQ(a->get(2), 75);
  EXPECT_EQ(a->size(), 5);
}
