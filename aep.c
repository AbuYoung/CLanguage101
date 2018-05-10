//
// Created by abuyo on 2018/5/10.
//

#include <stdio.h>

int main() {
	//get the number
	int i = scanf("%d",&i);
	printf('%d',i);

	//tran to binary
	int n = 0, b[1000000];

	for(; i; i>>=1) {
		b[n++] = i&1;
	}
	for(; n; ) {
		printf("%d", b[--n]);
		printf("\n");
	}
}