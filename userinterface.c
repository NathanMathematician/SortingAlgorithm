/* Source description (Doxygen)========================================= */

/*!
    \file       userinterface.c
    \brief      Source file with user interface to use the program functions
    \details    Source file with menu and indication on how to use the program
                
    \author     NMathematician
    \version    1.0
    \date       2024 11 14 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "userinterface.h"

/* Functions =========================================================== */

void UIprincipal(int argumentCount, char **argumentValues)
{
    if (argumentCount == 1)
    {
        printf("Hello ! Welcome to ArrayProcessing !");
        printf("\nWhat do you want to do?");
        printf("\n1.Input an array");
        printf("\n2.Sort an array");
        printf("\n3.Convert an array");
        printf("\n4.Some calculation\n");

        uint8_t choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 4 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                UIinputArray();
                break;
            case 2:
                UIsortArray();
                break;
            case 3:
                UIconvertArray();
                break;
            case 4:
                UIcalculation();
                break;
            default:
                break;
        }
    }
    else
    {

    }
}

void UIinputArray()
{
    int8Array arrayInput8;
    int16Array arrayInput16;
    int32Array arrayInput32;
    int64Array arrayInput64;
            
    uint8Array arrayInput8U;
    uint16Array arrayInput16U;
    uint32Array arrayInput32U;
    uint64Array arrayInput64U;
            
    floatArray arrayInputFLT;
    doubleArray arrayInputDBL;

    printf("What type of array ?");
    printf("\n1.Integer array");
    printf("\n2.Unsigned array");
    printf("\n3.Floating point array\n");
    
    uint8_t choiceValue = 0;
    readUInt8(&choiceValue);

    while (choiceValue > 3 || choiceValue == 0)
    {
        printf("\nIncorrect value. Retry.\n");
        readUInt8(&choiceValue);
    }

    switch (choiceValue)
    {
        case 1:
            printf("Byte size of elements ?");
            printf("\n1. 1 byte (8 bits)");
            printf("\n2. 2 bytes (16 bits)");
            printf("\n3. 4 bytes (32 bits)");
            printf("\n4. 8 bytes (64 bits)\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    readInt8Array(&arrayInput8);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeInt8Array(&arrayInput8);
                            break;
                        case 2:
                            writeTXTInt8Array(&arrayInput8);
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    readInt16Array(&arrayInput16);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeInt16Array(&arrayInput16);
                            break;
                        case 2:
                            writeTXTInt16Array(&arrayInput16);
                            break;
                        default:
                            break;
                    }
                    break;
                case 3:
                    readInt32Array(&arrayInput32);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeInt32Array(&arrayInput32);
                            break;
                        case 2:
                            writeTXTInt32Array(&arrayInput32);
                            break;
                        default:
                            break;
                    }
                    break;
                case 4:
                    readInt64Array(&arrayInput64);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeInt64Array(&arrayInput64);
                            break;
                        case 2:
                            writeTXTInt64Array(&arrayInput64);
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
            break;
        case 2:
            printf("Byte size of elements ?");
            printf("\n1. 1 byte (8 bits)");
            printf("\n2. 2 bytes (16 bits)");
            printf("\n3. 4 bytes (32 bits)");
            printf("\n4. 8 bytes (64 bits)\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    readUInt8Array(&arrayInput8U);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeUInt8Array(&arrayInput8U);
                            break;
                        case 2:
                            writeTXTUInt8Array(&arrayInput8U);
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    readUInt16Array(&arrayInput16U);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeUInt16Array(&arrayInput16U);
                            break;
                        case 2:
                            writeTXTUInt16Array(&arrayInput16U);
                            break;
                        default:
                            break;
                    }
                    break;
                case 3:
                    readUInt32Array(&arrayInput32U);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeUInt32Array(&arrayInput32U);
                            break;
                        case 2:
                            writeTXTUInt32Array(&arrayInput32U);
                            break;
                        default:
                            break;
                    }
                    break;
                case 4:
                    readUInt64Array(&arrayInput64U);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeUInt64Array(&arrayInput64U);
                            break;
                        case 2:
                            writeTXTUInt64Array(&arrayInput64U);
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
            break;
        case 3:
            printf("Byte size of elements ?");
            printf("\n1. float");
            printf("\n2. double\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 2 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    readFloatArray(&arrayInputFLT);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeFloatArray(&arrayInputFLT);
                            break;
                        case 2:
                            writeTXTFloatArray(&arrayInputFLT);
                            break;
                        default:
                            break;
                    }
                    break;
                case 2:
                    readDoubleArray(&arrayInputDBL);

                    printf("Save under which format ?");
                    printf("\n1.Binary");
                    printf("\n2.TXT\n");

                    choiceValue = 0;
                    readUInt8(&choiceValue);
        
                    while (choiceValue > 2 || choiceValue == 0)
                    {
                        printf("\nIncorrect value. Retry.\n");
                        readUInt8(&choiceValue);
                    }
        
                    switch (choiceValue)
                    {
                        case 1:
                            writeDoubleArray(&arrayInputDBL);
                            break;
                        case 2:
                            writeTXTDoubleArray(&arrayInputDBL);
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}

