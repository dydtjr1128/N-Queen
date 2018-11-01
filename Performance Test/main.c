#include <stdio.h>
#include<time.h>
#include <limits.h>
clock_t start;
int main() {
	long a = 0;
	long b = 0;
	
	start = clock();
	for (int i = 0; i < INT_MAX; i++) {
		for (int j = 0; j < INT_MAX; j++) {
			for (int k = 0; k < INT_MAX; k++) {
				for (int q = 0; q < INT_MAX; q++) {
					b = 1;
				}
			}
		}		
	}
	printf("%.5f\n", ((float)(clock() - start) / CLOCKS_PER_SEC));
	
	start = clock();
	for (int i = 0; i < INT_MAX; i++) {
		for (int j = 0; j < INT_MAX; j++) {
			for (int k = 0; k < INT_MAX; k++) {
				a = 0;
				for (int q = 0; q < INT_MAX; q++) {
					a += 1;
				}
			}
		}
	}
	printf("%.5f\n",((float)(clock()-start)/CLOCKS_PER_SEC));
	
}