/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print the fifth part of a real number
 * Date: 2022/05/05 - Hour: 23:50
 */

#include <stdio.h>

int main(void) {

    float number, answer;

    printf("Enter a real number: ");
    scanf("%f", &number);

    answer = number / 5.0;

    printf("The fifth part is %f\n", answer);

    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */