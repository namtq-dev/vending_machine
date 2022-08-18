#include "menu.h"

void initMenu()
{
  readDrinkInfo(all_drink, &maxdrink);
}

void menu_home(int *figures)
{
  printf("--------------------------------------\n");
  printf("Menu:\n");
  printf("-- 1.  %10s            %2d --\n"
         "-- 2.  %10s            %2d --\n"
         "-- 3.  %10s            %2d --\n"
         "-- 4.  %10s               --\n",
         all_drink[0].brand, figures[0], 
         all_drink[1].brand, figures[1], 
         all_drink[2].brand, figures[2], "Quit");
  printf("--------------------------------------\n");
  printf("Your choice: ");
}

void menu_bye()
{
  printf("Bye\n");
}
