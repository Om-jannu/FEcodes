#include<stdio.h>

int main(){
	int a,b,operation;
	printf("Enter the two numbers here:\n");
	printf("enter no.a=");
	scanf("%d",&a);
	printf("enter no.b=");
	scanf("%d",&b);
	printf("Select the operation by pressing\n ");
	printf("1. for Addition \n 2. for Subtraction \n 3. for Multiplication \n 4. for Division \n ");
	scanf("%d",&operation);
	switch(operation){
		case 1:
		printf("The sum of %d and %d is %d ",a,b,a+b);
		break;
		case 2:
		printf("The differece of %d and %d is %d ",a,b,a-b);
		break;
		case 3:
		printf("The product of %d and %d is %d ",a,b,a*b);
		break;
		case 4:
		printf("The division of %d and %d is %d ",a,b,a/b);
		break;
		default:
		printf("!Select the correct operator!");	
		
		
	}
	

   return 0;	
	
}
