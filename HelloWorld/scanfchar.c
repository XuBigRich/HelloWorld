#include <stdio.h>
void scanchar() {
	char l, m,n,o;
	printf("\n========================\n");
	//������ƴ����зǸ�ʽ�ַ�������ʱҲҪ����÷Ǹ�ʽ�ַ� �������������Ļ���\r(ϵͳ�Զ�����ȥ��)
	//***�Ҷ����ַ������� Ҫ�ڵ�ַ��������ӻ�������С
	scanf_s("\r%c,%c,%c,%c", &l, sizeof(l),&m, sizeof(m), &n, sizeof(n), &o, sizeof(o));
	printf("input character %c%c%c%c",l,m,n,o);
	//��ʾ����һ��char���� ע�� �ո�Ҳ����char����
	scanf_s("\r%c%c", &l, sizeof(l), &m, sizeof(m));
	printf("input character l:%c and m:%c", l, m);

}