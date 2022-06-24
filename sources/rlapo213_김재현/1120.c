#include<stdio.h>
#include<string.h>
char a[100], b[100];
int mcnt = 100, scnt;
char* shortptr, * longptr;

int main() {
	scanf("%s %s", a, b);
	int slen, llen;
	shortptr = a;
	longptr = b;
	slen = strlen(a);
	llen = strlen(b);
	if (strlen(a) > strlen(b)) {
		shortptr = b;
		longptr = a;
		slen = strlen(b);
		llen = strlen(a);
	}
	char* i = shortptr;
	char* j = longptr;
	for (int k = 0; k < llen - slen + 1; k++) {
		int idx = 0;
		scnt = 0;
		while (1) {
			if (*(i + idx) != *(j + idx)) {
				scnt++;
			}
			idx++;
			if (idx == slen)
				break;
		}
		j++;
		if (scnt < mcnt)
			mcnt = scnt;
	}

	printf("%d", mcnt);
	return 0;

}