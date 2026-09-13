/**
 * Author: Heer Patel
 *
 * Date: 2026/9/10
 *
 * This program prompts the user to enter the number of GB in the plan per 30 day period, the current
 * day in the 30 day period and the total number of GB used so far and compute whether you are over,
 * under, or right on theaverage daliy usuage. It also informs you how many GB you have left and how
 * many on average, you can can use per day for the rest of the 30 day period.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

 int main(int argc, char **argv) {

    double used_GB, total_GB;
    int current_day;
    int total_period = 30;
    int remaining_day;


    printf("Enter the number of Gb in the plan per 30 day period, the current day in the plan period and total number of GB used so far: \n");
    scanf("%lf %d %lf", &total_GB, &current_day, &used_GB);

    remaining_day = total_period - current_day;

    if (current_day > 30 || current_day < 1) {
      printf("ERROR: invalid number of days\n");
    }

    double current_average = used_GB / current_day;
    double allowed_average = total_GB / total_period;
    double remaining_GB = total_GB - used_GB;

    printf("%d days used, %d days remaining\n", current_day, remaining_day);
    printf("Average daily use: %.2lf GB/day\n", current_average);

    if (used_GB >= total_GB) {
      printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
    }
    else {
      printf("You have %.2lf GB left.\n", remaining_GB);

    if (current_average > allowed_average) {
      double projected_total = current_average * total_period;
      double overage = projected_total - total_GB;
      printf("You are EXCEEDING your average daily use (%.2lf GB/day). \n", allowed_average);
      printf("Continuing this high usage, you will exceed your data plan by \n%.2lf GB\n", overage);
    }
    else if (current_average < allowed_average) {
      printf("You are below your average daily use %.2lf GB/day\n", allowed_average);
    }
    else {
      printf("You are right on your average daily use %.2lf GB/day\n", allowed_average);
    }
      double safe_remaining_average = remaining_GB / remaining_day;
      printf("To stay below your data plan, use no more than %.2lf GB/day\n", safe_remaining_average);
    }

    return 0;
  }

