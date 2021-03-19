#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"
int main() {
	int n = 0, k = 0;

	printf("Enter n:");
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Please enter n > 0");
		return -1; }
	
	double* coef = (double*)malloc((n+1) * (sizeof(double)));
	if (coef == NULL) {
		printf("ERROR. Can't allocate memory");
		system("pause");
		return -1;
	}

	printf("\nEnter coefficients:");
	for (int i = 0; i <= n; ++i) {
		if (scanf("%lf", &coef[i]) != 1)
			return -1;
	}

	printf("\nEnter k (k < n):");
	if (scanf("%d", &k) != 1 || k <= 0 ||k >= n) {
		printf("Please enter k < n");
		return -1; 
	}

	*coef = derivative(coef, n, k);
	for (int i = 0; i <= n; i++) {
		printf("%.1lf ", coef[i]);
	}
	free(coef);
	*coef = NULL;
	system("pause");
	return 0;
}