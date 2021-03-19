#define _CRT_SECURE_NO_WARNINGS
#include "my_lab.h"

int integral(double *arr, int n, int k) {
			for (int i=0; i <= n; i++) {
				int j = i + k;
				double counter = 1;
				for (; j > i ; j--) {
					counter *= j;
				}
				arr[i] /= counter;
			}
	return *arr;
}

//n=6 a[n]=1 2 3 4 5 6 7          k=2 
/*	     p_0(x) =  1     +   2*x   +   3*x^2 +   4*x^3 +   5*x^4 +   6*x^5 +   7*x^6
	     p_1(x) =  1*x   +   1*x^2 +   1*x^3 +   1*x^4 +   1*x^5 +   1*x^6 +   1*x^7
  p_k(x)=p_2(x) =1/2*x^2 + 1/3*x^3 + 1/4*x^4 + 1/5*x^5 + 1/6*x^6 + 1/7*x^7 + 1/8*x^8
*/