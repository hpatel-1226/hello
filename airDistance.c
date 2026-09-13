/**
 *  Author: Heer Patel
 *
 *  Date: 9/3/2026
 *
 *  This program prompts the user to enter the latitude and longitude of two
 *  locations and computes the distance between them.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    int R = 6371; // Earth's radius in km
    double  latitudeA, latitudeB;
    double  longitudeA, longitudeB;
    double  delta_rad, latA_rad, latB_rad;
    double  distance;


    printf("Please input the latituda and longitude of Origin and then Destination \nFor Exmaple: 41 -87 \n             40 -96\n");
    scanf("%lf %lf", &latitudeA, &longitudeA);
    scanf("%lf %lf", &latitudeB, &longitudeB);
    printf("Location Distance\n");
    printf("========================\n");
    printf("Origin: (%.6f, %.6f)\n", latitudeA, longitudeA);
    printf("Destination: (%.6f, %.6f)\n", latitudeB, longitudeB);


    latA_rad = latitudeA * M_PI / 180.0;
    latB_rad = latitudeB * M_PI / 180.0;
    delta_rad = (longitudeB - longitudeA) * M_PI / 180.0;
    distance = acos(sin(latA_rad) * sin(latB_rad) + cos(latA_rad) * cos(latB_rad) * cos(delta_rad)) * R;


    printf("Air distance is %.6f kms\n", distance);









}
