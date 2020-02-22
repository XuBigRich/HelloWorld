#include<stdio.h>
void arrayissue() {
	int* p, i, a[10];
	p = a;
	for (i = 0; i < 10; i++) {
		scanf_s("%d",p++);
	}
	printf("\n");
	p = a;
	for (i = 0; i < 10; i++) {
		printf("%d", *p++);
	}
}