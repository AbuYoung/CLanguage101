//
// Created by abuyo on 2018/5/10.
//
int loop (int a[], int b[]);

#include <stdio.h>

int main () {
	int N, temp, n;
	scanf("%d", &N);
	n = N;

	int a[100], b[100];

	//a[100] = scanf("%d", a[100]);

	for (int i = 0; i < N; ++i) {
		scanf("%d", &a[i]);
	}
	temp = a[0];


	for (int j = 0; j < N; ++j) {
		b[j] = a[j];

		if (j != N - 1) {
			a[j] = a[j + 1];
		} else {
			a[j] = temp;
		}

		a[j] = a[j] / 2;
		b[j] = b[j] / 2;
	}

	/*for (int l = 0; l < N; ++l) {
		b[l] = a[l] + b[l];
		if (b[l] % 2 == 1)
			n = ++n;
	}
	*/

	for (;;){
		if (loop(a,b) == 1){
			break;
		}else
			continue;
	}

	for (int k = 0; k < N; ++k) {
		printf("%d ", a[k]);
	}

	return 0;
}

int loop (int a[], int b[]) {

}
