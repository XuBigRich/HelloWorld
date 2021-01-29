#include<stdio.h>
/**指针课程添补
	1.根据指针类型后移+1 查看效果
	答案：
		指针+1 是根据指针类型 +1
		如果指针类型 是int 类型 +1 那么指针 向后偏移4个字节
		如果指针类型为long long 类型 那么 指针类型向后偏移8个字节
**/
void pointadd() {
    int a[3];
    int* p_int ;
    long long* p_long;
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    p_int = a;
    p_long = a;
    for (int i = 0; i < 4; i++) {
        printf("输出p_int的地址%#x，输出p_int所对应的值%d\n", p_int +i,*(p_int + i));
    }
    for (int i = 0; i < 4; i++) {
        printf("输出p_long的地址%#x，输出p_long所对应的值%d\n", p_long + i, *(p_long + i));
    }

}