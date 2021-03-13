#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"
int main() {
	int n = 0, k = 0;
	printf("Enter n:");
	if (scanf("%d", &n) != 1) {
		return -1; }
	printf("\nEnter coefficients:");
	double* coef = (double*)malloc(n * (sizeof(double)));
	if (coef == NULL) {
		printf("ERROR. Can't allocate memory");
		system("pause");
		return-1;
	}
	for (int i = 0; i < n; ++i)
		scanf("%lf", &coef[i]);
	printf("\nEnter k (k < n):");
	if (scanf("%d", &k) != 1) {
		return -1; 
	}
	*coef = derivative(coef, n, k);
	for (int i = 0; i < n; i++) {
		printf("%.1lf ", coef[i]);
	}
	free(coef);
	coef == NULL;
	system("pause");
	return 0;
}