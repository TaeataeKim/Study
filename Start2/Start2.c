#include <stdio.h>

int main() {
	
	int x=0, y=0, z=0,r=0;
	
	while (1) {

		printf("���� �ΰ��� �Է��Ͻÿ�:");
		scanf("%d %d", &x, &y);
		printf("��Ģ����(+:1 -:2 *:3 /:4)�� �Է��Ͻÿ�\n");
		scanf("%d", &z);

		if (z == 1) printf("%d+%d=%d", x, y, x + y);
		else if (z == 2) printf("%d-%d=%d", x, y, x - y);
		else if (z == 3) printf("%d*%d=%d", x, y, x * y);
		else if (z == 4) printf("%d/%d=%d", x, y, x / y);
		else printf("�߸� �Է��߽��ϴ�");
		
		printf("������ ����Ͻðڽ��ϱ�?(0=Y,1=N)\n");
		scanf("%d", &r);

		if (r == 0) continue;
		else if (r == 1) break;
		else printf("�߸��Է�");
	}
	return 0;
}