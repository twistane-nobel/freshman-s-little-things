#include <stdio.h>
#include <math.h>
int main(){
	int num, temp, te;
	scanf("%d", &num);
	temp = num;
	te = num;
	int i = 0;
   while(temp > 0){
	   temp = temp / 10;
		i++;
   }
	printf("%d\n", i);
	int x = i;
	int digit;
	for (;i > 0;i--){
		digit = num / pow(10, i-1);
		num = num-digit*pow(10, i-1);
		printf("%d ", digit);
	}
	printf("\n");
	int r;
	for (int count = 0;count < x;count++){
		r = te%10;
		printf("%d", r);
		te = te/10;
	}
	return 0;
}
/*
给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
输入
一个不大于5位的数字
输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
输入样例复制
12345
输出样例复制
5
1 2 3 4 5
54321
*/
54321
