#include<stdio.h>
main()
{
	float fc,K,L,C;
	printf("Designing a constant K high pass filter\n");
	printf("Enter the value of fc and K\n"); 
	scanf("%f%f",&fc,&K);
	L=(K*7)/(4*fc*22);
	C=7/(4*22*K*fc);
	
	printf("\tT-Type             Pi-Type \n\n       .__||_ _||__.     .__||__.  \n\n");

printf("The value of the C(capacitance) is %.16f \n",C);
printf("The value of the L(inductance) is %.16f \n\n",L);

printf("\n2L=%.16f\nC/2=%.16f\n\n",L*2,C/2);

}
