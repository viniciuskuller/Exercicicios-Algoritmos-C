/**
 * @file ex2.20.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.20.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    char Input;
    printf("Entre com um caractere: ");
    scanf(" %c", &Input);


    switch(Input){
        case 'B': case 'C': case 'D': case 'F':
        case 'G': case 'H': case 'J': case 'K':
        case 'L': case 'M': case 'N': case 'P': 
        case 'Q': case 'R': case 'S': case 'T':
        case 'V': case 'W': case 'X': case 'Y':
        case 'Z': case 'b': case 'c': case 'd':
        case 'f': case 'g': case 'h': case 'j':
        case 'k': case 'l': case 'm': case 'n': 
        case 'p': case 'q': case 'r': case 's':
        case 't': case 'v': case 'w': case 'x':
        case 'y': case 'z':
            printf("O caractere '%c' e uma consoante.", Input);
            break;
        case 'A': case 'a': case 'E': case 'e':
        case 'I': case 'i': case 'O': case 'o':
        case 'U': case 'u':
            printf("O caractere '%c' e uma vogal.", Input);
            break;
        case '0': case '1': case '2': case '3':
        case '4': case '5': case '6': case '7': 
        case '8': case '9':
            printf("O caractere '%c' e um digito.", Input);
            break;
        default:
            printf("O caractere '%c' e um simbolo.", Input);
            break;
    }
    return 0;

}