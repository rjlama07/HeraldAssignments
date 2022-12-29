#include <stdio.h>
#include "lodepng.h"
#include <stdlib.h>

void main()
{
    char filename[200];
    printf("Enter filename path:");
    scanf("%s", &filename);
    unsigned char *image;
    unsigned int width, height;
    lodepng_decode32_file(&image, &width, &height, filename);
    printf("Width %d,Height: %d\n", width, height);
    for (int i = 0; i < width * height; i += 4)
    {
        printf("R=%d,G=%d,B=%d,T=%d\n", image[i], image[i + 1], image[i + 2], image[i + 3]);
    }
    printf("Okay done");
}
