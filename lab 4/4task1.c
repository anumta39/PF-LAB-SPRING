#include<stdio.h>
int main() {
	int percentage;
	printf("enter percentage ");
	scanf("%d",&percentage);
	if(percentage>=75) {
		printf("selected for the tournament ");
	}
	else{
		printf("not selected for the tournament");
	}
}

