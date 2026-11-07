#include <stdio.h>

void saveRecord()
{
    FILE *fp;

    fp = fopen("records.txt", "a");

    if(fp != NULL)
    {
        fprintf(fp, "Traffic record saved successfully.\n");
        fclose(fp);
    }
}

void showRecords()
{
    FILE *fp;
    char record[100];

    fp = fopen("records.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo records available.\n");
        return;
    }

    printf("\n===== PREVIOUS RECORDS =====\n");

    while(fgets(record, 100, fp) != NULL)
    {
        printf("%s", record);
    }

    fclose(fp);
}
