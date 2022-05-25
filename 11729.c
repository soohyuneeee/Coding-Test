#include <stdio.h>
int count;
void hanoi(int n, int a, int b, int c){
	if(n == 1) {//하노이 탑은 남은 판이 1개일 때 자유롭게 움직일 수 있으니 n==1일때 그만함 
		printf("%d %d\n", a, c); 
		return;
	}
	hanoi(n - 1, a, c, b);//재귀로 (n-1개를 옮길 것임,자기자신의 위치, n-1개가 거쳐가는 곳,n-1개가 가려하는곳 
	 
	printf("%d %d\n", a, c);//a->c로 가는것을 성공함 -> n이 이동함  
	hanoi(n - 1, b, a, c);//n은 이동했으니 b로 옮겨 갔던 나머지를 a에 걸쳐 c로 옮길 것임  
}

int main(){
	int n; scanf("%d", &n);
	printf("%d\n", (1 << n) - 1); //비트 연산자로 n칸만큼 왼쪽으로 더함 => 2의 n제곱수만큼 더함   
	hanoi(n, 1, 2, 3);
	return 0;
}

