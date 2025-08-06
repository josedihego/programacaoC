#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define L 100
#define C 100
#define P 3

void generate_face(int matrix[L][C][P])
{
    int center_x = C / 2, center_y = L / 2;
    int face_radius = L / 3;
    int eye_radius = L / 10;

    for (int l = 0; l < L; l++)
    {
        for (int c = 0; c < C; c++)
        {
            matrix[l][c][0] = 200;
            matrix[l][c][1] = 220;
            matrix[l][c][2] = 255;

            if (sqrt(pow(c - center_x, 2) + pow(l - center_y, 2)) <= face_radius)
            {
                matrix[l][c][0] = 255;
                matrix[l][c][1] = 220;
                matrix[l][c][2] = 180;
            }

            if (sqrt(pow(c - (center_x - 20), 2) + pow(l - (center_y - 10), 2)) <= eye_radius ||
                sqrt(pow(c - (center_x + 20), 2) + pow(l - (center_y - 10), 2)) <= eye_radius)
            {
                matrix[l][c][0] = 0;
                matrix[l][c][1] = 0;
                matrix[l][c][2] = 0;
            }

            // Mouth (red line)
            if (c >= center_x - 15 && c <= center_x + 15 && l == center_y + 15)
            {
                matrix[l][c][0] = 255;
                matrix[l][c][1] = 0;
                matrix[l][c][2] = 0;
            }
        }
    }
}

void print_color_image(int matrix[L][C][P])
{
    for (int l = 0; l < L; l++)
    {
        for (int c = 0; c < C; c++)
        {
            printf("\033[48;2;%d;%d;%dm  \033[0m", matrix[l][c][0], matrix[l][c][1], matrix[l][c][2]);
        }
        printf("\n");
    }
}

void print_grayscale_colors(float cinza[L][C])
{
    printf("\nGrayscale Colors (First 10x10 block):\n");
    for (int l = 0; l < 100; l++)
    {
        for (int c = 0; c < 100; c++)
        {
            int gray_value = (int)cinza[l][c];
            printf("\033[48;2;%d;%d;%dm  \033[0m", gray_value, gray_value, gray_value);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[L][C][P];
    float cinza[L][C];

    generate_face(matrix);

    printf("Color Image (100x100):\n");
    print_color_image(matrix);

    for (int l = 0; l < L; l++)
    {
        for (int c = 0; c < C; c++)
        {
            cinza[l][c] = 0.299 * matrix[l][c][0] + 0.587 * matrix[l][c][1] + 0.114 * matrix[l][c][2];
        }
    }

    printf("\nGrayscale Grid (First 10x10):\n");
    print_grayscale_colors(cinza);

    return 0;
}