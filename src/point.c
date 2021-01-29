#include<stdio.h>

/**
	说明 *（星号）取值运算符 只能作用在指针类型上   但是&可以用在所有类型上取址
		要求：
			float *pointer_3  表示 pointer_3是指向flot类型的指针变量
			char *pointer_4  表示 pointer_4是指向char类型的指针变量
			但是输出指针地址的时候还是需要用整形输出(%d)
		注意：
			上面要求没有强制检查错误 即使 你是使用int 类型声明 char 类型指针变量的 也不会报错 ，
			因为 char指针类型占2个字节  int指针类型也占2个字节 所以运行时极少可能出现错误
			但如果 long long类型值的地址被  指针变量int类型描述。long long 8个字节 int 4个字节
				赋值时从地址起始位置，只赋值了4个字节的 ，剩下的4个字节被遗忘。那么数据就不完整了
				下有例题分析
		指针基类型原理：（精读）
			需要和数组一起理解。 （指针的取址与赋值类似于数组）
					c中的数组实际上定义的是一个指针，为数组中第一个元素内存中的首位置，
				数组中元素为首元素地址向后依次移动元素数据大小的字节，取得该元素的地址。
				所以必须规定指针所指数据类型，从而保证对数据访问的完整性
**/


void point() {
    int i = 100;
    int w = 10;
    char g = 's';
    //此处的*号代表声明的变量是一个指针类型变量
    int *i_point = &i;
    int *w_point = &w;
    char *g_point = &g;
    int *gint_point = &g;
    int *q_point;
    //此处的*（星号）代表取出指针变量i_point地址下所指的值
    printf("i的地址是%d，用i_point取到的i值是%d \n", i_point, *i_point);
    //输出i的地址 运算符优先级一样遵循从右往左运算 取出i_point的指针值 然后从这个值中取出值得地址
    printf("i的地址%d\n", &*i_point);


    //这样报错 因为 *取值运算符只能作用在指针类型上
    //printf("突发奇想想取出地址为i的值，内存地址为100的值是：%d",*i);
    printf("g的地址是%d，用i_point取到的g值是%c \n", g_point, *g_point);
    //这样写是错误的，虽然 在本例中不会报错，但会有很大隐患 详情请看注意
    printf("g的地址是%d，用i_point取到的g值是%c \n", gint_point, *g_point);



    //让i_point的指针指向w的地址 (两种方式都可以)
    i_point = w_point;
    printf("更改地址后的i_point的地址取值%d\n", *i_point);
    i_point = &*w_point;
    printf("更改地址后的i_point的地址取值%d\n", *i_point);


    //给i取址
    printf("i的地址是%d:\n", &i);

    //给q指针赋一个地址值
    scanf("%d", &q_point, sizeof(&q_point));
    //取出q指针的地址
    //输出q的地址下的默认值
    printf("q_point的指针指向的地址的初始值%d\n", *q_point);
    //输出的是地址
    printf("q_point的值：%d\n", q_point);
    //输出q的地址 运算符优先级一样遵循从右往左运算 取出i_point的指针值 然后从这个值中取出值得地址
    //*q_point= 键盘输入的内容
    printf("q_point的指针指向的地址是%d\n", &*q_point);
    //输出q的地址 运算符优先级一样遵循从右往左运算 取出i_point指向的地址 然后从这个地址中取出
    printf("q_point的指针指向的地址是%d\n", *&q_point);




    //例题分析：(错误示范)
    long long h = 9223372036854775806;
    int *h_point = &h;
    //long long* h_point = &h;
    //先输出一下h的值
    printf("h值没有改变前的值为：%lld", h);
    //按照整形类型往里输入，C语言会在h_point所在指针往后寻址32位放置输入的内容
    // 那么原地址的前	32位将被替换成 输入的整型的二进制 后面32位不变
    // 输入1输出为9223372032559808513  二进制111111111111111111111111111111100000000000000000000000000000001
    scanf("\r%d", h_point, sizeof(h_point));
    printf("实际输出的h值%lld \n", h);
    // 指针 类型是 int 类型  那么*读取地址 的值将会 从内存位置往后读取32位 为h_point变量的指针地址值
    //输出是long long类型 ，
    //那么按照long long 取出64位会取到其他内存数据，大概率数值一样每次输出不一样
    printf("根据指针取到的值%lld", *h_point);

}