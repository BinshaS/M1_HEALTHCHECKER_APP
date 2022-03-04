#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include "health.h"

int find_hospital()
{
     struct symptoms s1[4];
FILE *f;
    char diseasename[50];
    char symptoms[500];
    char reasons[500];
    char medicines[500];
    char hospital[500];
    f=fopen("disease1.txt","r");
    int i=0;
    while(i<3){
        printf("Enter the symptom %d : ",i+1);
        scanf("\n");
        scanf("%s",s1[i].symptom); i++; }

    char c;
    int lc = 0;
    while((c=getc(f))!=EOF){
        if(c=='\n'){
                lc++;
        }
    }
    fseek(f,0,SEEK_SET);
    while(lc>0){
            fscanf(f,"%[^;]s",diseasename);
            fseek(f,1,SEEK_CUR);
            fscanf(f,"%[^;]s",symptoms);
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

                char *a=strstr(symptoms,s1[g].symptom);

            if((a)!=0){
                    c++;
                }
                g++;
            }

            if(c>=2){
            	printf("\nThe disease you're sufffering may be %s\n",diseasename);
                printf("\n\nThe hospitals for your symptoms are: %s\n\n",hospital);
            }
            lc--;
    }
printf("press any key to go to home screen");
getchar();
printf("\n\n");
//home();
return 1;
}
