# Authors: Pedro Ribeiro & Paulo Silva
# Description: Insertion sort algorithm
# Date: 28/05/2022 - Hour: 11:14

def insertionSort(v):

    n = len(v)

    for i in range(n):

        aux = v[i]
        j = i - 1

        while (j >= 0) and (aux < v[j]):

            v[j+1] = v[j]
            j = j - 1

        v[j+1] = aux

def modifiedInsertionSort(v, left, right):

    for i in range(left + 1, right + 1):

        aux = v[i]
        j = i - 1

        while (j >= left) and (aux < v[j]):
            v[j+1] = v[j]
            j = j - 1

        v[j+1] = aux

# Obs: This code is based on the algorithms of teacher
# Maria Adriana Vidigal de Lima (FACOM-UFU).