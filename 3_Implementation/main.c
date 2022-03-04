#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "health.h"


//int add_disease();
///int find_disease();
///int find_BMI();
////int find_reason();
//int find_hospital();
//int find_medicine();

int  main()
{
    int p;
    printf("welcome to Health checker, Hope you are having a great day :) \n\n");
    printf("choose your option\n\n");
    printf("1.Add new disease details\n2.Find your disease\n3.Find your BMI\n4.Find reasons for your disease\n5.Find doctors available for your disease\n6.Find medicines for your disease\n7.exit\n\n\n");
    scanf("%d",&p);

    switch(p)
    {
    case 1:
            add_disease();
           
    case 2:
            find_disease();
    case 3:
            find_BMI();
    case 4:
            find_reason();
    case 5:
            find_hospital();
    case 6:
            find_medicine();
    case 7:
   		exit(0);
    }
    return 1;
}
