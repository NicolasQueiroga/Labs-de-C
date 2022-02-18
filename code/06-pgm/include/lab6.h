#ifndef __LAB6_H_
#define __LAB6_H_

typedef struct _imagem
{
    char type[3];
    int col;
    int row;
    int matrix[640][480];
    int max_gray;
} imagem;

typedef struct _medidas
{
    int xmin;
    int xmax;
    int ymin;
    int ymax;
} medidas;

int le_imagem();
int escreve_imagem(imagem img, char *path);
void limiar(imagem img, int limiar, imagem *img_limiar);
int crop(imagem img, medidas m, imagem *img_crop);
void blur(imagem img, imagem *img_blur);
void edge(imagem img, imagem *img_edge);

#endif