void UIsortArray()
{
    printf("What is the file name? (with its extension)");

    char *filename = calloc(FILENAME_MAX, BYTESIZE_INT8);
    readFileName(filename);

    char *fileExtension = strchr(filename, '.');
    
    uint8_t choiceValue = 0;

    if (strncmp(fileExtension, ".txt", 6U) == 0)
    {
        FILE *arrayFile = NULL;

        errno = 0;
        
        //Open a new file for reading, fails if the file does not exist
        arrayFile = fopen(filename, "r");
        if (NULL == arrayFile)
        {
            /* Handle error */
            fprintf(stderr, "Error in UIsortArray (fopen) : %s.\n", strerror(errno));
        }
        else
        {
            /* Read from file */
            //Read the array type code
            uint32_t arrayType = 0;
            char *bufferString = calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);

            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in UIsortArray (fgets) : %s\nCannot read arrayType from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Helps to check the input
            char *endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            arrayType = strtoul(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                fclose(arrayFile);

                //Identify the array type with the code
                if (arrayType & IS_INT)
                {
                    if (arrayType & IS_8_BITS)
                    {
                        int8Array arrayOpened;
                        int8Array arraySorted;
                
                        openTXTInt8Array(filename, &arrayOpened);
                        
                        if (verifyInt8ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 5 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionInt8Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeInt8Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapInt8Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBInt8Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingInt8Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }

                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeInt8Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTInt8Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_16_BITS)
                    {
                        int16Array arrayOpened;
                        int16Array arraySorted;
                
                        openInt16Array(filename, &arrayOpened);
                        
                        if (verifyInt16ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 5 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionInt16Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeInt16Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapInt16Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBInt16Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingInt16Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeInt16Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTInt16Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_32_BITS)
                    {
                        int32Array arrayOpened;
                        int32Array arraySorted;
                
                        openInt32Array(filename, &arrayOpened);
                        
                        if (verifyInt32ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionInt32Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeInt32Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapInt32Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBInt32Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingInt32Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeInt32Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTInt32Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        int64Array arrayOpened;
                
                        openInt64Array(filename, &arrayOpened);
                        
                        if (verifyInt64ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionInt64Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeInt64Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapInt64Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBInt64Array(&arrayOpened);
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeInt64Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTInt64Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
                else if (arrayType & IS_UINT)
                {
                    if (arrayType & IS_8_BITS)
                    {
                        uint8Array arrayOpened;
                        uint8Array arraySorted;
                
                        openUInt8Array(filename, &arrayOpened);
                        
                        if (verifyUInt8ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 5 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionUInt8Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeUInt8Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapUInt8Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBUInt8Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingUInt8Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt8Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTUInt8Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_16_BITS)
                    {
                        uint16Array arrayOpened;
                        uint16Array arraySorted;
                
                        openUInt16Array(filename, &arrayOpened);
                        
                        if (verifyUInt16ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 5 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionUInt16Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeUInt16Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapUInt16Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBUInt16Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingUInt16Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt16Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTUInt16Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_32_BITS)
                    {
                        uint32Array arrayOpened;
                        uint32Array arraySorted;
                
                        openUInt32Array(filename, &arrayOpened);
                        
                        if (verifyUInt32ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionUInt32Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeUInt32Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapUInt32Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBUInt32Array(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingUInt32Array(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt32Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTUInt32Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        uint64Array arrayOpened;
                
                        openUInt64Array(filename, &arrayOpened);
                        
                        if (verifyUInt64ArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionUInt64Array(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeUInt64Array(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapUInt64Array(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBUInt64Array(&arrayOpened);
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt64Array(&arrayOpened);
                                break;
                            case 2:
                                writeTXTUInt64Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
                else if (arrayType & IS_FLT)
                {
                    if (arrayType & IS_32_BITS)
                    {
                        floatArray arrayOpened;
                        floatArray arraySorted;
                
                        openFloatArray(filename, &arrayOpened);
                        
                        if (verifyFloatArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                            printf("\n5.Counting Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionFloatArray(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeFloatArray(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapFloatArray(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBFloatArray(&arrayOpened);
                                    break;
                                case 5:
                                    sortCountingFloatArray(&arrayOpened, &arraySorted);
                                    arrayOpened.array = arraySorted.array;
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeFloatArray(&arrayOpened);
                                break;
                            case 2:
                                writeTXTFloatArray(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        doubleArray arrayOpened;
                
                        openDoubleArray(filename, &arrayOpened);
                        
                        if (verifyDoubleArraySize(&arrayOpened))
                        {
                            printf("Which sorting algorithm to use ?");
                            printf("\n1.Selection Sort");
                            printf("\n2.Merge Sort");
                            printf("\n3.Heapsort");
                            printf("\n4.Radix Sort\n");
                        
                            choiceValue = 0;
                            readUInt8(&choiceValue);
                    
                            while (choiceValue > 4 || choiceValue == 0)
                            {
                                printf("\nIncorrect value. Retry.\n");
                                readUInt8(&choiceValue);
                            }
                    
                            switch (choiceValue)
                            {
                                case 1:
                                    sortSelectionDoubleArray(&arrayOpened);
                                    break;
                                case 2:
                                    sortMergeDoubleArray(&arrayOpened);
                                    break;
                                case 3:
                                    sortHeapDoubleArray(&arrayOpened);
                                    break;
                                case 4:
                                    sortRadixLSBDoubleArray(&arrayOpened);
                                    break;
                                default:
                                    break;
                            }
                        }
                
                        printf("Save under which format ?");
                        printf("\n1.Binary");
                        printf("\n2.TXT\n");
                
                        choiceValue = 0;
                        readUInt8(&choiceValue);
                
                        while (choiceValue > 2 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }
                
                        switch (choiceValue)
                        {
                            case 1:
                                writeDoubleArray(&arrayOpened);
                                break;
                            case 2:
                                writeTXTDoubleArray(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
            }
        }
    }
    else if (strncmp(fileExtension, ".i8arr", 8U) == 0)
    {
        int8Array arrayOpened;
        int8Array arraySorted;

        openInt8Array(filename, &arrayOpened);
        
                        
        if (verifyInt8ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 5 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionInt8Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeInt8Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapInt8Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBInt8Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingInt8Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt8Array(&arrayOpened);
                break;
            case 2:
                writeTXTInt8Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i16arr", 9U) == 0)
    {
        int16Array arrayOpened;
        int16Array arraySorted;

        openInt16Array(filename, &arrayOpened);
                        
        if (verifyInt16ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 5 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionInt16Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeInt16Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapInt16Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBInt16Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingInt16Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt16Array(&arrayOpened);
                break;
            case 2:
                writeTXTInt16Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i32arr", 9U) == 0)
    {
        int32Array arrayOpened;
        int32Array arraySorted;

        openInt32Array(filename, &arrayOpened);
                        
        if (verifyInt32ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionInt32Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeInt32Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapInt32Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBInt32Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingInt32Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt32Array(&arrayOpened);
                break;
            case 2:
                writeTXTInt32Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i64arr", 9U) == 0)
    {
        int64Array arrayOpened;

        openInt64Array(filename, &arrayOpened);
                        
        if (verifyInt64ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionInt64Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeInt64Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapInt64Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBInt64Array(&arrayOpened);
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt64Array(&arrayOpened);
                break;
            case 2:
                writeTXTInt64Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui8arr", 9U) == 0)
    {
        uint8Array arrayOpened;
        uint8Array arraySorted;

        openUInt8Array(filename, &arrayOpened);
                        
        if (verifyUInt8ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 5 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionUInt8Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeUInt8Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapUInt8Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBUInt8Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingUInt8Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt8Array(&arrayOpened);
                break;
            case 2:
                writeTXTUInt8Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui16arr", 10U) == 0)
    {
        uint16Array arrayOpened;
        uint16Array arraySorted;

        openUInt16Array(filename, &arrayOpened);
                        
        if (verifyUInt16ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 5 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionUInt16Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeUInt16Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapUInt16Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBUInt16Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingUInt16Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt16Array(&arrayOpened);
                break;
            case 2:
                writeTXTUInt16Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui32arr", 10U) == 0)
    {
        uint32Array arrayOpened;
        uint32Array arraySorted;

        openUInt32Array(filename, &arrayOpened);
                        
        if (verifyUInt32ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionUInt32Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeUInt32Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapUInt32Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBUInt32Array(&arrayOpened);
                    break;
                case 5:
                    sortCountingUInt32Array(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt32Array(&arrayOpened);
                break;
            case 2:
                writeTXTUInt32Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui64arr", 10U) == 0)
    {
        uint64Array arrayOpened;

        openUInt64Array(filename, &arrayOpened);
                        
        if (verifyUInt64ArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionUInt64Array(&arrayOpened);
                    break;
                case 2:
                    sortMergeUInt64Array(&arrayOpened);
                    break;
                case 3:
                    sortHeapUInt64Array(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBUInt64Array(&arrayOpened);
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt64Array(&arrayOpened);
                break;
            case 2:
                writeTXTUInt64Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".fltarr", 9U) == 0)
    {
        floatArray arrayOpened;
        floatArray arraySorted;

        openFloatArray(filename, &arrayOpened);
                        
        if (verifyFloatArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
            printf("\n5.Counting Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionFloatArray(&arrayOpened);
                    break;
                case 2:
                    sortMergeFloatArray(&arrayOpened);
                    break;
                case 3:
                    sortHeapFloatArray(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBFloatArray(&arrayOpened);
                    break;
                case 5:
                    sortCountingFloatArray(&arrayOpened, &arraySorted);
                    arrayOpened.array = arraySorted.array;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeFloatArray(&arrayOpened);
                break;
            case 2:
                writeTXTFloatArray(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".dblarr", 9U) == 0)
    {
        doubleArray arrayOpened;

        openDoubleArray(filename, &arrayOpened);
                        
        if (verifyDoubleArraySize(&arrayOpened))
        {
            printf("Which sorting algorithm to use ?");
            printf("\n1.Selection Sort");
            printf("\n2.Merge Sort");
            printf("\n3.Heapsort");
            printf("\n4.Radix Sort\n");
        
            choiceValue = 0;
            readUInt8(&choiceValue);

            while (choiceValue > 4 || choiceValue == 0)
            {
                printf("\nIncorrect value. Retry.\n");
                readUInt8(&choiceValue);
            }

            switch (choiceValue)
            {
                case 1:
                    sortSelectionDoubleArray(&arrayOpened);
                    break;
                case 2:
                    sortMergeDoubleArray(&arrayOpened);
                    break;
                case 3:
                    sortHeapDoubleArray(&arrayOpened);
                    break;
                case 4:
                    sortRadixLSBDoubleArray(&arrayOpened);
                    break;
                default:
                    break;
            }
        }

        printf("Save under which format ?");
        printf("\n1.Binary");
        printf("\n2.TXT\n");

        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 2 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeDoubleArray(&arrayOpened);
                break;
            case 2:
                writeTXTDoubleArray(&arrayOpened);
                break;
            default:
                break;
        }
    }
}

void UIconvertArray()
{
    printf("What is the file name? (with its extension)");

    char *filename = calloc(FILENAME_MAX, BYTESIZE_INT8);
    readFileName(filename);

    char *fileExtension = strchr(filename, '.');
    
    uint8_t choiceValue = 0;

    if (strncmp(fileExtension, ".txt", 5U) == 0)
    {
        FILE *arrayFile = NULL;

        errno = 0;
        
        //Open a new file for reading, fails if the file does not exist
        arrayFile = fopen(filename, "r");
        if (NULL == arrayFile)
        {
            /* Handle error */
            fprintf(stderr, "Error in UIsortArray (fopen) : %s.\n", strerror(errno));
        }
        else
        {
            /* Read from file */
            //Read the array type code
            uint32_t arrayType = 0;
            char *bufferString = calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);

            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in UIsortArray (fgets) : %s\nCannot read arrayType from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Helps to check the input
            char *endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            arrayType = strtoul(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in UIsortArray (strtoul) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                fclose(arrayFile);

                printf("Convert to which type ?");
                printf("\n1.Binary");
                printf("\n2.CSV");
                printf("\n3.TXT\n");

                //Identify the array type with the code
                if (arrayType & IS_INT)
                {
                    if (arrayType & IS_8_BITS)
                    {
                        int8Array arrayOpened;
                
                        openTXTInt8Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeInt8Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTInt8Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_16_BITS)
                    {
                        int16Array arrayOpened;
                
                        openTXTInt16Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeInt16Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTInt16Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_32_BITS)
                    {
                        int32Array arrayOpened;
                
                        openTXTInt32Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeInt32Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTInt32Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        int64Array arrayOpened;
                
                        openTXTInt64Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeInt64Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTInt64Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
                else if (arrayType & IS_UINT)
                {
                    if (arrayType & IS_8_BITS)
                    {
                        uint8Array arrayOpened;
                
                        openTXTUInt8Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt8Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTUInt8Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_16_BITS)
                    {
                        uint16Array arrayOpened;
                
                        openTXTUInt16Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt16Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTUInt16Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else if (arrayType & IS_32_BITS)
                    {
                        uint32Array arrayOpened;
                
                        openTXTUInt32Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt32Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTUInt32Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        uint64Array arrayOpened;
                
                        openTXTUInt64Array(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeUInt64Array(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTUInt64Array(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
                else
                {
                    if (arrayType & IS_32_BITS)
                    {
                        floatArray arrayOpened;
                
                        openTXTFloatArray(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeFloatArray(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTFloatArray(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                    else
                    {
                        doubleArray arrayOpened;
                
                        openTXTDoubleArray(filename, &arrayOpened);

                    
                        choiceValue = 0;
                        readUInt8(&choiceValue);

                        while (choiceValue > 3 || choiceValue == 0)
                        {
                            printf("\nIncorrect value. Retry.\n");
                            readUInt8(&choiceValue);
                        }

                        switch (choiceValue)
                        {
                            case 1:
                                writeDoubleArray(&arrayOpened);
                                break;
                            case 2:

                                break;
                            case 3:
                                writeTXTDoubleArray(&arrayOpened);
                                break;
                            default:
                                break;
                        }
                    }
                }
            }
        }
    }
    else if (strncmp(fileExtension, ".i8arr", 8U) == 0)
    {
        int8Array arrayOpened;
        openInt8Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt8Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTInt8Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i16arr", 9U) == 0)
    {
        int16Array arrayOpened;
        openInt16Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt16Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTInt16Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i32arr", 9U) == 0)
    {
        int32Array arrayOpened;
        openInt32Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt32Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTInt32Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".i64arr", 9U) == 0)
    {
        int64Array arrayOpened;
        openInt64Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeInt64Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTInt64Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui8arr", 9U) == 0)
    {
        uint8Array arrayOpened;
        openUInt8Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt8Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTUInt8Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui16arr", 10U) == 0)
    {
        uint16Array arrayOpened;
        openUInt16Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt16Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTUInt16Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui32arr", 10U) == 0)
    {
        uint32Array arrayOpened;
        openUInt32Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt32Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTUInt32Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".ui64arr", 10U) == 0)
    {
        uint64Array arrayOpened;
        openUInt64Array(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeUInt64Array(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTUInt64Array(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".fltarr", 9U) == 0)
    {
        floatArray arrayOpened;
        openFloatArray(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeFloatArray(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTFloatArray(&arrayOpened);
                break;
            default:
                break;
        }
    }
    else if (strncmp(fileExtension, ".dblarr", 9U) == 0)
    {
        doubleArray arrayOpened;
        openDoubleArray(filename, &arrayOpened);

        printf("Convert to which type ?");
        printf("\n1.Binary");
        printf("\n2.CSV");
        printf("\n3.TXT\n");
    
        choiceValue = 0;
        readUInt8(&choiceValue);

        while (choiceValue > 3 || choiceValue == 0)
        {
            printf("\nIncorrect value. Retry.\n");
            readUInt8(&choiceValue);
        }

        switch (choiceValue)
        {
            case 1:
                writeDoubleArray(&arrayOpened);
                break;
            case 2:
                
                break;
            case 3:
                writeTXTDoubleArray(&arrayOpened);
                break;
            default:
                break;
        }
    }
}

void UIcalculation()
{

}






