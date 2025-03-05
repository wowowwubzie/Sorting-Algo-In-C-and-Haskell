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
- chatgpt for debugging 
-}
-- MergeSort.hs
-- merges two sorted list inti one
module MergeSort (msort) where 
merge :: Ord a => [a] -> [a] -> [a] -- takes two sorted list Ord a, returns one merged sorted list
-- if one of the list is empty, return the other list as it's 
--already sorted
merge xs [] = xs 
merge [] ys = ys
-- compares the first element (x) of the first list
-- with the first element (y) of the second list
merge (x:xs) (y:ys)
-- if x <= y, prepend x to the merged list and recursively merge the rest
  | x <= y    = x : merge xs (y:ys)
-- if y < x, prepend y to the merged list and recursively merge.
  | otherwise = y : merge (x:xs) ys


-- Merge sort implementation
-- splits list into halves, merges the sorted halves 
msort :: Ord a => [a] -> [a] -- takes the list of elements Ord a, returns sorted version of that list
msort []  = [] -- empty lis is already sorted
msort [x] = [x] -- a single element lis is already sorted 
-- Splits the list into two halves using splitAt
-- calls msort on both halves to sort them
-- merges the sorted halves using merge
msort xs  = merge (msort halfI) (msort halfII)
  where (halfI, halfII) = splitAt (length xs `div` 2) xs

