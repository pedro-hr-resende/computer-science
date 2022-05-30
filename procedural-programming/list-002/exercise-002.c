/* Author: Pedro Henrique Resende Ribeiro
 * Description: Read a positive number and calculate the square root
 * Date: 2022/05/10 - Hour: 12:37
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
        printf("Enter a valid number!\n");
    }
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */