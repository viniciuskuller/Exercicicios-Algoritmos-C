/**
 * @file criativo1.3.c
 * @author Viníicus Faustino
 * @brief Arquivo de código fonte da solução do Exercício Criativo 1.3.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "raylib/raylib.h"

int main( void ) {

    /*-----------------------------------------------------
     * A lógica inicial do seu programa deve vir aqui:
     *     - declaração de variáveis;
     *     - entrada de dados;
     *     - processamentos adicionais.
     ----------------------------------------------------*/
    int x0, x;
    int y0,y;
    int h;          //Altura
    int xMeio, yMeio;
    printf("x inicial: ");
    scanf("%d", &x0);
    printf("y inicial: ");
    scanf("%d", &y0);
    printf("x final: ");
    scanf("%d", &x);
    printf("y final: ");
    scanf("%d", &y);
    printf("altura: ");
    scanf("%d", &h);
    yMeio = y - h;
    xMeio = (x - x0) / 2;

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício Criativo 1.3" );

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS( 60 );    

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/
        DrawLine(x0, y0, x, y, BLACK);
        DrawLine(x0, y0, xMeio, yMeio, BLACK);
        DrawLine(xMeio, yMeio, x, y, BLACK);


        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve terminar na linha acima.
         ---------------------------------------------------------------------*/

        // termina o desenho
        EndDrawing();

    }

    // fecha a janela
    CloseWindow();
    return 0;

}
