#include <gtest/gtest.h>
#include "arrayStack.cc"


TEST(ArrayStack, TestFuncions) {
  Stack<int>* a = new ArrayStack<int> (2);
  EXPECT_EQ(a->empty(), true);
  a->pop();
  a->push(5);
  a->push(6);
  a->push(4);
  EXPECT_EQ(a->empty(), false);
  EXPECT_EQ(a->top(), 4);
  a->pop();
  a->pop();
  EXPECT_EQ(a->top(), 5);
  a->pop();
  a->pop();
  a->pop();
  a->pop();
  a->pop();
  EXPECT_EQ(a->empty(), true);
}

