#include<stdio.h>

void input() {
	int a, b, c;
	printf("a�ĵ�ַΪ%#x,b�ĵ�ַΪ%#x,c�ĵ�ַΪ%#x \n",&a,&b,&c);
	void sort(int *a, int* b, int* c);
	scanf_s("\r%d %d %d", &a, &b,  &c);
	sort(&a, &b, &c);
	printf("%d %d %d \n",a,b,c);
}
void sort(int* a, int* b, int* c){
	printf("�����б���a�ĵ�ַ%#d,�����б���b�ĵ�ַ%#d,�����б���c�ĵ�ַ%#d",a,b,c);
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
	printf("a�ĵ�ַΪ%#x,b�ĵ�ַΪ%#x,c�ĵ�ַΪ%#x  ��ָ���ָ�룬��ַ�ĵ�ַ ������ ����û�й�ϵ �˴�������Ի�\n", &a, &b, &c);
	/*printf("a_point�ĵ�ַΪ%#x,b_point�ĵ�ַΪ%#x 16���� \n", a_point, b_point);
	printf("a_point�ĵ�ַΪ%d,b_point�ĵ�ַΪ%d 10���� \n", a_point, b_point);*/
	//java˼��
	/*c = a;
	a = b;
	b = c;*/
	//c����˼��
	/*c = *a;
	b_point = a;
	a_point = b;*/ //a_point ָ���ַ�µ�ֵ  ��Ϊbָ���ַ�µ�ֵ
	//printf("a_point�ĵ�ַ�µ���ֵ��Ϊ%d,b_point�ĵ�ַ�µ���ֵ��Ϊ%d \n", *a_point, *b_point);
	//printf("a_point�ĵ�ַΪ%#x,b_point�ĵ�ַΪ%#x 16���� ����ϸ�Ա�����ĵ�ַ�Ƿ��б仯\n", a_point, b_point);

	//�� ָ��a��ָ��b��ֵ�ı�λ��
	printf("����ָ���ֵַ�ı仯��a��ַ:%#x,b��ַ%#x",a,b);
	c = *a;
	*a = *b;
	*b = c;
	printf("����ָ���ֵַ�ı仯��a��ַ:%#x,b��ַ%#x(ע��۲�debug����� ֵ�仯���)", a, b);
}
	