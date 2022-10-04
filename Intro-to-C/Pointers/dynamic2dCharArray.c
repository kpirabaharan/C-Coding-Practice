#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXBYTES 64

#define USB1 "scripts/USB_TEST_1.sh"
#define USB2 "scripts/USB_TEST_2.sh"
#define MMC "scripts/MMC_TEST.sh"
#define CAN "scripts/CAN_TEST.sh"
#define AUX1 "scripts/AUX_TEST_1.sh"
#define AUX2 "scripts/AUX_TEST_2.sh"
#define RAM "scripts/RAM_TEST.sh"
#define NET "scripts/NET_TEST.sh"
#define VID "scripts/VIDEO_TEST.sh"

int main()
{
    char **orderedIds;
    orderedIds = malloc(5 * sizeof(char *));

    for (int i = 0; i < 5; i++)
    {
        orderedIds[i] = malloc((MAXBYTES) * sizeof(char));
    }

    strcpy(orderedIds[0], USB1);
    strcpy(orderedIds[1], USB2);
    strcpy(orderedIds[2], MMC);
    strcpy(orderedIds[3], CAN);
    strcpy(orderedIds[4], RAM);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", orderedIds[i]);
    }
    printf("Size of: %lu", strlen(orderedIds[2]));

    return 0;
}