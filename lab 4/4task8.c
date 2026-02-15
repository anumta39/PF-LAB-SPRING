#include<stdio.h>
#include<math.h>
int main(){
	double n1,n2;
	int choice,a,b;
	printf("Math operation console");
	printf("\n1:Addition");
	printf("\n2:Subtraction");
	printf("\n3:Multiplication");
	printf("\n4:Division");
	printf("\n5:Square of a number");
	printf("\n6:Cube of a number");
	printf("\n7:Square root of a number");
	printf("\n8:Power");
	printf("\n9:Absolute number");
	printf("\n10:Modulus");
	printf("\nEnter your choice:");
	scanf("%d", &choice);
	switch(choice) {
		case 1:
			printf("Enter two numbers ");
			scanf("%lf %lf", &n1,&n2);
			printf("Result= %.2lf", n1+n2);
			break;
		case 2:
			printf("Enter two numbers ");
			scanf("%lf %lf", &n1,&n2);
			printf("Result= %.2lf", n1-n2);
			break;
	    case 3:
			printf("Enter two numbers ");
			scanf("%lf %lf", &n1,&n2);
			printf("Result= %.2lf", n1*n2);
			break;
		case 4:
			printf("Enter two numbers ");
			scanf("%lf %lf", &n1,&n2);
			if(n2==0) {
				printf("Error");
			}
			else{
				printf("Result= %.2lf", n1/n2);
			}
			break;
		case 5:
			printf("Enter a number ");
			scanf("%lf", &n1);
			printf("Result= %.2lf", n1*n1);
			break;
		case 6:
			printf("Enter a number ");
			scanf("%lf", &n1);
			printf("Result= %.2lf", n1*n1*n1);
			break;
		
		case 7:
			printf("Enter a number ");
			scanf("%lf", &n1);
			if(a<0){
				printf("The square root will be imaginary");
			}
			else{
			printf("Result= %.2lf", sqrt(n1) );	
			}
			
			break;
		case 8:
			printf("Enter base and exponent");
			scanf("%lf %lf", &n1,&n2);
			printf("Result= %.2lf", pow(n1,n2));
			break;
		case 9:
			printf("Enter a number ");
			scanf("%lf", &n1);
			printf("Result= %.2lf", fabs(n1));
			break;
		case 10:
			printf("Enter two numbers ");
			scanf("%d %d", &a,&b);
			if(b==0){
				printf("Error");
			}
			else{
				printf("Remainder=%d", a%b);
			}
			break;
		default:
			printf("Invalid choice");
	}
	
}
