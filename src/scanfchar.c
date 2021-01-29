#include <stdio.h>
void scanchar() {
    char l, m,n,o;
    printf("\n========================\n");
    //如果控制串中有非格式字符则输入时也要输入该非格式字符 包括命令结束后的换行\r(系统自动加上去的)
    //***且对于字符串输入 要在地址参数后面加缓冲区大小
    scanf("\r%c,%c,%c,%c", &l, sizeof(l),&m, sizeof(m), &n, sizeof(n), &o, sizeof(o));
    printf("input character %c%c%c%c",l,m,n,o);
    //表示输入一个char类型 注意 空格也属于char类型
    scanf("\r%c%c", &l, sizeof(l), &m, sizeof(m));
    printf("input character l:%c and m:%c", l, m);

}