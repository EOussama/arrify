/**
 * Arrify's array list (ArrayList).
 */

#include <stdio.h>
#include <stdlib.h>
#include "./../inc/ArrayList.h"

/**
 * Creates a new array list.
 */
ArrayList newArrayList()
{
    ArrayList arrayList;

    arrayList.data = (int *)malloc(0);
    arrayList.count = 0;

    return arrayList;
}

/**
 * Adds an entry to the array list at a specific index.
 */
void insertArrayList(ArrayList *arrayList, int value, int index)
{
    if (index >= 0 && index <= arrayList->count)
    {
        // Incrementing the count of the array list.
        arrayList->count++;

        // Allocating enough memory.
        arrayList->data = (int *)realloc(arrayList->data, sizeof(int) * arrayList->count);

        if (arrayList->data == NULL)
        {
            free(arrayList);
            exit(1);
        }
        else
        {
            // Clearing the index for the new value by moving other
            // values to upper indexes.
            for (int i = arrayList->count - 1; i >= index; i--)
            {
                arrayList->data[i + 1] = arrayList->data[i];
            }

            // Adding the value to the array list.
            arrayList->data[index] = value;
        }
    }
}

/**
 * Adds an entry to the array list.
 */
void pushArrayList(ArrayList *arrayList, int value)
{
    // Incrementing the count of the array list.
    arrayList->count++;

    // Allocating enough memory.
    arrayList->data = (int *)realloc(arrayList->data, sizeof(int) * arrayList->count);

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
 * Removes an entry from the array list at a specific index.
 */
void removeArrayList(ArrayList *arrayList, int index)
{
    if (index >= 0 && index < arrayList->count)
    {
        // Decrementing the count of the array list.
        arrayList->count--;

        // Removing the element at the given index.
        while (index++ < arrayList->count)
        {
            arrayList->data[index - 1] = arrayList->data[index];
        }

        // Reallocating memory.
        arrayList->data = (int *)realloc(arrayList->data, sizeof(int) * (arrayList->count));

        if (arrayList->data == NULL)
        {
            free(arrayList);
            exit(1);
        }
    }
}

/**
 * Removes the last entry from an array list.
 */
void popArrayList(ArrayList *arrayList)
{
    if (arrayList->count > 1)
    {
        // Decrementing the count of the array list.
        arrayList->count--;

        // Reallocating memory.
        arrayList->data = (int *)realloc(arrayList->data, sizeof(int) * (arrayList->count));

        if (arrayList->data == NULL)
        {
            free(arrayList);
            exit(1);
        }
    }
    else if (arrayList->count == 1)
    {
        clearArrayList(arrayList);
    }
}

/**
 * Gets an entry of a specific index from an array list.
 */
int getArrayList(ArrayList *arrayList, int index)
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
void clearArrayList(ArrayList *arrayList)
{
    arrayList->data = (int *)realloc(arrayList->data, 0);
    arrayList->count = 0;
}
