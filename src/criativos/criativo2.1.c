/**
 * @file criativo2.1.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício Criativo 2.1.
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
    int N1, N2;
    printf("N1: ");
    scanf("%d", &N1);
    printf("N2: ");
    scanf("%d", &N2);
    int hN1, hN2, BaseY;
    hN1 = N1 * 3;
    hN2 = N2 * 3;
    BaseY = 200;
    
   
    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício Criativo 2.1" );

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
        if (N1 <= N2){
            if(hN1 >= 0) {
                DrawRectangle(20, BaseY - hN1, 50, hN1, RED);
                DrawText(TextFormat("%d", N1), 35, BaseY - 20 - hN1, 15, BLACK );
            } else{
                DrawRectangle(20, BaseY , 50, -hN1, RED);
                DrawText(TextFormat("%d", N1), 35, BaseY + 20 - hN1, 15, BLACK );
            }
            if(hN2 >= 0) {
                DrawRectangle(100, BaseY - hN2, 50, hN2, BLUE);
                DrawText(TextFormat("%d", N2), 125, BaseY - 20 - hN2, 15, BLACK );
            } else{
                DrawRectangle(100, BaseY , 50, -hN2, BLUE);
                DrawText(TextFormat("%d", N2), 125, BaseY + 20 - hN2, 15, BLACK );
        } }else {
            
            if(hN2 >= 0) {
                DrawRectangle(20, BaseY - hN2, 50, hN2, RED);
                DrawText(TextFormat("%d", N2), 35, BaseY - 20 - hN2, 15, BLACK );
            } else {
                DrawRectangle(20, BaseY, 50, -hN2, RED);
                DrawText(TextFormat("%d", N2), 35, BaseY + 20 - hN2, 15, BLACK );
            }
            if(hN1 >= 0){
                DrawRectangle(100, BaseY - hN1, 50, hN1, BLUE);
                DrawText(TextFormat("%d", N1), 125, BaseY - 20 - hN1, 15, BLACK );
            } else {
                DrawText(TextFormat("%d", N1), 125, BaseY + 20 - hN1, 15, BLACK );
                DrawRectangle(100, BaseY, 50, -hN1, BLUE);
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
