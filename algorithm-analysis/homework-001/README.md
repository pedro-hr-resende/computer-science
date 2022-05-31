# First homework of algorithm analysis

<p align = "justify">
Implement insertion sort, merge sort, and random quick sort algorithms and compare execution times as the number of input elements increases. Then modify the merge sort and quick sort to use insertion sort when the problem is small.
</p>

# Results

<p align = "justify">
As we can see, insertion sort algorithm (Figure 1) presents a quadratic growth (n²), while merge sort and quick sort (Figures 2 and 3) present an approximately linear growth (n . log(n)). According to the literature, this is correct, since the insertion has an asymptotic limit O(n²) and the other two have an asymptotic limit O(n . log(n)).
</p>

<p align = "center">
  <img src = "https://github.com/pedro-hr-resende/computer-science/blob/main/algorithm-analysis/homework-001/graphics/insertionSort.png"/>
</p>

<p align = "center">
Figure 1 - Insertion sort graphic
</p>

<p align = "center">
  <img src = "https://github.com/pedro-hr-resende/computer-science/blob/main/algorithm-analysis/homework-001/graphics/mergeSort.png"/>
</p>

<p align = "center">
Figure 2 - Merge sort graphic
</p>

<p align = "center">
  <img src = "https://github.com/pedro-hr-resende/computer-science/blob/main/algorithm-analysis/homework-001/graphics/quickSort.png"/>
</p>

<p align = "center">
Figure 3 - Quick sort graphic
</p>

<p align = "justify">
When the merge sort and quick sort algorithms are modified (Figures 4 and 5), using insertion sort when the problem becomes small, we obtain a quadratic growth for both cases. This proves that altering the original algorithms doesn't produce a superior result in terms of input processing time. 
</p>

<p align = "center">
  <img src = "https://github.com/pedro-hr-resende/computer-science/blob/main/algorithm-analysis/homework-001/graphics/modifiedMergeSort.png"/>
</p>

<p align = "center">
Figure 4 - Modified merg sort (with insertion sort) graphic
</p>

<p align = "center">
  <img src = "https://github.com/pedro-hr-resende/computer-science/blob/main/algorithm-analysis/homework-001/graphics/modifiedQuickSort.png"/>
</p>

<p align = "center">
Figure 5 - Modified quick sort (with insertion sort) graphic
</p>
