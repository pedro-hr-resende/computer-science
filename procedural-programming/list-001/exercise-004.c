/* Author: Pedro Henrique Resende Ribeiro
 * Description: Square of a real number
 * Date: 2022/05/05 - Hour: 23:33
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    
    float number, square1, square2;

    printf("Enter a real number: ");
    scanf("%f", &number);

    square1 = number * number;
    square2 = pow(number, 2.0);

    printf("The square without pow is %f\n", square1);
    printf("The square with pow is %f\n", square2);
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */