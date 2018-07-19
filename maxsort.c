#include <stdio.h>

//
// Created by abuyo on 2018/7/19.
//
int main (){
	int N,k;
	printf("%s","请输入数字数量 \n");
	scanf("%d", &N);
	printf("%d", N);
	int a[N];

	printf("%s","想确定第几个数：\n");
	scanf("%d", &k);

	printf("%s", "请开始向数组 N 中输入数字：");

	for(int i = 0; i++; i<N){
		scanf("1%d", &a[i]);
	}
	return 0;
}