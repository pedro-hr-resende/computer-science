/* Author: Pedro Henrique Resende Ribeiro
 * Description: Read a number and calculate the square root and square
 * Date: 2022/05/10 - Hour: 13:01
 */

#include <stdio.h>
#include <math.h>

int main(void) {

    float number, answer;

    printf("Enter the number: ");
    scanf("%f", &number);

    if(number >= 0) {

        answer = pow(number, 2.0);
        printf("The number squared is %.2f\n", answer);
        
        answer = sqrt(number);
        printf("The square root is %.2f\n", answer);
        
    } else {
        printf("Enter a positive number!\n");
    }
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */