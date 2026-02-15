#include<stdio.h> 
int main() {
	int total,dis,a,b;
	printf("Enter the total purchase amount:");
	scanf("%d", &total);
	if(total>=5000) {
		printf("you got 20 percent discount");
		a=total*20/100;
		printf("\nnew price after discount %d",dis=total-a);
		}
	else if(total>=3000) {
		printf("you got 10 percent discount");
		 b=total*10/100;
		 printf("\nnew price after discount %d",dis=total-b);
		 
	}
	else{
		printf("you got no discount");
	}
	
}
