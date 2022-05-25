#include <stdio.h>
int lotto[7];
int answer[6];
int i,j,count,count1,count2;
int w(int answer[]){
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(lotto[i]==answer[j])
			count++;
		}
	}
	return count;
	
}
int main(){
	for(i=0;i<7;i++){
		scanf("%d",&lotto[i]);
	}
	for(i=0;i<6;i++){
		scanf("%d",&answer[i]);
	}
	for(i=0;i<6;i++){
		if(lotto[6]==answer[i])
		count2++;
	}
	
	count1=w(answer);
	if(count<=2){
		printf("0");
	}
	if(count==3){
		printf("5");
	}
	if(count==4){
		printf("4");
	}
	
	if(count==6){
		printf("1");
	}
	if(count==5&&count2>=1){
		printf("2");
	}
	else if(count==5){
		printf("3");
	}
	return 0;
	
}
