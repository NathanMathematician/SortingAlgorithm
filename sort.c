/* Source description (Doxygen)========================================= */

/*!
    \file       sort.c
    \brief      Source file with sorting algorithm
    \details    Source file with sorting algorithm for numerical arrays
                All functions sort arrays in ascending order
    \author     NMathematician
    \version    1.0
    \date       2024 11 14 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "sort.h"

/* Functions =========================================================== */

//////// COMPARISON SORTS ////////

//Selection Sort Int Array

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

//Selection Sort Unsigned Int Array

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

//Selection Sort Float Array

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



//Merge Sort Int Array

void sortMergeInt8Array(int8Array *inputArray)
{
    int8_t *helperArray = (int8_t *)calloc(inputArray->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeInt16Array(int16Array *inputArray)
{
    int16_t *helperArray = (int16_t *)calloc(inputArray->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeInt32Array(int32Array *inputArray)
{
    int32_t *helperArray = (int32_t *)calloc(inputArray->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeInt64Array(int64Array *inputArray)
{
    int64_t *helperArray = (int64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

//Merge Sort Unsigned Int Array

void sortMergeUInt8Array(uint8Array *inputArray)
{
    uint8_t *helperArray = (uint8_t *) calloc(inputArray->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeUInt16Array(uint16Array *inputArray)
{
    uint16_t *helperArray = (uint16_t *) calloc(inputArray->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeUInt32Array(uint32Array *inputArray)
{
    uint32_t *helperArray = (uint32_t *) calloc(inputArray->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeUInt64Array(uint64Array *inputArray)
{
    uint64_t *helperArray = (uint64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

//Merge Sort Float Array

void sortMergeFloatArray(floatArray *inputArray)
{
    float *helperArray = (float *) calloc(inputArray->size, BYTESIZE_FLOAT);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}

void sortMergeDoubleArray(doubleArray *inputArray)
{
    double *helperArray = (double *) calloc(inputArray->size, BYTESIZE_DOUBLE);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    numberOfElements positionCounter;
    
    numberOfElements iRight;
    numberOfElements iEnd;
    numberOfElements leftCounter;
    numberOfElements rightCounter;
    numberOfElements internalCounter;

    //inputArray->array has the items to sort ; array helperArray is a work array
    
    //Each 1-element run in inputArray->array is already "sorted"

    //Make successively longer sorted runs of length equals to the successive powers of 2 until the whole array is sorted
    numberOfElements width = 1;
    while (width < inputArray->size)
    {
        //Array inputArray->array is full of runs of length width
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            /*
            Merge two runs: inputArray->array[positionCounter:iRight-1] and inputArray->array[iRight:iEnd] to helperArray

            or if (positionCounter+width >= inputArray->size)
            copy inputArray->array[positionCounter:inputArray->size-1] to helperArray
            */
            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
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
        // Now work array helperArray is full of runs of length 2*width
        
        width <<= 1;
        
        for (positionCounter = 0 ; positionCounter < inputArray->size ; positionCounter += 2 * width)
        {
            iRight = positionCounter + width;
            iEnd = iRight + width;
            if (iRight > inputArray->size)
            {
                iRight = inputArray->size;
            }

            if (iEnd > inputArray->size)
            {
                iEnd = inputArray->size;
            }

            leftCounter = positionCounter;
            rightCounter = iRight;
            //While there are elements in the left or right runs
            for (internalCounter = positionCounter ; internalCounter < iEnd ; internalCounter++)
            {
                //If left run head exists and is <= existing right run head
                if (leftCounter < iRight && (rightCounter >= iEnd || helperArray[leftCounter] <= helperArray[rightCounter]))
                {
                    inputArray->array[internalCounter] = helperArray[leftCounter];
                    leftCounter = leftCounter + 1;
                }
                else
                {
                    inputArray->array[internalCounter] = helperArray[rightCounter];
                    rightCounter = rightCounter + 1;    
                }
            }
        }
        // Now array inputArray->array is full of runs of length 2*width

        width <<= 1;
    }
}



//Heap Sort Int

void sortHeapInt8Array(int8Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    int8_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapInt16Array(int16Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    int16_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapInt32Array(int32Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    int32_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapInt64Array(int64Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    int64_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

//Heap Sort Unsigned Int Array

void sortHeapUInt8Array(uint8Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    uint8_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapUInt16Array(uint16Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    uint16_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapUInt32Array(uint32Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    uint32_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapUInt64Array(uint64Array *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    uint64_t helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

//Heap Sort Float Array

void sortHeapFloatArray(floatArray *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    float helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}

void sortHeapDoubleArray(doubleArray *inputArray)
{
    numberOfElements heapSize = inputArray->size;
    numberOfElements i = heapSize >> 1;
    numberOfElements parent;
    numberOfElements child;
    double helper;

    //Loops until the array is sorted
    while (heapSize != 0)
    {
        if (i > 0)
        {//First stage - Sorting the heap
            //Save its index to i
            i--;

            //Save parent value to helper
            helper = inputArray->array[i];
        }
        else
        {//Second stage - Extracting elements in-place
            //Make the new heap smaller
            heapSize--;

            if (heapSize == 0)
            {//If the heap is empty, exit the main loop
                break;
            }

            //Save last value (it will be overwritten)
            helper = inputArray->array[heapSize];

            //Save largest value at the end of the array
            inputArray->array[heapSize] = inputArray->array[0];
        }

        //Start pushing down helper from parent
        parent = i;

        //Parent's left child
        child = i << 1;
        child++;

        //Sift operation - pushing the value of helper down the heap
        while (child < heapSize)
        {
            if (child + 1 < heapSize  &&  inputArray->array[child + 1] > inputArray->array[child])
            {//Choose the largest child
                child++;
            }

            if (inputArray->array[child] > helper)
            {//If any child is bigger than the parent
                //Move the largest child up
                inputArray->array[parent] = inputArray->array[child];

                //Move parent pointer to this child
                parent = child;

                //Find the next child
                child = parent << 1;
                child++;
            }
            else
            {//Else, helper found its place
                break;
            }
        }

        //Save helper in the heap
        inputArray->array[parent] = helper;
    }
}



//////// NON-COMPARISON SORTS ////////

//Radix Sort Int Array

void sortRadixLSBInt8Array(int8Array *inputArray)
{
    int8_t *helperArray = (int8_t *) calloc(inputArray->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBInt16Array(int16Array *inputArray)
{
    int16_t *helperArray = (int16_t *) calloc(inputArray->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBInt32Array(int32Array *inputArray)
{
    int32_t *helperArray = (int32_t *) calloc(inputArray->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBInt64Array(int64Array *inputArray)
{
    int64_t *helperArray = (int64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

//Radix Sort Unsigned Int

void sortRadixLSBUInt8Array(uint8Array *inputArray)
{
    uint8_t *helperArray = (uint8_t *) calloc(inputArray->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBUInt16Array(uint16Array *inputArray)
{
    uint16_t *helperArray = (uint16_t *) calloc(inputArray->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBUInt32Array(uint32Array *inputArray)
{
    uint32_t *helperArray = (uint32_t *) calloc(inputArray->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

void sortRadixLSBUInt64Array(uint64Array *inputArray)
{
    uint64_t *helperArray = (uint64_t *) calloc(inputArray->size, BYTESIZE_INT64);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

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

    memcpy(inputArray->array, helperArray, inputArray->size);

    free(helperArray);
}

//Radix Sort Float Array

void sortRadixLSBFloatArray(floatArray *inputArray)
{
    float *helperArray = (float *) calloc(inputArray->size, BYTESIZE_FLOAT);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint32_t bitVerificator = 1;

    float currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if ((uint32_t) currentElement & bitVerificator)
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
        if ((uint32_t) currentElement & bitVerificator)
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

        if ((uint32_t) currentElement & bitVerificator)
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

            if ((uint32_t) currentElement & bitVerificator)
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

            if ((uint32_t) currentElement & bitVerificator)
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

            if ((uint32_t) currentElement & bitVerificator)
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

            if ((uint32_t) currentElement & bitVerificator)
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
    
    memcpy(inputArray->array, helperArray, inputArray->size * BYTESIZE_FLOAT);

    free(helperArray);
}

void sortRadixLSBDoubleArray(doubleArray *inputArray)
{
    double *helperArray = (double *) calloc(inputArray->size, BYTESIZE_DOUBLE);

    //Memory allocation verification
    if (helperArray == NULL)
    {
        exit(EXIT_FAILURE);
    }

    const numberOfElements MAX_INDEX = inputArray->size - 1;

    numberOfElements bucket0Counter = 0;
    numberOfElements bucket1Position = MAX_INDEX;


    uint64_t bitVerificator = 1;

    double currentElement;

    numberOfElements inputCounter = 0;
    for (inputCounter = 0 ; inputCounter < inputArray->size ; inputCounter++)
    {
        currentElement = inputArray->array[inputCounter];

        if ((uint64_t) currentElement & bitVerificator)
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
        if ((uint64_t) currentElement & bitVerificator)
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

        if ((uint64_t) currentElement & bitVerificator)
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

            if ((uint64_t) currentElement & bitVerificator)
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

            if ((uint64_t) currentElement & bitVerificator)
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

            if ((uint64_t) currentElement & bitVerificator)
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

            if ((uint64_t) currentElement & bitVerificator)
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
    
    memcpy(inputArray->array, helperArray, inputArray->size * BYTESIZE_DOUBLE);

    free(helperArray);
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









