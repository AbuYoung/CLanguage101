#include <stdio.h>

//
// Created by abuyo on 2018/7/19.
//

void BubbleSort(int *, int);

int main() {
	int N, k, len;
	printf("%s", "请输入数字数量 \n");
	scanf("%d", &N);
	printf("\n");
	int a[N]; //开辟空间大小为 N 的数组来存储

	printf("%s", "想确定第几个数：\n");
	scanf("%d", &k);
	int K[k]; //开辟空间大小为 k 的数组
	len = (int)sizeof(K);
	printf("\n");

	printf("%s", "请开始向数组 N 中输入数字：\n");

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < k; ++j) {
		K[j] = a[k];
	} //向 K 中赋值

	BubbleSort(K, len);

	for (int l = 0; l < k; ++l) {
		printf("%d\n", K[l]);
	}

	return 0;
}

void BubbleSort(int K[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (K[j] > K[j + 1]) {
				temp = K[j];
				K[j] = K[j + 1];
				K[j + 1] = temp;
			}
		}
	}
	// return K[];
}