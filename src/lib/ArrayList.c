/**
 * Arrify's array list (ArrayList).
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../inc/ArrayList.h"

/**
 * Creates a new array list.
 */
ArrayList_int newArrayList_int() 
{
    ArrayList_int arrayList;

    arrayList.array = NULL;
    arrayList.count = 0;

    return arrayList;
}

/**
 * Adds an entry to the array list.
 */
void addArrayList_int(ArrayList_int *arrayList, int value)
{
    // Incrementing the count of the array list.
    arrayList->count++;

    // Allocating enough memory.
    arrayList->array = realloc(arrayList->array, sizeof(int) * (arrayList->count));

    // Adding the value to the array list.
    arrayList->array[arrayList->count - 1] = value;
}

short removeArrayList_int(ArrayList_int *arrayList, int index)
{
    if (index < 0 && index >= arrayList->count) 
    {
        return 0;
    }

    // Decrementing the count of the array list.
    arrayList->count--;

    // Removing the element at the given index.
    while(index++ < arrayList->count) 
    {
        arrayList->array[index - 1] = arrayList->array[index];
    }

    // Reallocating memory.
    arrayList->array = realloc(arrayList->array, sizeof(int) * (arrayList->count));

    return 1;
}
