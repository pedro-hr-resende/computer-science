# Authors: Pedro Ribeiro & Paulo Silva
# Description: User interface
# Date: 28/05/2022 - Hour: 11:14

import insertionSort as insertion
import mergeSort as merge
import quickSort as quick
import algorithmTests as tests
import graphicPlots as graphics
import random

v1 = []
v2 = []

# These range values are for insertion sort
n1 = [1000, 2000, 5000, 4000, 6000, 8000, 10000, 15000, 20000, 30000, 40000, 50000, 60000, 70000,
      80000, 90000, 100000, 120000, 140000, 160000, 180000, 200000]

# These range values are for merge and quick sort
n2 = [1000, 10000, 50000, 100000, 150000, 200000, 250000, 300000, 350000, 400000, 450000, 500000,
      550000, 600000, 650000, 700000, 750000, 800000, 850000, 900000, 950000, 1000000]

insertionTimes = []
mergeTimes = []
modifiedMergeTimes = []
quickTimes = []
modifiedQuickTimes = []

for i in range(0, 22):

    # Insertion Sort
    v1 = random.sample(range(0, n1[i]), n1[i])
    # Merge and Quick Sort
    v2 = random.sample(range(0, n2[i]), n2[i])

    print("Insertion sort test: {} elements\n".format(n1[i]))

    aux = v1.copy()
    timeSpent = tests.insertionSortTest(aux)
    insertionTimes.append(timeSpent)
    print("The time spent with insertion sort was: {:.5f}\n" .format(timeSpent))

    print("Merge and quick sort test: {} elements\n".format(n2[i]))

    aux = v2.copy()
    timeSpent = tests.mergeSortTest(aux)
    mergeTimes.append(timeSpent)
    print("The time spent with merge sort was: {:.5f}\n" .format(timeSpent))

    aux = v2.copy()
    timeSpent = tests.modifiedMergeSortTest(aux)
    modifiedMergeTimes.append(timeSpent)
    print("The time spent with merge sort using insertion sort was: {:.5f}\n" .format(timeSpent))

    aux = v2.copy()
    timeSpent = tests.quickSortTest(aux)
    quickTimes.append(timeSpent)
    print("The time spent with quick sort was: {:.5f}\n" .format(timeSpent))

    aux = v2.copy()
    timeSpent = tests.modifiedQuickSortTest(aux)
    modifiedQuickTimes.append(timeSpent)
    print("The time spent with quick sort using insertion sort was: {:.5f}\n" .format(timeSpent))

graphics.quadraticFit(n1, insertionTimes, "Insertion Sort")
graphics.linearFit(n2, mergeTimes, "Merge Sort")
graphics.quadraticFit(n2, modifiedMergeTimes, "Merge-Insertion Sort")
graphics.linearFit(n2, quickTimes, "Quick Sort")
graphics.quadraticFit(n2, modifiedQuickTimes, "Quick-Insertion Sort")
graphics.allGraphics(n1, n2, insertionTimes, mergeTimes, modifiedMergeTimes, quickTimes, modifiedQuickTimes)