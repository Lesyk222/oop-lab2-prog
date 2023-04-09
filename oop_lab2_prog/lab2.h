#pragma once
// функція повертає кількість розв’язків квадратного рівняння
// ax^2 + bx + c = 0 та дійсні розв’язки через параметри pX1, pX2

unsigned int SolveQuadraticEquation(double coefA, double coefB, double coefC, double* pX1, double* pX2);