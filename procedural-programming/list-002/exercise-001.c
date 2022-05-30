/* Author: Pedro Henrique Resende Ribeiro
 * Description: Read two numbers and decide which is biggest
 * Date: 2022/05/10 - Hour: 12:22
 */

#include <stdio.h>

int main(void) {

    float number1, number2;

    printf("Enter the 1st number: ");
    scanf("%f", &number1);

    printf("Enter the 2nd number: ");
    scanf("%f", &number2);

    if(number1 > number2) {
        printf("The biggest number is %.2f\n", number1);
    } else {
        printf("The biggest number is %.2f\n", number2);
    }
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */