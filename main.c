#include <stdio.h>
#include "traffic.h"

int main()
{
    int choice;

    do
    {
        printf("\n===== SMART TRAFFIC SIGNAL MANAGEMENT SYSTEM =====\n");
        printf("1. Enter Traffic Density\n");
        printf("2. Automatic Signal Control\n");
        printf("3. Pedestrian Crossing\n");
        printf("4. Emergency Vehicle Mode\n");
        printf("5. View Statistics\n");
        printf("6. View Previous Records\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enterDensity();
                saveRecord();
                break;

            case 2:
                automaticSignal();
                break;

            case 3:
                pedestrianMode();
                break;

            case 4:
                emergencyMode();
                break;

            case 5:
                statistics();
                break;

            case 6:
                previousRecords();
                break;

            case 7:
                printf("\nThank you for using Smart Traffis Signal Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 7);

    return 0;
}
