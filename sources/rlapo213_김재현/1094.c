#include<stdio.h>
int X;
int t;
int sum;
int cutting(int n) {
	if (X == n) {
		t++;
		return 0;
	}
	else if (n > X) {
		cutting(n/2);
	}
	else {  //n<X
		sum += n;
		if (sum > X) {
			sum -= n;
			cutting(n / 2);
		}
		else if(sum < X){  
			t++;
			cutting(n / 2);
		}
		else { //sum==X
			t++;
			return 0;
		}
	}
}

int main() {
	scanf("%d", &X);
	cutting(64);
	printf("%d", t);
	return 0;
}