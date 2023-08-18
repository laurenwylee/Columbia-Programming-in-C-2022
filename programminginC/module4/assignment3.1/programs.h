#include <stdio.h>

void shellsort(int v[], int n)

{

    int gap , i ,  j, temp;

    for(gap = n/2 ; gap > 0 ; gap /= 2)

        for(i = gap ; i < n ; ++i)

            for(j = i - gap ; j >= 0 && v[j] > v[j+gap] ; j -= gap)

           {

                temp = v[j];

                v[j] = v[j + gap];

                v[j + gap] = temp;

            }

}
// Shell sort selects two elements of the array that are a particular "gap" length 
// away from each other. Depending on the value of the elements, the function swaps those 
// elements to make the array closer to the ascending order we want to achieve.
// The function traverses the array, swapping elements the same gap length away to achieve
// closer to a sorted array. Once the array has been traversed with one partiular 
// gap length, the gap length because half of what it was and this process contnues again logn times.

// Test case: [4,3,6,1,5]

// gap = 2
// i=2
// j=0 --> the inner most for loop is not ran because v[0] is not greater than v[2]

// i=3
// j=1
// A swap occurs: [4,1,6,2,5]
// j=-1 --> inner most loop terminates because j is not >=0

// i = 4 --> the second loop will terminate in the next iteration
// j= 2
// A swap occurs: [4,1,5,2,6]

// gap = 1
// i = 1
// j = 0
// A swap occurs : [1,4,5,2,6]

// i=2
// j=1 --> the inner most for loop is not ran because v[0] is not greater than v[2]

// i=3
// j=2 
// A swap occurs: [1,4,2,5,6]

// j=1
// A swap occurs: [1,2,4,5,6]

// i=4 --> the second loop is terminated in the next iteration
// j=3 --> the inner most for loop is not ran because v[0] is not greater than v[2]
// the outer most loop terminates 

// result: [1,2,4,5,6]