#include <stdio.h>
#include "traffic.h"

int vehicles[4];

void enterDensity()
{
    int i;

    printf("\nEnter number of vehicles:\n");

    for(i = 0; i < 4; i++)
    {
        printf("Road %d: ", i + 1);
        scanf("%d", &vehicles[i]);
    }
}

void automaticSignal()
{
    int i, highest;

    highest = vehicles[0];

    for(i = 1; i < 4; i++)
    {
        if(vehicles[i] > highest)
        {
            highest = vehicles[i];
        }
    }

    printf("\n===== AUTOMATIC SIGNAL =====\n");

    for(i = 0; i < 4; i++)
    {
        if(vehicles[i] == highest)
        {
            printf("Road %d -> GREEN\n", i + 1);
        }
        else
        {
            printf("Road %d -> RED\n", i + 1);
        }
    }
}

void pedestrianMode()
{
    printf("\n===== PEDESTRIAN CROSSING =====\n");
    printf("Vehicles -> STOP\n");
    printf("Pedestrians -> CROSS\n");
}

void emergencyMode()
{
    printf("\n===== EMERGENCY MODE =====\n");
    printf("Emergency vehicle detected!\n");
    printf("Emergency route -> GREEN\n");
    printf("Other roads -> RED\n");
}

void statistics()
{
    int i, total = 0;

    printf("\n===== TRAFFIC STATISTICS =====\n");

    for(i = 0; i < 4; i++)
    {
        printf("Road %d : %d vehicles\n", i + 1, vehicles[i]);
        total = total + vehicles[i];
    }

    printf("Total vehicles = %d\n", total);
}

void previousRecords()
{
    printf("\n===== PREVIOUS RECORDS =====\n");
    printf("Traffic records are displayed here.\n");
}
