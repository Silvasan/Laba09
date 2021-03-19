#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"


int derivative(double* arr, int n, int k) {
	for (int i = 0; i <= n; i++) {
		if (i < k)
			arr[i] = 0;
		else {
			int j = i;
			double counter = 1;
			for (; j > i - k; j--) {
				counter *= j;
			}
			arr[i] *= counter;
		}
		if (arr[i] == 0)
			continue;
		else if (i-k == 0)
			printf("%.3lf + ", arr[i]);
		else if (i == n)
			printf("%.3lf*x^%d\n", arr[i], i - k);
		else printf("%.3lf*x^%d + ", arr[i], i - k);
	}
	return *arr;
}
//n=6 a[n]=1 2 3 2 3 1 2 k=3 
// p(x)=1+2x+3x^2+2x^3+3x^4+1x^5+2x^6 
// p_k(x)=0+0+0+12+12*6x+12*5x^2