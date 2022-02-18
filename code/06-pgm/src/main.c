#include <stdio.h>
#include "lab6.h"

int main(int argc, char **argv)
{
    imagem img, img_limiar, img_crop, img_blur, img_edge;
    le_imagem(&img);
    escreve_imagem(img, "../img/dog.pgm");

    limiar(img, 150, &img_limiar);
    escreve_imagem(img_limiar, "../img/dog_limiar.pgm");

    medidas m1;
    m1.xmin = 1;
    m1.xmax = 100;
    m1.ymin = 0;
    m1.ymax = 30;
    crop(img, m1, &img_crop);
    escreve_imagem(img_crop, "../img/dog_crop.pgm");

    medidas m2;
    m2.xmin = 1;
    m2.xmax = 101;
    m2.ymin = 1;
    m2.ymax = 75;
    blur(img, &img_blur);
    crop(img_blur, m2, &img_blur);
    escreve_imagem(img_blur, "../img/dog_blur.pgm");

    limiar(img_edge, 150, &img_edge);
    edge(img_limiar, &img_edge);
    escreve_imagem(img_edge, "../img/dog_edge.pgm");

    return 0;
}