#include<stdio.h>
/**
声明数组a[10]
a代表数组的地址 数组的指针
其中a代表该数组第一个元素的内存起始地址
若要获取元素则根据 数组类型 指针向后偏移 几个字节
例如因为是int类型每次 + 1就是后移4个字节

方便理解：
	int *p=&a[0];
	与数组a的地址 一样
//此外还有数组下表法取值
a[i]
代表 取出a数组下第i个元素  和java 类似

**/

void array() {
	int  a[10];
	//引用一个数组 可以使用a[i]或*(a+1) 
	*(a + 0) = 1;
	printf("输出数组的第一个元素：%d  \n", a[0]);
	printf("输出a数组的地址%#x,输出a[0]的地址%#x   (注意观察是否相等) \n", &a, &a[0]);
	//根据上面经验 取出a[0]的值 还可以使用如下方法
	printf("%d", *a);
}