#include<stdio.h>
/**ָ��γ���
	1.����ָ�����ͺ���+1 �鿴Ч��
	�𰸣�
		ָ��+1 �Ǹ���ָ������ +1 
		���ָ������ ��int ���� +1 ��ôָ�� ���ƫ��4���ֽ�
		���ָ������Ϊlong long ���� ��ô ָ���������ƫ��8���ֽ�
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
		printf("���p_int�ĵ�ַ%#x�����p_int����Ӧ��ֵ%d\n", p_int +i,*(p_int + i));
	}
	for (int i = 0; i < 4; i++) {
		printf("���p_long�ĵ�ַ%#x�����p_long����Ӧ��ֵ%d\n", p_long + i, *(p_long + i));
	}

}