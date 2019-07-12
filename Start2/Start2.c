#include <stdio.h>

int main() {
	
	int x=0, y=0, z=0,r=0;
	
	while (1) {

		printf("정수 두개를 입력하시오:");
		scanf("%d %d", &x, &y);
		printf("사칙연산(+:1 -:2 *:3 /:4)을 입력하시오\n");
		scanf("%d", &z);

		if (z == 1) printf("%d+%d=%d", x, y, x + y);
		else if (z == 2) printf("%d-%d=%d", x, y, x - y);
		else if (z == 3) printf("%d*%d=%d", x, y, x * y);
		else if (z == 4) printf("%d/%d=%d", x, y, x / y);
		else printf("잘못 입력했습니다");
		
		printf("연산을 계속하시겠습니까?(0=Y,1=N)\n");
		scanf("%d", &r);

		if (r == 0) continue;
		else if (r == 1) break;
		else printf("잘못입력");
	}
	return 0;
}