/* Source description (Doxygen)========================================= */

/*!
    \file       sort.c
    \brief      Source file with sorting algorithm
    \details    Source file with sorting algorithm for numerical arrays
    \author     NMathematician
    \version    1.0
    \date       2024 11 14
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "sort.h"

/* Functions =========================================================== */

//Selection Sort Int

void sortSelectionInt8Array(int8Array *inputArray)
{
    int8_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionInt16Array(int16Array *inputArray)
{
    int16_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionInt32Array(int32Array *inputArray)
{
    int32_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionInt64Array(int64Array *inputArray)
{
    int64_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

//Selection Sort Unsigned

void sortSelectionUInt8Array(uint8Array *inputArray)
{
    uint8_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionUInt16Array(uint16Array *inputArray)
{
    uint16_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionUInt32Array(uint32Array *inputArray)
{
    uint32_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionUInt64Array(uint64Array *inputArray)
{
    uint64_t helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

//Selection Sort Float

void sortSelectionFloatArray(floatArray *inputArray)
{
    float helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

void sortSelectionDoubleArray(doubleArray *inputArray)
{
    double helper = 0;

    numberOfElements counterInput = 0;
    numberOfElements counterSorted = 0;

    numberOfElements minimumIndex;
    for (counterSorted = 0 ; counterSorted < inputArray->size - 1 ; counterSorted++)
    {
        //Initialize the minimum to the current index
        minimumIndex = counterSorted;

        for (counterInput = counterSorted + 1 ; counterInput < inputArray->size ; counterInput++)
        {
            //Search for the minimum over the remaining elements
            if (inputArray->array[counterInput] < inputArray->array[minimumIndex])
            {
                minimumIndex = counterInput;
            }
        }

        //Switch the variable
        if (minimumIndex != counterSorted)
        {
            helper = inputArray->array[counterSorted];
            inputArray->array[counterSorted] = inputArray->array[minimumIndex];
            inputArray->array[minimumIndex] = helper;
        }
    }
}

//Radix Sort Int

void sortRadixLSBInt8Array(int8Array *inputArray)
{
    int8_t *helperArray = (int8_t *) calloc(inputArray->size, BYTESIZE_INT8);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint8_t bitVerificator = 1;

    int8_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT8)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBInt16Array(int16Array *inputArray)
{
    int16_t *helperArray = (int16_t *) calloc(inputArray->size, BYTESIZE_INT16);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint16_t bitVerificator = 1;

    int16_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT16)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBInt32Array(int32Array *inputArray)
{
    int32_t *helperArray = (int32_t *) calloc(inputArray->size, BYTESIZE_INT32);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint32_t bitVerificator = 1;

    int32_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT32)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBInt64Array(int64Array *inputArray)
{
    int64_t *helperArray = (int64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint64_t bitVerificator = 1;

    int64_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT64)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

//Radix Sort Unsigned Int

void sortRadixLSBUInt8Array(uint8Array *inputArray)
{
    uint8_t *helperArray = (uint8_t *) calloc(inputArray->size, BYTESIZE_INT8);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint8_t bitVerificator = 1;

    uint8_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT8)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBUInt16Array(uint16Array *inputArray)
{
    uint16_t *helperArray = (uint16_t *) calloc(inputArray->size, BYTESIZE_INT16);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint16_t bitVerificator = 1;

    uint16_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT16)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBUInt32Array(uint32Array *inputArray)
{
    uint32_t *helperArray = (uint32_t *) calloc(inputArray->size, BYTESIZE_INT32);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint32_t bitVerificator = 1;

    uint32_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT32)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}

void sortRadixLSBUInt64Array(uint64Array *inputArray)
{
    uint64_t *helperArray = (uint64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint64_t bitVerificator = 1;

    uint64_t currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if (currentElement & bitVerificator)
        {
            helperArray[bucket1Position] = currentElement;
            bucket1Position--;
        }
        else
        {
            helperArray[bucket0Counter] = currentElement;
            bucket0Counter++;
        }
    }

    bitVerificator <<= 1;

    numberOfElements helperBucket0Counter = 0;
    numberOfElements helperBucket1Position = MAX_INDEX;
    
    numberOfElements helperCounter = 0;
    
    //////// From helperArray to inputArray ////////

    helperBucket0Counter = 0;
    helperBucket1Position = MAX_INDEX;

    helperCounter = 0;
    //Reads bucket 0 in ascending order
    for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
    {
        currentElement = helperArray[helperCounter];
        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    //Reads bucket 1 in desceding order
    for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
    {
        currentElement = helperArray[helperCounter];

        if (currentElement & bitVerificator)
        {
            inputArray->array[helperBucket1Position] = currentElement;
            helperBucket1Position--;
        }
        else
        {
            inputArray->array[helperBucket0Counter] = currentElement;
            helperBucket0Counter++;
        }
    }

    while(bitVerificator < MOST_SIGNIFICANT_BIT_UINT64)
    {
        bitVerificator <<= 1;
        
        //////// From inputArray to helperArray ////////

        bucket0Counter = 0;
        bucket1Position = MAX_INDEX;

        inputCounter = 0;
        //Reads bucket 0 in ascending order
        for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        //Reads bucket 1 in desceding order
        for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
        {
            currentElement = inputArray->array[inputCounter];

            if (currentElement & bitVerificator)
            {
                helperArray[bucket1Position] = currentElement;
                bucket1Position--;
            }
            else
            {
                helperArray[bucket0Counter] = currentElement;
                bucket0Counter++;
            }
        }

        bitVerificator <<= 1;

        //////// From helperArray to inputArray ////////

        helperBucket0Counter = 0;
        helperBucket1Position = MAX_INDEX;

        helperCounter = 0;
        //Reads bucket 0 in ascending order
        for (helperCounter = 0 ; helperCounter < bucket0Counter ; helperCounter++)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }

        //Reads bucket 1 in descending order
        for (helperCounter = MAX_INDEX ; helperCounter >= bucket0Counter ; helperCounter--)
        {
            currentElement = helperArray[helperCounter];

            if (currentElement & bitVerificator)
            {
                inputArray->array[helperBucket1Position] = currentElement;
                helperBucket1Position--;
            }
            else
            {
                inputArray->array[helperBucket0Counter] = currentElement;
                helperBucket0Counter++;
            }
        }
    }

    helperCounter = 0;
    for (inputCounter = 0 ; inputCounter < helperBucket0Counter ; inputCounter++)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    for (inputCounter = MAX_INDEX ; inputCounter >= helperBucket0Counter ; inputCounter--)
    {
        helperArray[helperCounter] = inputArray->array[inputCounter];
        helperCounter++;
    }

    inputArray->array = helperArray;
}



//Merge Sort Int

//void sortMergeInt8Array(int8Array *inputArray, int8Array *arraySorted)
//{
//    int8_t helper = 0;
//    int8_t *helperArray = calloc(inputArray->size, BYTESIZE_INT8);
//
//    numberOfElements positionCounter = 0;
//    for (positionCounter = 0 ; positionCounter < inputArray->size / 2 ; positionCounter += 2)
//    {
//        if (inputArray->array[positionCounter] > inputArray->array[positionCounter + 1])
//        {
//            helper = inputArray->array[positionCounter];
//            inputArray->array[positionCounter] = inputArray->array[positionCounter + 1];
//            inputArray->array[positionCounter + 1] = helper;
//        }
//    }
//
//    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
//    {
//        helperArray[positionCounter] = inputArray->array[positionCounter];
//    }
//
//    while (counterLeft < subListLeft->size && counterRight < subListRight->size)
//    {
//        if (subListLeft[counterLeft] > subListRight[counterRight])
//        {
//            mergedList[positionCounter] = subListRight[counterRight];
//            counterRight++;
//            positionCounter++;
//        }
//        else
//        {
//            mergedList[positionCounter] = subListLeft[counterLeft];
//            counterLeft++;
//            positionCounter++;
//        }
//    }
//
//    while (counterLeft < subListLeft->size)
//    {
//        mergedList[positionCounter] = subListLeft[counterLeft];
//        counterLeft++;
//        positionCounter++;
//    }
//
//    while (counterRight < subListRight->size)
//    {
//        mergedList[positionCounter] = subListRight[counterRight];
//        counterRight++;
//        positionCounter++;
//    }
//}

void sortMergeInt8Array(int8Array *inputArray)
{//Merge can be optimized by merge continuously instead of copying the array
    int8_t *helperArray = calloc(inputArray->size, BYTESIZE_INT8);
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    // array inputArray->array[] has the items to sort; array helperArray[] is a work array
    
    // Each 1-element run in inputArray->array is already "sorted".
    // Make successively longer sorted runs of length 2, 4, 8, 16... until the whole array is sorted.
    numberOfElements width;
    for (width = 1 ; width < inputArray->size ; width = 2 * width)
    {
        // Array inputArray->array is full of runs of length width.
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter = positionCounter + 2 * width)
        {
            if (positionCounter+width < inputArray->size)
            {//This can be optimized by calculating the value only one time an doing the
            //Comparison only with an if
                iRight = positionCounter+width;
            }
            else
            {
                iRight = inputArray->size;
            }

            if (positionCounter + 2*width < inputArray->size)
            {
                iEnd = positionCounter + 2*width;
            }
            else
            {
                iEnd = inputArray->size;
            }
            // Merge two runs: inputArray->array[positionCounter:positionCounter+width-1] and inputArray->array[positionCounter+width:positionCounter+2*width-1] to helperArray[]
            // or copy inputArray->array[positionCounter:inputArray->size-1] to helperArray[] ( if (positionCounter+width >= inputArray->size) )
            leftCounter = positionCounter;
            rightCounter = iRight;
            // While there are elements in the left or right runs...
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                // If left run head exists and is <= existing right run head.
                if (leftCounter < iRight && (rightCounter >= iEnd || inputArray->array[leftCounter] <= inputArray->array[rightCounter]))
                {
                    helperArray[internalCounter] = inputArray->array[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    helperArray[internalCounter] = inputArray->array[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now work array helperArray is full of runs of length 2*width.
        // Copy array helperArray to array inputArray->array for the next iteration.
        // A more efficient implementation would swap the roles of inputArray->array and helperArray.
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
        {
            inputArray->array[positionCounter] = helperArray[positionCounter];
        }
        // Now array inputArray->array is full of runs of length 2*width.
    }
}



//Heap Sort Int

void sortHeapInt8Array(int8Array *inputArray)
{  
    unsigned int n = inputArray->size;
    unsigned int i = n/2;
    unsigned int parent;
    unsigned int child;  
    int t;  
  
    for (;;) { /* Loops until arr is sorted */  
        if (i > 0)
        { /* First stage - Sorting the heap */  
            i--;           /* Save its index to i */  
            t = inputArray->array[i];    /* Save parent value to t */  
        }
        else
        {     /* Second stage - Extracting elements in-place */  
            n--;           /* Make the new heap smaller */  
            if (n == 0) return; /* When the heap is empty, we are done */  
            t = inputArray->array[n];    /* Save last value (it will be overwritten) */  
            inputArray->array[n] = inputArray->array[0]; /* Save largest value at the end of arr */  
        }  
  
        parent = i; /* We will start pushing down t from parent */  
        child = i*2 + 1; /* parent's left child */  
  
        /* Sift operation - pushing the value of t down the heap */  
        while (child < n)
        {  
            if (child + 1 < n  &&  inputArray->array[child + 1] > inputArray->array[child])
            {  
                child++; /* Choose the largest child */  
            }  
            if (inputArray->array[child] > t)
            { /* If any child is bigger than the parent */  
                inputArray->array[parent] = inputArray->array[child]; /* Move the largest child up */  
                parent = child; /* Move parent pointer to this child */  
                child = parent*2 + 1; /* Find the next child */  
            }
            else
            {  
                break; /* t's place is found */  
            }  
        }  
        inputArray->array[parent] = t; /* We save t in the heap */  
    }
} 



//Counting Sort Unsigned

void sortCountingInt8Array(int8Array *inputArray, int8Array *arraySorted)
{
    uint32_t helperArray[UINT8_NUMBER_OF_VALUES] = {0};
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[(uint8_t) inputArray->array[positionCounter]]++;
    }

    initializeInt8Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = UINT8_NUMBER_OF_VALUES / 2ULL ; positionCounter < UINT8_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int8_t) positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }

    sortCounter = inputArray->size - 1;

    for (positionCounter = UINT8_NUMBER_OF_VALUES / 2ULL - 1ULL ; positionCounter < UINT8_NUMBER_OF_VALUES / 2ULL ; positionCounter--)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int8_t) positionCounter;
            multiplicityCounter++;
            sortCounter--;
        }
    }
}

void sortCountingInt16Array(int16Array *inputArray, int16Array *arraySorted)
{
    uint32_t helperArray[UINT16_NUMBER_OF_VALUES] = {0};
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[(uint16_t) inputArray->array[positionCounter]]++;
    }

    initializeInt16Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = UINT16_NUMBER_OF_VALUES / 2ULL ; positionCounter < UINT16_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int16_t) positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }

    sortCounter = inputArray->size - 1;

    for (positionCounter = UINT16_NUMBER_OF_VALUES / 2ULL - 1ULL ; positionCounter < UINT16_NUMBER_OF_VALUES / 2ULL ; positionCounter--)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int16_t) positionCounter;
            multiplicityCounter++;
            sortCounter--;
        }
    }
}

