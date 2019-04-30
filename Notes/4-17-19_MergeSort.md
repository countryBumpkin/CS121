# Merge Sort Code #

    void Mergesort(int a[], int first, int last){
      int middle;

      if(first < last){
        middle = (first + last)/2;
        Mergesort(a, first, middle);
        Mergesort(a, middle + 1, last);
        Merge(a, first, middle, middle + 1, last);
      }
    }

    void Merge(aType a[], int firstLeft, int lastLeft, int firstRight, int lastRight){
        aType tempArray[MAX_ARRAY];
        int  index = firstLeft;
        int  firstSave = firstLeft;

        cout << "Merge::firstLeft:  " << firstLeft   << endl;
        cout << "Merge::lastLeft:   " << lastLeft    << endl;
        cout << "Merge::firstRight: " << firstRight  << endl;
        cout << "Merge::lastRight:  " << lastRight   << endl;

        //  Merge segments (array subsets)
        while( (firstLeft <= lastLeft) && (firstRight <= lastRight) )
        {
            if( a[firstLeft] < a[firstRight] )
            {
               tempArray[index] = a[firstLeft];
               firstLeft++;
            }
            else
            {
               tempArray[index] = a[firstRight];
               firstRight++;
            }
            index++;
        }
            //  Copy remainder of left array into tempArray
        while( firstLeft <= lastLeft )
        {
            tempArray[index] = a[firstLeft];
            firstLeft++;
            index++;
        }

            //  Copy remainder of right array into tempArray
        while( firstRight <= lastRight )
        {
            tempArray[index] = a[firstRight];
            firstRight++;
            index++;
        }

            //  Copy back into original array
        for( index = firstSave ; index <= lastRight ; index++ )
            a[index] = tempArray[index];
      }
    }
