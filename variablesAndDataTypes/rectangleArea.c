/* Author: Jason Fedin
   Purpose:  This program is going to calculate the area of a rectangle
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // declaring variables
   double width = 34.2;
   double height = 65.5;
   double perimeter = 0.0;
   double area = 0.0;

   // performing perimeter calculation
   perimeter = 2.0 * (height + width);
   area = width * height;

   // displaying input
   printf("Width is:  %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
   printf("Area is: %f\n", area);

   return 0;
}