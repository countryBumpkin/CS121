# Quick Sort #
_**How Does it Work?**_
* Chooses a pivot value, moves values less than the pivot value to the left and values greater than the pivot value to the right. Applies Quick Sort to the two halves recursively until done.

_**How to Choose the Pivot Value?**_
* Many ways to choose the pivot value. Using the first value is probably the easiest.

*O*(N log N)

## Code ##
    int Pivot( aType a[], int first, int last )
    {
        int  p = first;
        aType pivot = a[first];

        for( int i = first+1 ; i <= last ; i++ ) {
            if( a[i] <= pivot ) {
                p++;
                Swap( a[i], a[p] );
            }
        }

        Swap( a[p], a[first] );

        return p;
    }

    void Quicksort( aType a[], int first, int last )
    {
        int pivot;

        if( first < last ) {
            pivot = Pivot( a, first, last );
            Quicksort( a, first, pivot-1 );
            Quicksort( a, pivot+1, last );
        }
    }
