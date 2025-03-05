-- QuickSort.hs

{-
CECS 342 Assignment 1
Deanna Solis
student ID: 028309162

Tools, Compilers, and Editors Used:
- editor: VScode
- gcc to compile c through the terminal 
- ghc to compile haskell code through the terminal 

Online references:
- for merge_sort.c: https://www.geeksforgeeks.org/merge-sort/
- for quick_sort.c: https://www.geeksforgeeks.org/quick-sort-algorithm/
- for QuickSort.hs: https://wiki.c2.com/?QuickSortInHaskell
                    https://literateprograms.org/quicksort__haskell_.html                   
- for MergeSort.hs: https://brianginsburg.com/posts/mergesort/
-}

-- picks first element as the pivot, recursively sorts elements less than and greater than the pivot
module QuickSort (qsort) where
    -- Ord a for the elements of the list must be orderable
    -- [a] -> [a] takes a list of type a and returns a sorted list of the same type
    qsort :: Ord a => [a] -> [a]
    qsort [] = [] -- if imput is empty [] retuen an empty list
    qsort(x:xs) = qsort[y | y <- xs, y < x] ++ [x] ++  qsort[y | y <- xs, y >= x]
    -- takes a non empty list (x:xs) where,
    -- x is the pivot (aka first element)
    -- xs us the remaining list (everyhting but x)
    -- [x] places the pivot x in the correct position in the final sorted list
    -- qsort [y | y <- xs, y >= x], creates a new list of element y that are <= x

