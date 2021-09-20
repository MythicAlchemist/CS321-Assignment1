#include <stdio.h>
#include <stdlib.h>
/*
   Authors: Thomas McCoy and Jens Rasmussen

   Assignment 1 insertion sort that follows 
   certain set parameters that we can use 
   as a guide for developing assebly language
   that corresponds to our implementation in C.
*/

//  gcc insert_sort.c -o insert_sort.exe -Wall -Werror

/*
    Shift right: This procedure takes three parameters, the address of an 
    array of ints, the index of the final element in the array, and a position 
    in the array. It overwrites the final element, shifting intermediate 
    elements to the right, leaving a whole at the position.
*/
void shift_right(int *addr, int pos, int final) 
{
    
}
/*
    Find sorted position: This procedure takes three parameters, the address 
    of an array of sorted ints, a value, and the index of the last element in 
    the array.  It searches the array for the sorted position of the value and 
    returns that index.
*/
int find_sorted_pos(int *addr, int val, int final) 
{
    int idx;

    return idx;
}
/*
    Insert sorted position: This procedure takes three parameters, the address 
    of a partially-sorted array of ints, the index of the first item in the 
    array that is not in sorted position, and the index of the last element of 
    the array.  It moves the first unsorted element into its sorted position, 
    shifting elements to the right as necessary such that the entire element 
    is in sorted order and no data is lost.
*/
void insert_sorted_pos(int *addr, int pos, int final) 
{

}
/*
    Insertion sort: This procedure takes two parameters, the address of an 
    array of ints and the number of elements in the array.  It sorts the array 
    using the insertion sort algorithm.
*/
void insertion_sort(int *addr, int length) 
{

}
/*
    Creates an array at address addr of length elements containing length 
    unique integers in reverse sorted order
*/
int *fill(int *addr, int length)
{


}

int main(int argc, char* argv[])
{
    int *p = 0;
    int length = 100;

    if(argc >= 2) {
        length = atoi(argv[1]);
    }

    //p = fill(p, length);
    //insertion_sort(p, length);

    printf("%d", length);

    return 0;
}