void sortCountingInt32Array(int32Array *inputArray, int32Array *arraySorted)
{
    uint8_t *helperArray = (uint8_t *) malloc(UINT32_NUMBER_OF_VALUES);
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[(uint32_t) inputArray->array[positionCounter]]++;
    }

    initializeInt32Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = UINT32_NUMBER_OF_VALUES / 2ULL ; positionCounter < UINT32_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int32_t) positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }

    sortCounter = inputArray->size - 1;

    for (positionCounter = UINT32_NUMBER_OF_VALUES / 2ULL - 1ULL ; positionCounter < UINT32_NUMBER_OF_VALUES / 2ULL ; positionCounter--)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = (int32_t) positionCounter;
            multiplicityCounter++;
            sortCounter--;
        }
    }
}

//Counting Sort Unsigned

void sortCountingUInt8Array(uint8Array *inputArray, uint8Array *arraySorted)
{
    uint32_t helperArray[UINT8_NUMBER_OF_VALUES] = {0};
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[inputArray->array[positionCounter]]++;
    }

    initializeUInt8Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = 0 ; positionCounter < UINT8_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }
}

void sortCountingUInt16Array(uint16Array *inputArray, uint16Array *arraySorted)
{
    uint32_t helperArray[UINT16_NUMBER_OF_VALUES] = {0};
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[inputArray->array[positionCounter]]++;
    }

    initializeUInt16Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = 0 ; positionCounter < UINT16_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }
}

void sortCountingUInt32Array(uint32Array *inputArray, uint32Array *arraySorted)
{
    uint8_t *helperArray = (uint8_t *) malloc(UINT32_NUMBER_OF_VALUES);
    
    numberOfElements positionCounter = 0;
    for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter++)
    {
        helperArray[inputArray->array[positionCounter]]++;
    }

    initializeUInt32Array(&(inputArray->size), arraySorted);

    numberOfElements sortCounter = 0;
    numberOfElements multiplicityCounter = 0;

    for (positionCounter = 0 ; positionCounter < UINT32_NUMBER_OF_VALUES ; positionCounter++)
    {
        multiplicityCounter = 0;
        while(multiplicityCounter < helperArray[positionCounter])
        {
            arraySorted->array[sortCounter] = positionCounter;
            multiplicityCounter++;
            sortCounter++;
        }
    }
}








