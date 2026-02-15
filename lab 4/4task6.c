#include<stdio.h>
int main() {
	int AC,PF,DE,LA,AP,tot;
	float per;
	printf("Enter the marks of applied calculus:");
	scanf("%d", &AC);
	printf("\nEnter the marks of programming fundamental:");
	scanf("%d", &PF);
	printf("\nEnter the marks of differential equation:");
	scanf("%d", &DE);
	printf("\nEnter the marks of linear algebra:");
	scanf("%d", &LA);
	printf("\nEnter the marks of applied physics:");
	scanf("%d", &AP);
	tot=AC+AP+DE+LA+PF;
	per=(tot/500.0)*100;
	printf("\npercentage is %.2f", per);
	if(per>=85){
	printf("\nFull scholarship");
}
    else if(per>=70) {
    	printf("\nPartial scholarship");
	}
	else if(per>=50) {
		printf("\nEligible for consideration");
	}
	else{
		printf("\nNot eligible");
	}
	
}
