#include<stdio.h>
int main() {
	int balance;
	printf("enter account balance ");
	scanf("%d",&balance);
	if(balance>0){
		printf("your account have positive balance");
	}
	else if(balance<0){
		printf("your account is overdrawn");
	}
	else{
		printf("your account have zero balance");
	}
}

