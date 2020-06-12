#include<stdio.h>
void whycome(){
	int h,i;
	long long g;
	double k;
	char l,m,n,o;
	//scnf_s是输入到地址 ，&h是取到h的内存地址，
	//而 h是变量名 
	//如果	scanf_s("%d",h); 会报错
	//按照整形类型往里输入，C语言会寻址一个16位空间放置h
	scanf_s("%d",&h);
	printf("全部的：a的地址为%d", h);
	//表示只接收前五个数值
	scanf_s("%5d", &h);
	printf("限制长度为5个的：a的地址为%d", h);
	//加*号代表跳过该输入
	scanf_s("%*d", &h);
	printf("被省略的 a的地址为%d", h);
	//表示只接收前4个数值 h接收前两个 i接收后两个
	scanf_s("%2d%2d", &h,&i);
	printf("输入一个长度为4的字符会被截取成前两个与后两个h：%d，i：%d",h,i);
	//表示输入长整型数据
	scanf_s("%ld", &g);
	printf("输入一个长整型数据%ld", g);
	//表示输入双精度浮点数
	scanf_s("%lf", &k);
	printf("输入一个双精度浮点数%lf",k);
	scanchar();
}