#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "health.h"

int find_BMI()
{
     struct symptoms s1[4];
	int age;
    float w,h,bmi;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age>18 && age<=45){
    printf("enter your weight in kilograms:");
    scanf("%f",&w);
    printf("enter your height in metres:");
    scanf("%f",&h);
    bmi=(w/pow(h,2));
    printf("your BMI is: %f\n",bmi);
    if(bmi>=25)
        printf("you are overweight\n");
    else if(18.5<bmi && bmi<24.9)
        printf("you are normal\n");
    else if(bmi<18.5)
        printf("\nyou have malnutrition\n\n");
	}
	else
		printf("you are under-age\n\n");
printf("press any key to go to home screen");
getchar();
printf("\n\n");
return 1;
}