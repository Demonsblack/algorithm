#include <stdio.h>

int i = 1;
void move(int n, char from, char to);
void hanoi(int n, int a, int b, int c);

int main()
{
	int n;
	char x, y, z;

	printf("输入圆盘个数:");
	scanf("%d", &n);

	x = 'A';
	y = 'B';
	z = 'C';

	hanoi(n, x, y, z);

	return 0;
}

void move(int n, char from ,char to)
{
	printf("第 %d 次移动，第 %d 号圆盘 %c --> %c\n",i++,n,from,to);
}

void hanoi(int n,int a,int b,int c)
{
	if(n == 1){
		move(1,a,c);
	}
	else if(n > 0){
		hanoi(n-1, a, c, b);
		move(n, a, b);
		hanoi(n-1, c, a, b);	
	}
}
