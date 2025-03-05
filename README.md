# Sorting Algorthims in C and Haskell

## Author
**Deanna Solis**

## Overview
This project implements **Merge Sort** and **Quick Sort** in both **C** and **Haskell**. The program generates pseudo-random numbers, sorts them using the implemented algorithms, and verifies correctness through test cases.

## Languages Used
- **C** (GCC Compiler)
- **Haskell** (GHC Compiler)

## Files and Structure

### C Implementation:
- 📄 `main.c` - Entry point for testing sorting algorithms in C.
- 📄 `merge_sort.c` - Implementation of Merge Sort in C.
- 📄 `merge_sort.h` - Header file for Merge Sort.
- 📄 `quick_sort.c` - Implementation of Quick Sort in C.
- 📄 `quick_sort.h` - Header file for Quick Sort.

### Haskell Implementation:
- 📄 `Main.hs` - Entry point for testing sorting algorithms in Haskell.
- 📄 `MergeSort.hs` - Implementation of Merge Sort in Haskell.
- 📄 `QuickSort.hs` - Implementation of Quick Sort in Haskell.

## Compilation and Execution

### C:
To compile the C program, use:
```sh
gcc -o sorting main.c merge_sort.c quick_sort.c
```
Run the executable:
```sh
./sorting -> output_1_c.txt
```

### Haskell:
To compile and run the Haskell program, use:
```sh
ghc -o sorting Main.hs MergeSort.hs QuickSort.hs 
```
Run the executable:
```sh
./sorting -> output_1_hs.txt
```

## Sorting Algorithms Implemented

### Merge Sort:
- **C:** Uses recursion to divide the array into halves, sorts them, and merges the results.
- **Haskell:** Implements Merge Sort recursively using list operations.

### Quick Sort:
- **C:** Uses a pivot-based partitioning method and recursion.
- **Haskell:** Uses list comprehension for partitioning and recursive sorting.

## References
- 📖 [Merge Sort in C - GeeksforGeeks](https://www.geeksforgeeks.org/merge-sort/)
- 📖 [Quick Sort in C - GeeksforGeeks](https://www.geeksforgeeks.org/quick-sort-algorithm/)
- 📖 [Quick Sort in Haskell - Wiki C2](https://wiki.c2.com/?QuickSortInHaskell)
- 📖 [Merge Sort in Haskell - Brian Ginsburg](https://brianginsburg.com/posts/mergesort/)


## License
📝 This project is for educational purposes only and does not require a license 
