#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"


int derivative(double* arr, int n, int k) {
	for (int i = 0; i <= n; i++) {
		if (i < k)
			arr[i] = 0;
		else {
			for (; i <= n; i++) {
				int j = i;
				double counter = 1;
				for (; j > i - k; j--) {
					counter *= j;
				}
				arr[i] *= counter;
			}
		}
	}
	return *arr;

//n=6 a[n]=1 2 3 2 3 1 k=3 p(x)=1+2x+3x^2+2x^3+3x^4+1x^5+2x^6 p_k(x)=0+0+0+12+12*6x+12*5x^2
//коэф*степень; степень--; кол-во итерр=k// //int и double//