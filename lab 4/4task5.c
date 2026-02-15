#include<stdio.h>
int main() {
	int choice;
	int i=5000;
	int w;
	int d;
	printf("Enter the number (1-4) to get different services ");
	printf("\nEnter 1 to check balance inquiry "); 
	printf("\nEnter 2 to withdraw money ");
	printf("\nEnter 3 to deposit money");
	printf("\nEnter 4 to exit");
	printf("\nEnter the number:");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("\nBALANCE INQUIRY%d", i);
			break;
		case 2:
			printf("\nWITHDRAW MONEY");
			printf("\nEnter the amount you want to withdraw:");
			scanf("%d",&w);
			printf("Remaining balance %d", i-w);
			break;
		case 3:
			printf("\nDEPOSIT MONEY");
			printf("\nEnter the amount you want to deposit:");
			scanf("%d",&d);
			printf("Current balance %d", i+d);
			break;
		case 4:
			printf("\n EXIT");
		default:
		printf("\nINVALID CASE");
			
	}
	
	
}

