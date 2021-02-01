// Apply a negative filter on an image file. This is the process
// of reversing the RGB values. For example, if the Red value of
// the pixel is 100, the inverse is 155. NOTE: 0 is minimum and
// 255 is maximum.
#include <stdio.h>
#include <stdlib.h>
#include"lodepng.h"

void main(){
    int i, j;   //i for row, j for column
    unsigned error;
    unsigned char *image;
    unsigned int w, h;
    unsigned int r, g, b, a;
    char filename[1000];
    char output[1000];

    printf("Enter the input filename:\n");
    scanf("%s", filename);
    printf("Enter the output filename:\n");
    scanf("%s", output);

    // This is now for encoding image
    // for image decoding para

    // decoding + error handling
    error = lodepng_decode32_file(&image, &w, &h, filename);
    if (error)
    {
        printf("Error in decoding image %u: %s\n", error, lodepng_error_text(error));
    }

    // 2x2 image (width=2   height=2)
    // 00(0 1 2 3)      01(4 5 6 7)
    // 10(8 9 10 11)    11(12 13 14 15)
    // This is for finding rgba values of each elements
    for ( i = 0; i < h; i++)
    {
        for ( j = 0; j < w; j++)
        {
            r = image[4 * w * i + 4 * j + 0];
            g = image[4 * w * i + 4 * j + 1];
            b = image[4 * w * i + 4 * j + 2];
            a = image[4 * w * i + 4 * j + 3];

            // Now, reversing the value for negative effect, r=100 -> r=155, and so on
            r = 255 - r;
            g = 255 - g;
            b = 255 - b;

            // storing again in r g b a correspondance
            image[4 * w * i + 4 * j + 0] = r;
            image[4 * w * i + 4 * j + 1] = g;
            image[4 * w * i + 4 * j + 2] = b;
        }
    }
    // This is now for encoding image
    unsigned char *png;
    size_t pngsize;

    // encoding + error handling
    error = lodepng_encode32(&png, &pngsize, image, w, h);
    if (error)
    {
        printf("Error in decoding image %u: %s\n", error, lodepng_error_text(error));
    }
    else
    {
        lodepng_save_file(png, pngsize, output);
    }
    
    free(image);
    free(png);
}
