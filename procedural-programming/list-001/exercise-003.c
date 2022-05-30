/* Author: Pedro Henrique Resende Ribeiro
 * Description: Print the sum of three integer numbers
 * Date: 2022/05/05 - Hour: 23:25
 */

#include <stdio.h>

int main(void) {

    int number1, number2, number3;
    int sum;

    printf("Enter the 1st number: ");
    scanf("%d", &number1);

    printf("Enter the 2nd number: ");
    scanf("%d", &number2);

    printf("Enter the 3rd number: ");
    scanf("%d", &number3);

    sum = number1 + number2 + number3;

    printf("The sum is %d\n", sum);
    
    return 0;
    
}

/* The execises are available on the Programacao Descomplicada website
 * https://programacaodescomplicada.wordpress.com/
 */