/* Author: Pedro Henrique Resende Ribeiro
 * Description: Read a number and calculate square root or square
 * Date: 2022/05/10 - Hour: 12:49
 */

#include <stdio.h>
#include <math.h>

int main(void) {

    float number, answer;

    printf("Enter the number: ");
    scanf("%f", &number);

    if(number >= 0) {
        answer = sqrt(number);
        printf("The square root is %.2f\n", answer);
    } else {
        answer = pow(number, 2.0);
        printf("The number squared is %.2f\n", answer);
    }
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */