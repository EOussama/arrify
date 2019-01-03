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

    arrayList.data = (int *) malloc(0);
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
    arrayList->data = (int *) realloc(arrayList->data, sizeof(int) * arrayList->count);

    if (arrayList->data == NULL) 
    {
        free(arrayList);
        exit(1);
    }
    else 
    {
        // Adding the value to the array list.
        arrayList->data[arrayList->count - 1] = value;
    }
}

/**
 * Removes an entry from the array list.
 */
void removeArrayList_int(ArrayList_int *arrayList, int index)
{
    if (index < 0) 
    {
        index = 0;
    }
    else if (index >= arrayList->count)
    {
        index = arrayList->count - 1;
    }

    // Decrementing the count of the array list.
    arrayList->count--;

    // Removing the element at the given index.
    while(index++ < arrayList->count) 
    {
        arrayList->data[index - 1] = arrayList->data[index];
    }

    // Reallocating memory.
    arrayList->data = (int *) realloc(arrayList->data, sizeof(int) * (arrayList->count));

    if (arrayList->data == NULL) 
    {
        free(arrayList);
        exit(1);
    }
}

/**
 * Gets an entry of a specific index from an array list.
 */
int getArrayList_int(ArrayList_int *arrayList, int index) 
{
    if (index < 0) 
    {
        index = 0;
    }
    else if (index >= arrayList->count)
    {
        index = arrayList->count - 1;
    }

    return arrayList->data[index];
}

/**
 * Clears the an array list.
 */
void clearArrayList_int(ArrayList_int *arrayList) 
{
    arrayList->data = (int *) realloc(arrayList->data, 0);
    arrayList->count = 0;
}
