#include<stdio.h>

void input() {
	int a, b, c;
	printf("a的地址为%#x,b的地址为%#x,c的地址为%#x \n",&a,&b,&c);
	void sort(int *a, int* b, int* c);
	scanf_s("\r%d %d %d", &a, &b,  &c);
	sort(&a, &b, &c);
	printf("%d %d %d \n",a,b,c);
}
void sort(int* a, int* b, int* c){
	printf("函数中变量a的地址%#d,函数中变量b的地址%#d,函数中变量c的地址%#d",a,b,c);
	void change(int *a, int *b);

	if (*a<*b) {
		change(a, b);
	}
	else if(*a < *c) {
		change(a, c);
	}
	else if (*b < *c) {
		change(b, c);
	}
}
void change(int *a,int *b) {
	int c;
	/*int* a_point = a;
	int* b_point = b;*/
	int* d;
	printf("a的地址为%#x,b的地址为%#x,c的地址为%#x  （指针的指针，地址的地址 和正常 运算没有关系 此处会造成迷惑）\n", &a, &b, &c);
	/*printf("a_point的地址为%#x,b_point的地址为%#x 16进制 \n", a_point, b_point);
	printf("a_point的地址为%d,b_point的地址为%d 10进制 \n", a_point, b_point);*/
	//java思想
	/*c = a;
	a = b;
	b = c;*/
	//c语言思想
	/*c = *a;
	b_point = a;
	a_point = b;*/ //a_point 指针地址下的值  改为b指针地址下的值
	//printf("a_point的地址下的数值变为%d,b_point的地址下的数值变为%d \n", *a_point, *b_point);
	//printf("a_point的地址为%#x,b_point的地址为%#x 16进制 请详细对比上面的地址是否有变化\n", a_point, b_point);

	//给 指针a和指针b的值改变位置
	printf("感受指针地址值的变化，a地址:%#x,b地址%#x",a,b);
	c = *a;
	*a = *b;
	*b = c;
	printf("感受指针地址值的变化，a地址:%#x,b地址%#x(注意观察debug里面的 值变化情况)", a, b);
}
	