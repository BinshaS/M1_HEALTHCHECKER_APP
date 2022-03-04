#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "health.h"

int add_disease()
{
         struct symptoms s1[4];
        FILE *f;
        f=fopen("disease1.txt","a");
        char diseasename[500];
        char symptomses[1000];
        char reasons[1000];
        char medicines[1000];
        char hospital[1000];
        int n;
        printf("Enter how many disease do u want to add : ");
        scanf("%d",&n);
        while(n>0){
                printf("Enter the disease name :");
                scanf("\n");
                gets(diseasename);
                printf("Enter the symptoms of %s : ",diseasename);
                scanf("\n");
                gets(symptomses);
                printf("Enter the reasons of %s : ",diseasename);
                scanf("\n");
                gets(reasons);
                printf("Enter the medicines for %s : ",diseasename);
                scanf("\n");
                gets(medicines);
                printf("Enter available hospitals for %s: ",diseasename);
                scanf("\n");
                gets(hospital);
                n--;
                fprintf(f,"%s;%s;%s;%s;%s;\n",diseasename,symptomses,reasons,medicines,hospital);
        }
        fclose(f);
printf("\n\npress any key to go to home screen");
getchar();
printf("\n\n\n");
//home();
return 1;
}