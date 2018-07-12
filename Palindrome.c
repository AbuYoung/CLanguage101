//
// Created by abuyo on 2018/5/10.
//

#include <stdio.h>

int a(int n)//求出5位数和6位数中的回文数函数
{
	int i,sum,temp,len;
	int a,b,c;
	for(i=10000;i<1000000;++i)
	{
		sum=0;
		temp=i;
		len=0;
		while(temp!=0)
		{
			sum=sum*10+temp%10;
			temp=temp/10;
			len++;//累计位数以此判断是5位数还是6位数
		}
		if(sum==i)//先把回文数求出来，下面再来比较各位数字之和是否等于n
		{
			a=i%10;//个位
			b=i/10%10;//十位
			c=i/100%10;//百位

			if(5==len)
			{
				if(n==(2*a+2*b+c))
				{
					printf("%d\n",i);
				}
			}
			if(6==len)
			{
				if(n==(2*a+2*b+2*c))
				{
					printf("%d\n",i);
				}
			}
		}
	}
}
//主函数
int main()
{
	int n;
	scanf("%d",&n);
	a(n);
	return 0;
}