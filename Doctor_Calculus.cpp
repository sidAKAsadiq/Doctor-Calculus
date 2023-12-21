#include <stdio.h>
 int main(){
	//system("COLOR 0B");
	printf("********************************__WELCOME TO DOCTOR CALCULUS__********************************\n");
	printf("                                BY: Muhammad Sadiq , k22-4303                                      \n");	
	int choice;
	int coef;
	int pow;
		do{
	printf("How may I help you?\n\n1.Help me with Derivatives\n\n2.Help me with Integrals\n");
	int c;
	scanf("%d",&c);
	//system("cls");
	switch(c){
	case 1:{
		printf("Select the type of derivative\n\n1.Polynomial\n\n2.Exponent\n\n3.Logarithm\n\n4.Trignometry\n");
		int type;
		scanf("%d",&type);
		//system("cls");
		switch(type){
			case 1:{
				printf("Enter the co-efficient of x\n");
				scanf("%d",&coef);
				printf("Enter the power of x\n");
				scanf("%d",&pow);
				printf("\nThe derivative of given function is: %d*x^%d\n",coef*pow,pow-1);
				break;
			}	
			case 2:{
				int coef_pow;
				int c1;
				printf("Is the power of e a constant?\n\n1.YES\n\n2.NO\n");
				scanf("%d",&c1);
				if(c1==1){
					printf("\nDue to power being constant, Derivative will be zero in any given case\n");
				}
				else{
				printf("Enter the co-efficient of e\n");
				scanf("%d",&coef);
				printf("Enter the co-efficient of power of e (considering that power is a function of x)\n");
				scanf("%d",&coef_pow);
				printf("Enter the power of x\n");
				scanf("%d",&pow);
				printf("\nThe derivative of given function is: %d*e^(%d*x^%d)*(%d*x^%d)\n",coef,coef_pow,pow,coef_pow*pow,pow-1);
				}	
			}
				break;
			case 3:{
				int in;
				int coef_in;
				printf("Is the value inside log is a constant\n\n1.YES\n\n2.NO\n");
				scanf("%d",&in);
				if(in==1){
					printf("\nDerivative will be zero on any given case\n");
				}
				else{
					printf("Enter the coefficient of log\n");
					scanf("%d",&coef);
					printf("Enter the coefficient of term inside (considering that log contains a function of x inside)\n");
					scanf("%d",&coef_in);
					printf("Enter the power of x\n");
					scanf("%d",&pow);
					printf("\nThe derivative of the given function is: (%d/ln(%d*x^%d))*(%d*x^%d)\n",coef,coef_in,pow,coef_in*pow,pow-1);
				}
			}
				break;
			case 4:	{
				int c1;
				int coef_a;
				printf("Is the value of angle a constant\n\n1.YES\n\n2.NO\n");
				scanf("%d",&c1);
				if(c1==1)
				printf("\nDerivative will be zero on any given case\n");
				else{
				printf("Select the trignometric function\n1.Sin\n2.Cos\n3.Tan\n");
				scanf("%d",&c1);
				printf("Enter the coeffiecent of trignometric function\n");
				scanf("%d",&coef);
				printf("Enter the coefficent of angle (considering its a function of x)\n");
				scanf("%d",&coef_a);
				printf("Enter the power of x\n");
				scanf("%d",&pow);
				if(c1==1){
					printf("\nThe derivative of given function is: (%d*cos(%d*x^%d))*(%d*x^%d)\n",coef,coef_a,pow,coef_a*pow,pow-1);
				}
				else if(c1==2){
					printf("\nThe derivative of given function is: (%d*-sin(%d*x^%d))*(%d*x^%d)\n",coef,coef_a,pow,coef_a*pow,pow-1);				
				}
				else{
					printf("\nThe derivative of given function is: (%d*sec^2(%d*x^%d))*(%d*x^%d)\n",coef,coef_a,pow,coef_a*pow,pow-1);					
				}
				}
				break;			
			}
			}
			break;
	}
	case 2:{
		printf("Select the type of derivative\n\n1.Polynomial\n\n2.Exponent\n\n3.Logarithm\n\n4.Trignometry\n");
		int type;
		scanf("%d",&type);
		//system("cls");
		switch(type){
			case 1:{
				printf("Enter the co-efficient of x\n");
				scanf("%d",&coef);
				printf("Enter the power of x\n");
				scanf("%d",&pow);
				printf("\nThe Integral of given function is: %d*x^%d/%d + C\n",coef,pow+1,pow+1);				
				break;
			}
			case 2:{
				int coef_pow;
				printf("Enter the co-efficient of e\n");
				scanf("%d",&coef);
				printf("Enter the co-effiencent of power (considering power is the function of x^1)\n");
				scanf("%d",&coef_pow);
				printf("\nThe Integral of given function is: %d*e^(%d*x)/%d + C\n",coef,coef_pow,coef_pow);				
				break;
			}
			case 3:{
				int coef_in;
					printf("Enter the coefficient of log\n");
					scanf("%d",&coef);
					printf("Enter the coefficient of term inside (considering that log contains a function of x^1 inside)\n");
					scanf("%d",&coef_in);
					printf("\nThe Integral of given function is: %d[xln(%d*x)-x] + C\n",coef,coef_in);
				break;
			}
			case 4:{
				int c1;
				int coef_a;
				printf("Select the trignometric function\n1.Sin\n2.Cos\n3.Tan\n");
				scanf("%d",&c1);		
				printf("Enter the coeffiecent of trignometric function\n");
				scanf("%d",&coef);
				printf("Enter the coefficent of angle (considering its a function of x^1)\n");
				scanf("%d",&coef_a);
				if(c1==1){
					printf("\nThe Integral of the given function is: %d[-cos(%d*x)/%d] + C\n",coef,coef_a,coef_a);
				}
				else if(c1==2){
					printf("\nThe Integral of the given function is: %d[sin(%d*x)/%d] + C\n",coef,coef_a,coef_a);
				}
				else{
					printf("\nThe Integral of the given function is: %d[-ln{cos(%d*x)}/%d] + C\n",coef,coef_a,coef_a);
				}					
				break;
			}
		}			
		break;
	}
	default:
	printf("\nInvalid choice\n");			
}
printf("\n\nDo you wish to find more answers\n\n1.YES\n\n2.NO\n");
scanf("%d",&choice);
//system("cls");
}while(choice==1);
//system("cls");
if(choice!=1){
	printf("********************************__Thanks for reaching out to DOCTOR CALCULUS__********************************\n");
	printf("                                      BY: Muhammad Sadiq , k22-4303                                      \n");
}
return 0;
}

