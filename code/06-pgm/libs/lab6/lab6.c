#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab6.h"

int le_imagem(imagem *img)
{
    FILE *ptr;
    ptr = fopen("../img/cat.pgm", "r");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
        return -1;
    }

    fscanf(ptr, "%s", img->type);
    fscanf(ptr, "%d", &img->col);
    fscanf(ptr, "%d", &img->row);
    fscanf(ptr, "%d", &img->max_gray);

    for (int i = 0; i < img->row; i++)
        for (int j = 0; j < img->col; j++)
            fscanf(ptr, "%d", &img->matrix[i][j]);

    fclose(ptr);
    return 0;
}

int escreve_imagem(imagem img, char *path)
{
    FILE *ptr;
    ptr = fopen(path, "wb");

    if (NULL == ptr)
    {
        printf("file can't be opened \n");
        return -1;
    }

    fprintf(ptr, "%s\n", img.type);
    fprintf(ptr, "%d ", img.col);
    fprintf(ptr, "%d\n", img.row);
    fprintf(ptr, "%d\n", img.max_gray);

    for (int i = 0; i < img.row; i++)
    {
        for (int j = 0; j < img.col; j++)
            fprintf(ptr, "%d ", img.matrix[i][j]);
        fprintf(ptr, "\n");
    }

    fclose(ptr);
    return 0;
}

void preproc(imagem img, imagem *img_preproc)
{
    strcpy(img_preproc->type, img.type);
    img_preproc->col = img.col;
    img_preproc->row = img.row;
    img_preproc->max_gray = img.max_gray;
}

void limiar(imagem img, int limiar, imagem *img_limiar)
{
    // preproc(img, img_limiar);
    strcpy(img_limiar->type, img.type);
    img_limiar->col = img.col;
    img_limiar->row = img.row;
    img_limiar->max_gray = img.max_gray;

    for (int i = 0; i < img.row; i++)
        for (int j = 0; j < img.col; j++)
        {
            int val = img.matrix[i][j];
            if (val < limiar)
                val = 0;
            else
                val = 255;

            img_limiar->matrix[i][j] = val;
        }
}

int crop(imagem img, medidas m, imagem *img_crop)
{
    if (m.xmax > img.col || m.ymax > img.row || m.xmin < 0 || m.ymin < 0 || m.ymax < m.ymin || m.xmax < m.xmin)
    {
        printf("something wrong with the mesures \n");
        return -1;
    }

    int col = m.xmax - m.xmin;
    int row = m.ymax - m.ymin;

    // preproc(img, img_crop);
    strcpy(img_crop->type, img.type);
    img_crop->col = col;
    img_crop->row = row;
    img_crop->max_gray = img.max_gray;

    for (int i = 0; i < m.ymax; i++)
        for (int j = 0; j < m.xmax; j++)
            img_crop->matrix[i][j] = img.matrix[m.ymin + i][m.xmin + j];

    return 0;
}

void blur(imagem img, imagem *img_blur)
{
    // preproc(img, img_blur);
    strcpy(img_blur->type, img.type);
    img_blur->col = img.col - 1;
    img_blur->row = img.row - 1;
    img_blur->max_gray = img.max_gray;

    for (int i = 1; i < img.row - 1; i++)
        for (int j = 1; j < img.col - 1; j++)
        {
            double val = img.matrix[i - 1][j - 1] + img.matrix[i - 1][j] + img.matrix[i - 1][j + 1] +
                         img.matrix[i][j - 1] + img.matrix[i][j] + img.matrix[i][j + 1] +
                         img.matrix[i + 1][j - 1] + img.matrix[i + 1][j] + img.matrix[i + 1][j + 1];

            img_blur->matrix[i][j] = val / 9;
        }
}

void edge(imagem img, imagem *img_edge)
{
    // preproc(img_limiar, img_edge);
    strcpy(img_edge->type, img.type);
    img_edge->col = img.col - 1;
    img_edge->row = img.row - 1;
    img_edge->max_gray = img.max_gray;

    for (int i = 1; i < img.row - 1; i++)
        for (int j = 1; j < img.col - 1; j++)
        {
            int neighbour = img.matrix[i - 1][j] + img.matrix[i][j - 1] + img.matrix[i][j + 1] + img.matrix[i + 1][j];
            int val = 4 * img.matrix[i][j];
            int diff = abs(neighbour - val);

            if (diff < 150)
                img_edge->matrix[i][j] = 0;
            else
                img_edge->matrix[i][j] = 255;
        }
}