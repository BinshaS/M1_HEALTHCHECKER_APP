#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "health.h"

int find_disease()
{
     struct symptoms s1[4];
    FILE *f;
    char diseasename[1000];
    char symptomse[1000];
    char reasons[1000];
    char medicines[1000];
    char hospital[1000];
    f=fopen("disease1.txt","r");
    int i=0;
    while(i<3){
        printf("Enter the symptom %d : ",i+1);
        scanf("\n");
        scanf("%s",s1[i].symptom); i++; }

    char c;
    int lc=0;
    while((c=getc(f))!=EOF){
        if(c=='\n'){
                lc++;
        }
    }
    fseek(f,0,SEEK_SET);
    while(lc>0){
            fscanf(f,"%[^;]s",diseasename);
            fseek(f,1,SEEK_CUR);
            fscanf(f,"%[^;]s",symptomse);
            fseek(f,1,SEEK_CUR);
            fscanf(f,"%[^;]s",reasons);
            fseek(f,1,SEEK_CUR);
            fscanf(f,"%[^;]s",medicines);
            fseek(f,1,SEEK_CUR);
            fscanf(f,"%[^;]s",hospital);
            fseek(f,2,SEEK_CUR);

            int c=0;
            int g=0;
            while(g<3){

                char *a=strstr(symptomse,s1[g].symptom);

            if((a)!=0){
                    c++;
                }
                g++;
            }

            if(c>=2){
                printf("\nYou may be suffering with %s",diseasename);
                printf("\n\n");
                printf("all other symptoms are :: %s",symptomse);
                printf("\n\n");
            }
            lc--;
    }
printf("press any key to go to home screen");
getchar();
printf("\n\n\n");
return 1;
}
