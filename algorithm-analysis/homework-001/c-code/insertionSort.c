/* Authors: Pedro Ribeiro, Gabriela Damazo & Isabelli Tedeschi
 * Description: Insertion Sort algorithm
 * Date: 28/05/2022 - Hour: 11:41
 */

#include <stdlib.h>

void insertionSort(int *v, int n) {

    int i, j, aux;

    for(i = 1; i < n; i++) {

        aux = v[i];
        j = i - 1;

        while((j >= 0) && (aux < v[j])) {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = aux;

    }

}

void modifiedInsertionSort(int *v, int left, int right) {

    int i, j, aux;

    for(i = left + 1; i <= right; i++) {

        aux = v[i];
        j = i - 1;

        while((j >= left) && (aux < v[j])) {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = aux;

    }

}

/* Obs: This code is based on the algorithms of teacher
 * Maria Adriana Vidigal de Lima (FACOM-UFU).
 */
