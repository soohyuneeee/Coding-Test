#include <stdio.h>
int count;
void hanoi(int n, int a, int b, int c){
	if(n == 1) {//�ϳ��� ž�� ���� ���� 1���� �� �����Ӱ� ������ �� ������ n==1�϶� �׸��� 
		printf("%d %d\n", a, c); 
		return;
	}
	hanoi(n - 1, a, c, b);//��ͷ� (n-1���� �ű� ����,�ڱ��ڽ��� ��ġ, n-1���� ���İ��� ��,n-1���� �����ϴ°� 
	 
	printf("%d %d\n", a, c);//a->c�� ���°��� ������ -> n�� �̵���  
	hanoi(n - 1, b, a, c);//n�� �̵������� b�� �Ű� ���� �������� a�� ���� c�� �ű� ����  
}

int main(){
	int n; scanf("%d", &n);
	printf("%d\n", (1 << n) - 1); //��Ʈ �����ڷ� nĭ��ŭ �������� ���� => 2�� n��������ŭ ����   
	hanoi(n, 1, 2, 3);
	return 0;
}

