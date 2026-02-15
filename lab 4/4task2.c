#include<stdio.h>
int main() {
	int gbused;
	printf("enter total GB used ");
	scanf("%d",&gbused);
	if(gbused<=50){
		printf("you're a basic user");
	}
	else if(gbused>51&&gbused<150){
		printf("you'r a standard user");
	}
	else{
		printf("you're a heavy user");
	}
}

