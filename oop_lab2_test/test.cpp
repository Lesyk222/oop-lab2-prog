#include "pch.h"
#include <cmath>

#include "../oop_lab2_prog/lab2.h"

TEST(Test, SimpleTest1) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(1, -2, -3, &x1, &x2), 2);
}

TEST(Test, SimpleTest2) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(1, -2, 1, &x1, &x2), 1);
}

TEST(Test, SimpleTest3) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(-4, 2, -10, &x1, &x2), 0);
}

TEST(Test, SimpleTest4) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(0, 0, 2, &x1, &x2), 0);
}

TEST(Test, SimpleTest5) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(0, 0, 0, &x1, &x2), UINT_MAX);
}

TEST(Test, SimpleTest6) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(8, 0, -7, &x1, &x2), 2);
}

TEST(Test, SimpleTest7) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(0, 8, 0, &x1, &x2), 1);
}

TEST(Test, SimpleTest8) {
	double x1 = 0, x2 = 0;
	EXPECT_EQ(SolveQuadraticEquation(2, 0, 0, &x1, &x2), 1);
}
