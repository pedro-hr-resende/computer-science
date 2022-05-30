/* Author: Pedro Henrique Resende Ribeiro
 * Description: Check if a number is even or odd
 * Date: 2022/05/10 - Hour: 13:14
 */

#include <stdio.h>

int main(void) {

    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */