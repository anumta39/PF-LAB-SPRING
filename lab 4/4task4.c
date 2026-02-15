#include<stdio.h>
int main() {
	char username[20];
	int password;
	printf("enter username ");
	scanf("%s",&username);
	printf("enter password ");
	scanf("%d",&password);
	if(username[0]=='u' &&username[1]=='s'&&username[2]=='e'&&username[3]=='r' && password==7890){
		printf("connected successfully");
	}
	else{
		printf("connection failed");
	}
}

