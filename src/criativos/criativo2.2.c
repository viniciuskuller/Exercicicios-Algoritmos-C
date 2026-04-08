/**
 * @file criativo2.2.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício Criativo 2.2.
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
    int N1, N2, N3;
    printf("N1: ");
    scanf("%d", &N1);
    printf("N2: ");
    scanf("%d", &N2);
    printf("N3: ");
    scanf("%d", &N3);

    int  yH1,  yH2, yH3;
    yH1 = N1 * 3;
    yH2 = N2 * 3;
    yH3 = N3 * 3;
    int BaseY = 200;
    int x1, x2, x3;
    x1 = 15;
    x2 = x1 + 75;
    x3 = x2 + 75;
    
    
    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 800, 600, "Exercício Criativo 2.2" );

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
        if (N1 <= N2 && N2 <= N3){
            if (N1 >= 0){
                DrawText(TextFormat("%d", N1), 35, BaseY - 15, 20, RED );
                DrawRectangle(x1, BaseY - yH1, 50, yH1, RED);
            } else {
                DrawText(TextFormat("%d", N1), 35, BaseY + 15, 20, RED);
                DrawRectangle( x1, BaseY, 50, -yH1, RED);
            }
            if (N2 >= 0){
                DrawText(TextFormat("%d", N2), 115, BaseY - 15, 20, GREEN );
                DrawRectangle( x2, BaseY - yH2, 50, yH2, GREEN);
            } else {
                DrawText(TextFormat("%d", N2), 115, BaseY + 15, 20, GREEN);
                DrawRectangle( x2, BaseY, 50, -yH2, GREEN);
            }
             if (N3 >= 0){
                DrawText(TextFormat("%d", N3), 195, BaseY - 15, 20, BLUE );
                DrawRectangle(x3, BaseY - yH3, 50, yH3, BLUE);
            } else {
                DrawText(TextFormat("%d", N3), 195, BaseY + 15, 20, BLUE);
                DrawRectangle( x3, BaseY, 50, -yH3, BLUE);
            }
           
        }else if (N2 < N1 && N2 < N3){
             if (N2 >= 0){
                DrawText(TextFormat("%d", N2), 35, BaseY - 15, 20, RED);
                DrawRectangle( x1, BaseY - yH2, 50, yH2, RED);
            } else {
                DrawText(TextFormat("%d", N2), 35, BaseY + 15, 20, RED);
                DrawRectangle( x1, BaseY, 50, -yH2, GREEN);
            }
            if (N1 >= 0){
                DrawText(TextFormat("%d", N1), 115, BaseY - 15, 20, GREEN );
                DrawRectangle(x2, BaseY - yH1, 50, yH1, GREEN);
            } else {
                DrawText(TextFormat("%d", N1), 115, BaseY + 15, 20, GREEN);
                DrawRectangle( x2, BaseY, 50, -yH1, GREEN);
            }
            if (N3 >= 0){
                DrawText(TextFormat("%d", N3), 195, BaseY - 15, 20, BLUE );
                DrawRectangle(x3, BaseY - yH3, 50, yH3, BLUE);
            } else {
                DrawText(TextFormat("%d", N3), 195, BaseY + 15, 20, BLUE);
                DrawRectangle( x3, BaseY, 50, -yH3, BLUE);
            }

        } else if(N1 <= N2 && N3 <= N2){
             if (N1 >= 0){
                DrawText(TextFormat("%d", N1), 35, BaseY - 15, 20, RED );
                DrawRectangle(x1, BaseY - yH1, 50, yH1, RED);
            } else {
                DrawText(TextFormat("%d", N1), 35, BaseY + 15, 20, RED);
                DrawRectangle( x1, BaseY, 50, -yH1, RED);
            }
            if (N3 >= 0){
                DrawText(TextFormat("%d", N2), 115, BaseY - 15, 20, GREEN );
                DrawRectangle( x3, BaseY - yH3, 50, yH2, GREEN);
            } else {
                DrawText(TextFormat("%d", N2), 115, BaseY + 15, 20, GREEN);
                DrawRectangle( x2, BaseY, 50, -yH2, GREEN);
            }
             if (N3 >= 0){
                DrawText(TextFormat("%d", N3), 195, BaseY - 15, 20, BLUE );
                DrawRectangle(x3, BaseY - yH3, 50, yH3, BLUE);
            } else {
                DrawText(TextFormat("%d", N3), 195, BaseY + 15, 20, BLUE);
                DrawRectangle( x3, BaseY, 50, -yH3, BLUE);
            }
           }
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
