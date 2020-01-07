# Sorting #
1. Why Sort?
2. What are some common sorting algorithms?

## Why Sort? ##
So we can search for stuff efficiently based on the pattern of organization.

## Common Sorting Algorithms ##
- Linear search (aka "Brute Force" Search)
  * searches every element in the data structure starting with the first element
- Binary search
  * starts in the center of the data and if the value we are searching for is less than the middle, go left, else go right
- Hash tables/Dictionaries
  * uses a hash value generated from the data we are searching for to find the element
- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort
- Merge Sort
  * big files

#### Linear Search ####
Terribly inefficient... *O*(n)

    for(int i = 0; i < arr_size; i++){
      if(arr[i] == val) return i;
    }

    return -1;

#### Binary Search ####
Not too bad... *O*(log n)

    int BinarySearch(int A[], int arr_size){
      int mid, low= 0; high = nA -1;

      while(low <= high){
        mid = (low+high)/2;

        if(val > A[mid]) low = mid + 1;
        else if(val < A[mid]) high = mid - 1;
        else return mid;

      }

      return -1;
    }


    // Recursive Version

    int BinarySearchR(int A[], int lo, int hi, int val){
      if(hi > lo){
        int m = (lo + hi)/2;

        if(A[m] == val) return m;
        else if(A[m] > val) return BinarySearchR(A, lo, m-1, val);
        else return BinarySearchR(A, m+1, hi, val);
      }
    }


#### Hash Tables/Dictionaries ####

#### Bubble Sort ####
Iterate throughout the array examining adjacent pairs aof elements. If necessary, swap them to put them in the desired order (Brick Sort).
*O*(n^2)

#### Insertion Sort ####
iterate through the array placing the ith element with respect to the i - 1 previous elements.
*O*(n^2)

#### Selection Sort ####
Iterate through the array putting the ith smallest element in the ith location.
*O*(n^2)

Given an array A with N items

  1. Loop over each element (i)
  2. Put the smallest first (ith location) each iteration

    void SelectionSort(aType A[], int nA){
      int iSmallest;

      for(int i = 0; i < nA; i++){
        iSmallest = IndexOfSmallest(A, i, nA-1); // Finds the index of the smallest element in the list
        Swap(A[i], A[iSmallest]);
      }
    }

#### Quick Sort ####
Partition the list in to smaller lists such that every element in the left partition is less than or equal to the right partition. Repeat Quicksort process on the partitions - frequently done using recursion.

#### Merge Sort ###
Useful for sorting very large amounts of data.
*O*(n log n)

1. Split the file into smaller files
2. Sort the smaller files
3. Merge the sorted files
