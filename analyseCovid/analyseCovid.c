#include<stdio.h>
#include<stdlib.h>

int main()
{
    char country[50];
    double vaccines[50];
    FILE *summoner;
    FILE *newfile;

    summoner= fopen("covid.txt", "r");
    newfile=fopen("CovidAnlaysis.txt", "w");

    if(summoner==NULL)
    {
        printf("Error creating the file 'summoner'!");
        exit(1);
    }
        if(newfile==NULL)
    {
        printf("Error creating the file 'newfile'!");
        exit(1);
    }

    while(fscanf(summoner, "%s %lf", country, vaccines)!=EOF)
    {
        printf("%s", country);
        printf(" %.1lf\n", vaccines);
        fprintf(newfile, "%s %.1lf\n", country, vaccines);
    }







    fclose(summoner);

    return 0;
}
