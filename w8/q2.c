// Write a program that reads an image file into 1D array and
// converts it into a grayscale image. A color of gray is one in
// which Red=Green=Blue. Large values are white and small
// values are black.
// An easy way to make an grayscale image out of color is to
// set each color value to the average of all three:
// gray=(R+G+B)/3;
// R=gray; G=gray; B=gray;
// This is same as q1, have have to implement grayscale effect,
// LOGIC is mentioned above
#include <stdio.h>
#include <stdlib.h>
#include "lodepng.h"

void main () {
    int i, j;
    unsigned error;
    unsigned char *image;
    unsigned int w, h, r, g, b, a, gray;
    char filename[1000];
    char output[1000];
    printf("Enter the input filename:\n");
    scanf("%s", filename);
    printf("Enter the output filename:\n");
    scanf("%s", output);

    error = lodepng_decode32_file(&image, &w, &h, filename);
    if (error)
    {
        printf("Error in decoding image %u: %s\n", error, lodepng_error_text(error));
    }

    for ( i = 0; i < h; i++)
    {
        for ( j = 0; j < w; j++)
        {
            r = image[4 * w * i + 4 * j + 0];
            g = image[4 * w * i + 4 * j + 1];
            b = image[4 * w * i + 4 * j + 2];
            a = image[4 * w * i + 4 * j + 3];

            gray = (r + g + b) / 3;

            r = gray;
            g = gray;
            b = gray;

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