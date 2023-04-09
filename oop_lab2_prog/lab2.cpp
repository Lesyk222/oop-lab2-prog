#include <cmath>

unsigned int SolveQuadraticEquation(double coefA, double coefB, double coefC, double* pX1, double* pX2) {
	double discriminant, sqrtD;
	discriminant = (coefB * coefB) - (4 * coefA * coefC);
	sqrtD = sqrt(discriminant);
	if (coefA == 0 && coefB == 0) {
		if (coefC == 0) {
			return UINT_MAX;
		}
		else {
			return 0;
		}
	}
	else if (coefA == 0) {
		*pX1 = (-coefC) / (-coefB);
		return 1;
	} 
	else if (discriminant < 0) {
		return 0;
	}
	else if (discriminant == 0) {
		*pX1 = (-coefB) / (2 * coefA);
		return 1;
	}
	else {
		*pX1 = (-(coefB)+sqrtD) / (2 * coefA);
		*pX2 = (-(coefB)-sqrtD) / (2 * coefA);
		return 2;
	}
}