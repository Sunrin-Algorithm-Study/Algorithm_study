//#include<stdio.h>
//int main() {
//	char c[51];
//	scanf("%s", c);
//	printf("%s??!",c);
//}


//2525
#include<stdio.h>
int a, b, c;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	for (c; c >= 60; c -= 60) {
		a++;
	}
	b += c;
	for (b; b >= 60; b -= 60) {
		a++;
	}
	if (a >= 24)a -= 24;
	printf("%d %d", a, b);
    return 0;
}
