#include <stdio.h>
int i,n;
int p(int num){
	for(i=0;i<num*4;i++) printf("_");
	printf("\"����Լ��� ������?\"\n");
	for(i=0;i<num*4;i++) printf("_");
	printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
	for(i=0;i<num*4;i++) printf("_");
	printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
	for(i=0;i<num*4;i++) printf("_");
	printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	return 0;
	}
int f(int num){
	if(num==n){
		for(i=0;i<num*4;i++) printf("_");
		printf("\"����Լ��� ������?\"\n");
		for(i=0;i<num*4;i++) printf("_");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for(i=0;i<num*4;i++) printf("_");
		printf("��� �亯�Ͽ���.\n");
		return 0;
	}
	p(num);
	f(num+1);
	for(i=0;i<num*4;i++) printf("_");
	printf("��� �亯�Ͽ���.\n");
	return 0;
}
int main(){
	scanf("%d",&n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	f(0);
	return 0;
}
