#include "sum.cpp"
#include <gtest/gtest.h>

 TEST(SumTest, test1) {
 	ASSERT_EQ(15, sum(5, 10));
 	ASSERT_EQ(30, sum(20, 10));
 }
 
 int main (int argc, char **argv) {
 	testing::InitGoogleTest(&argc, argv);
 	return RUN_ALL_TESTS();
 }
