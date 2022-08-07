#include <stdio.h>
#include <stdlib.h>

int main()
{
   enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT } ;

   enum Company xerox = XEROX;
   enum Company google = GOOGLE;
   enum Company ebay = EBAY;

   printf("The value of xerox is: %d\n", xerox);
   printf("The value of google is: %d\n", google);
   printf("The value of ebay is: %d\n", ebay);

    return 0;
}