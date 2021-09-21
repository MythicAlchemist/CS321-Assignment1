#include <stdio.h>
#include <stdlib.h>
/*
   Authors: Thomas McCoy and Jens Rasmussen

   Assignment 1 insertion sort that follows 
   certain set parameters that we can use 
   as a guide for developing assebly language
   that corresponds to our implementation in C.
*/

//  gcc insert_sort.c -o insert_sort.exe -Wall -Werror -ggdb

/*
    Shift right: This procedure takes three parameters, the address of an 
    array of ints, the index of the final element in the array, and a position 
    in the array. It overwrites the final element, shifting intermediate 
    elements to the right, leaving a hole at the position.
*/
void shift_right(int *addr, int pos, int final) 
{
    int i;

    for (i = final - 1; i >= pos; i--) {
        addr[i + 1] = addr[i];
    }
}

/*
    Find sorted position: This procedure takes three parameters, the address 
    of an array of sorted ints, a value, and the index of the last element in 
    the array.  It searches the array for the sorted position of the value and 
    returns that index.
*/
int find_sorted_pos(int *addr, int val, int final) 
{
    int i;

    for (i = 0; i < final; i++) {
        if (addr[i] >= val) {
            break;
        }
    }

    return i;
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
    int v = addr[pos];
    int p = find_sorted_pos(addr, v, final);
    shift_right(addr, p, pos);
    addr[p] = v;
}

/*
    Insertion sort: This procedure takes two parameters, the address of an 
    array of ints and the number of elements in the array.  It sorts the array 
    using the insertion sort algorithm.
*/
void insertion_sort(int *addr, int length) 
{
    int i;
    
    for (i = 1; i < length; i++) {
        insert_sorted_pos(addr, i, length - 1);
    }
}

/*
    Creates an array at address addr of length elements containing length 
    unique integers in reverse sorted order
*/
int *fill(int *addr, int length)
{
    int i;

    for (i = 0; i < length; i++) {
        addr[i] = length - i;
    }
    return addr;
}

int main(int argc, char* argv[])
{
    int i;
    int *p;
    int length;

    if(argc >= 2) {
        length = atoi(argv[1]);
    }

    int addr[length];
    p = addr;

    p = fill(p, length);

    for (i = 0; i < length; i++) {
        printf("%d ", p[i]);
    }
    
    insertion_sort(p, length);

    // printf("\nLength: %d\n", length);
    
    for (i = 0; i < length; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}

