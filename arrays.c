/* Source description (Doxygen)========================================= */

/*!
    \file       arrays.c
    \brief      Source file with basic array operations
    \details    Source file for array operations such as initialization, saving on hard drive, opening array files, finding the maximum and minimum of a given array and computing arithmetic, geometric and harmonic mean (when possible)
    \author     NMathematician
    \version    1.0
    \date       2024 09 30 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "arrays.h"

/* Functions prototypes ================================================ */

//Initialize Int Array

inline void initializeInt8Array(const numberOfElements *arraySize, int8Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int8_t *) calloc(array->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeInt16Array(const numberOfElements *arraySize, int16Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int16_t *) calloc(array->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeInt32Array(const numberOfElements *arraySize, int32Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int32_t *) calloc(array->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeInt64Array(const numberOfElements *arraySize, int64Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int64_t *) calloc(array->size, BYTESIZE_INT64);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

//Initialize Unsigned Int Array

inline void initializeUInt8Array(const numberOfElements *arraySize, uint8Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint8_t *) calloc(array->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeUInt16Array(const numberOfElements *arraySize, uint16Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint16_t *) calloc(array->size, BYTESIZE_INT16);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeUInt32Array(const numberOfElements *arraySize, uint32Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint32_t *) calloc(array->size, BYTESIZE_INT32);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeUInt64Array(const numberOfElements *arraySize, uint64Array *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint64_t *) calloc(array->size, BYTESIZE_INT8);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

//Initialize Float Array

inline void initializeFloatArray(const numberOfElements *arraySize, floatArray *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (float *) calloc(array->size, BYTESIZE_FLOAT);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}

inline void initializeDoubleArray(const numberOfElements *arraySize, doubleArray *array)
{
    //Initialize the structure
    array->size = *arraySize;

    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (double *) calloc(array->size, BYTESIZE_DOUBLE);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }
}



//Print Int Array

void printInt8Array(int8Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %i", arrayToPrint->array[positionCounter]);
    }
}

void printInt16Array(int16Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %i", arrayToPrint->array[positionCounter]);
    }
}

void printInt32Array(int32Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %li", arrayToPrint->array[positionCounter]);
    }
}

void printInt64Array(int64Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %lli", arrayToPrint->array[positionCounter]);
    }
}

//Print Unsigned Int Array

void printUInt8Array(uint8Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %u", arrayToPrint->array[positionCounter]);
    }
}

void printUInt16Array(uint16Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %u", arrayToPrint->array[positionCounter]);
    }
}

void printUInt32Array(uint32Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %lu", arrayToPrint->array[positionCounter]);
    }
}

void printUInt64Array(uint64Array *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %llu", arrayToPrint->array[positionCounter]);
    }
}

//Print Float Array

void printFloatArray(floatArray *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %f", arrayToPrint->array[positionCounter]);
    }
}

void printDoubleArray(doubleArray *arrayToPrint)
{
    numberOfElements positionCounter;
    for (positionCounter = 0 ; positionCounter < arrayToPrint->size ; positionCounter++)
    {
        printf(" %lf", arrayToPrint->array[positionCounter]);
    }
}



//Read Int Array

void readInt8Array(int8Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeInt8Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readInt8(&(inputArray->array[positionCounter]));
    }
}

void readInt16Array(int16Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeInt16Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readInt16(&(inputArray->array[positionCounter]));
    }
}

void readInt32Array(int32Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeInt32Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readInt32(&(inputArray->array[positionCounter]));
    }
}

void readInt64Array(int64Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeInt64Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readInt64(&(inputArray->array[positionCounter]));
    }
}

//Read Unsigned Int Array

void readUInt8Array(uint8Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeUInt8Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readUInt8(&(inputArray->array[positionCounter]));
    }
}

void readUInt16Array(uint16Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeUInt16Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readUInt16(&(inputArray->array[positionCounter]));
    }
}

void readUInt32Array(uint32Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeUInt32Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readUInt32(&(inputArray->array[positionCounter]));
    }
}

void readUInt64Array(uint64Array *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeUInt64Array(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readUInt64(&(inputArray->array[positionCounter]));
    }
}

//Read Float Array

void readFloatArray(floatArray *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeFloatArray(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readFloat(&(inputArray->array[positionCounter]));
    }
}

void readDoubleArray(doubleArray *inputArray)
{
    printf("How many elements does the array have?\n");
    
    numberOfElements arraySize = 0;

    while (arraySize == 0)
    {
        printf("Size must be stricly greater than 0.\n");
        readUInt64(&arraySize);
    }

    initializeDoubleArray(&arraySize, inputArray);

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < arraySize ; positionCounter++)
    {
        printf("What is the value of element number %zu?\n", positionCounter + 1);
        readDouble(&(inputArray->array[positionCounter]));
    }
}



//Write Array as Binary File

//Write Int Array Binary File

void writeInt8Array(const int8Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT8))
    {
        fprintf(stderr, "Error in writeInt8Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".i8arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeInt8Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt8Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT8, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt8Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeInt16Array(const int16Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT16))
    {
        fprintf(stderr, "Error in writeInt16Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".i16arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeInt16Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt16Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT16, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt16Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeInt32Array(const int32Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT32))
    {
        fprintf(stderr, "Error in writeInt32Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".i32arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeInt32Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt32Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT32, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt32Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeInt64Array(const int64Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT64))
    {
        fprintf(stderr, "Error in writeInt64Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".i64arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeInt64Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt64Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT64, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeInt64Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Write Unsigned Int Array Binary File

void writeUInt8Array(const uint8Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT8))
    {
        fprintf(stderr, "Error in writeUInt8Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".ui8arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeUInt8Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt8Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT8, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt8Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeUInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeUInt16Array(const uint16Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT16))
    {
        fprintf(stderr, "Error in writeUInt16Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".ui16arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeUInt16Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt16Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT16, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt16Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeUInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeUInt32Array(const uint32Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT32))
    {
        fprintf(stderr, "Error in writeUInt32Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".ui32arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeUInt32Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt32Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT32, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt32Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeUInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeUInt64Array(const uint64Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT64))
    {
        fprintf(stderr, "Error in writeUInt64Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".ui64arr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeUInt64Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt64Array (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_INT64, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeUInt64Array (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeUInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Write Float Array Binary File

void writeFloatArray(const floatArray *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_FLOAT))
    {
        fprintf(stderr, "Error in writeFloatArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".fltarr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeFloatArray (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeFloatArray (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_FLOAT, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeFloatArray (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeFloatArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeDoubleArray(const doubleArray *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_DOUBLE))
    {
        fprintf(stderr, "Error in writeDoubleArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".dblarr", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "wb");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeDoubleArray (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write the size
        if(1 != fwrite(&(arrayToWrite->size), sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in writeDoubleArray (fwrite) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        if(fwrite(arrayToWrite->array, BYTESIZE_DOUBLE, arrayToWrite->size, arrayFile) != arrayToWrite->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeDoubleArray (fwrite) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully written!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeDoubleArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}



//Open Array as Binary File

//Open Int Array Binary

void openInt8Array(const char *filename, int8Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openInt8Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt8Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeInt8Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT8, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt8Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openInt16Array(const char *filename, int16Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openInt16Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt16Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeInt16Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT16, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt16Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openInt32Array(const char *filename, int32Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openInt32Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt32Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeInt32Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT32, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt32Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openInt64Array(const char *filename, int64Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openInt64Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt64Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeInt64Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT64, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openInt64Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Open Unsigned Int Array Binary File

void openUInt8Array(const char *filename, uint8Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openUInt8Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt8Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeUInt8Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT8, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt8Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openUInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openUInt16Array(const char *filename, uint16Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openUInt16Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt16Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeUInt16Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT16, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt16Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openUInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openUInt32Array(const char *filename, uint32Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openUInt32Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt32Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeUInt32Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT32, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt32Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openUInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openUInt64Array(const char *filename, uint64Array *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openUInt64Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt64Array (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeUInt64Array(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_INT64, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openUInt64Array (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openUInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Open Float Array Binary File

void openFloatArray(const char *filename, floatArray *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openFloatArray (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openFloatArray (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeFloatArray(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_FLOAT, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openFloatArray (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openFloatArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openDoubleArray(const char *filename, doubleArray *arrayOpened)
{
    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "rb");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openDoubleArray (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */
        //Read the size
        numberOfElements arraySize = 0;

        if(1 != fread(&arraySize, sizeof(numberOfElements), 1, arrayFile))
        {
            /* Handle error */
            fprintf(stderr, "Error in openDoubleArray (fread) : %s\nCannot read to arrayOpened->size from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Initialize array
        initializeDoubleArray(&arraySize, arrayOpened);

        //Read the array
        if(fread(arrayOpened->array, BYTESIZE_DOUBLE, arrayOpened->size, arrayFile) != arrayOpened->size)
        {
            /* Handle error */
            fprintf(stderr, "Error in openDoubleArray (fread) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
        else
        {
            printf("File successfully read!\n");
        }
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openDoubleArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}



//Write Array as TXT File

//Write Int Array TXT File

void writeTXTInt8Array(const int8Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT8))
    {
        fprintf(stderr, "Error in writeTXTInt8Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt8Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_INT | IS_8_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%i\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }

        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTInt16Array(const int16Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT16))
    {
        fprintf(stderr, "Error in writeTXTInt16Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt16Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_INT | IS_16_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt16Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%i\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt16Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTInt32Array(const int32Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT32))
    {
        fprintf(stderr, "Error in writeTXTInt32Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt32Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_INT | IS_32_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt32Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%li\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt32Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTInt64Array(const int64Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT64))
    {
        fprintf(stderr, "Error in writeTXTInt64Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt64Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_INT | IS_64_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt64Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%lli\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTInt64Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Write Unsigned Int Array TXT File

void writeTXTUInt8Array(const uint8Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT8))
    {
        fprintf(stderr, "Error in writeTXTUInt8Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt8Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_UINT | IS_8_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTUInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%u\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt8Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeUInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTUInt16Array(const uint16Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT16))
    {
        fprintf(stderr, "Error in writeTXTUInt16Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt16Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_UINT | IS_16_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTUInt16Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%u\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt16Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTUInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTUInt32Array(const uint32Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT32))
    {
        fprintf(stderr, "Error in writeTXTUInt32Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt32Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_UINT | IS_32_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTUInt32Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%lu\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt32Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTUInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTUInt64Array(const uint64Array *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_INT64))
    {
        fprintf(stderr, "Error in writeTXTUInt64Array : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt64Array (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_UINT | IS_64_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTUInt64Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%llu\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTUInt64Array (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTUInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Write Float Array TXT File

void writeTXTFloatArray(const floatArray *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_FLOAT))
    {
        fprintf(stderr, "Error in writeTXTFloatArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTFloatArray (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_FLT | IS_32_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTFloatArray (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%f\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTFloatArray (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTFloatArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void writeTXTDoubleArray(const doubleArray *arrayToWrite)
{
    //Size verification
    if (arrayToWrite->size > (SIZE_MAX / BYTESIZE_DOUBLE))
    {
        fprintf(stderr, "Error in writeTXTDoubleArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        int8_t success = 0;
        FILE *arrayFile = NULL;

        do
        {
            readFileName(filename);
            
            strncat(filename, ".txt", 10);

            errno = 0;
            
            //Open a new file for writing, fails if the file exists
            arrayFile = fopen(filename, "w");
            if (NULL == arrayFile)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTDoubleArray (fopen) : %s.\n", strerror(errno));
                printf("Try another name for the file.\n");
                success = 0;
            }
            else
            {
                success = 1;
            }
        }while(success != 1); //Repeat until the file is opened

        /* Write to file */
        //Write array type code
        if(fprintf(arrayFile, "%u\n", IS_FLT | IS_64_BITS) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTInt8Array (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the size
        if(fprintf(arrayFile, "%zu\n", arrayToWrite->size) == EOF)
        {
            /* Handle error */
            fprintf(stderr, "Error in writeTXTDoubleArray (fprintf) : %s\nCannot write arrayToWrite->size in arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Write the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0 ; arrayCounter < arrayToWrite->size ; arrayCounter++)
        {
            if(fprintf(arrayFile, "%lf\n", arrayToWrite->array[arrayCounter]) == EOF)
            {
                /* Handle error */
                fprintf(stderr, "Error in writeTXTDoubleArray (fprintf) : %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        
        printf("File successfully written!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in writeTXTDoubleArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}



//Open Array as TXT File

//Open Int Array TXT

void openTXTInt8Array(const char *filename, int8Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTInt8Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    int32_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTInt8Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeInt8Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtol(bufferString, &endptr, 10);

            if (rangeTest < INT8_MIN || rangeTest > INT8_MAX)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large. Enter a value between %i and %i.\n", INT8_MIN, INT8_MAX);
                fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = (int8_t) rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTInt16Array(const char *filename, int16Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTInt16Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    int64_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTInt16Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt16Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeInt16Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTInt16Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtol(bufferString, &endptr, 10);

            if (rangeTest < INT16_MIN || rangeTest > INT16_MAX)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large. Enter a value between %i and %i.\n", INT16_MIN, INT16_MAX);
                fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = (int16_t) rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTInt32Array(const char *filename, int32Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTInt32Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    int32_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTInt32Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt32Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeInt32Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTInt32Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtol(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTInt64Array(const char *filename, int64Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTInt64Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    int64_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTInt64Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt64Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeInt64Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTInt64Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtol(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Open Unsigned Int Array TXT File

void openTXTUInt8Array(const char *filename, uint8Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTUInt8Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    uint32_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTUInt8Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTUInt8Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeUInt8Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTUInt8Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtoul(bufferString, &endptr, 10);

            if (rangeTest > UINT8_MAX)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large. Enter a value between 0 and %i.\n", UINT8_MAX);
                fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt8Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = (uint8_t) rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTUInt8Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTUInt16Array(const char *filename, uint16Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTUInt16Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    uint32_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTUInt16Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTUInt16Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeUInt16Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTUInt16Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtoul(bufferString, &endptr, 10);

            if (rangeTest > UINT16_MAX)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large. Enter a value between 0 and %i.\n", UINT16_MAX);
                fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt16Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = (uint16_t) rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTUInt16Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTUInt32Array(const char *filename, uint32Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTUInt32Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    uint32_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTUInt32Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTUInt32Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeUInt32Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTUInt32Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtoul(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt32Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTUInt32Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTUInt64Array(const char *filename, uint64Array *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTUInt64Array (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    uint64_t rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTUInt64Array (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTUInt64Array (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeUInt64Array(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTUInt64Array (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtoull(bufferString, &endptr, 10);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTUInt64Array (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTUInt64Array (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

//Open Float Array TXT File

void openTXTFloatArray(const char *filename, floatArray *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTFloatArray (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    float rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTFloatArray (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTFloatArray (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeFloatArray(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, __FLT32X_DECIMAL_DIG__, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTFloatArray (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtof(bufferString, &endptr);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTFloatArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTFloatArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}

void openTXTDoubleArray(const char *filename, doubleArray *arrayOpened)
{
    char *bufferString = (char*) calloc(STRING_SIZE_BASE_10_UINT64, BYTESIZE_INT8);
    if (bufferString == NULL)
    {
        //Allocation verification
        fprintf(stderr, "Error in openTXTDoubleArray (calloc) : %s.\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    double rangeTest;

    FILE *arrayFile = NULL;

    errno = 0;
    
    //Open a new file for reading, fails if the file does not exist
    arrayFile = fopen(filename, "r");
    if (NULL == arrayFile)
    {
        /* Handle error */
        fprintf(stderr, "Error in openTXTDoubleArray (fopen) : %s.\n", strerror(errno));
    }
    else
    {
        /* Read from file */

        //Skip the array type code. The verification is done outside of the function
        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTInt8Array (fgets) : %s\nCannot read arrayType code from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Read the size
        numberOfElements arraySize = 0;

        if(fgets(bufferString, STRING_SIZE_BASE_10_UINT64, arrayFile) == NULL)
        {
            /* Handle error */
            fprintf(stderr, "Error in openTXTDoubleArray (fgets) : %s\nCannot read arraySize from arrayFile.\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        arraySize = strtoull(bufferString, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (endptr == bufferString)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            //Initialize array
            initializeDoubleArray(&arraySize, arrayOpened);
        }
        
        //Read the array
        numberOfElements arrayCounter;
        for (arrayCounter = 0; arrayCounter < arrayOpened->size ; arrayCounter++)
        {
            if(fgets(bufferString, __FLT32X_DECIMAL_DIG__, arrayFile) == NULL)
            {
                /* Handle error */
                fprintf(stderr, "Error in openTXTDoubleArray (fgets) : %s\nCannot read array element from arrayFile.\n", strerror(errno));
                exit(EXIT_FAILURE);
            }

            //Reset endptr
            endptr = NULL;

            //Reset error number
            errno = 0;

            //Convert input
            rangeTest = strtof(bufferString, &endptr);

            if (errno == ERANGE)
            {
                //If the number is too small or too large, loop
                printf("This number is too small or too large.\n");
                fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (endptr == bufferString)
            {
                //If no character was read, loop
                printf("No character was read, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else if (*endptr != '\0' && *endptr != '\n')
            {
                //If *endptr is neither end of string nor newline,
                //the *whole* input was not converted, loop
                printf("The whole input was not converted, enter a valid number.\n");
                fprintf(stderr, "Error in openTXTDoubleArray (strtol) : Format error in arrayFile\n");
                exit(EXIT_FAILURE);
            }
            else
            {
                arrayOpened->array[arrayCounter] = rangeTest;
            }
        }
            
        printf("File successfully read!\n");
        
        if (fclose(arrayFile) == EOF)
        {
            fprintf(stderr, "Error in openTXTDoubleArray (fclose) : %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
}



//Maximum in array

//Maximum Int Array

void maxInt8Array(const int8Array *arrayStruct, int8_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxInt16Array(const int16Array *arrayStruct, int16_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxInt32Array(const int32Array *arrayStruct, int32_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxInt64Array(const int64Array *arrayStruct, int64_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

//Maximum Unsigned Int Array

void maxUInt8Array(const uint8Array *arrayStruct, uint8_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxUInt16Array(const uint16Array *arrayStruct, uint16_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxUInt32Array(const uint32Array *arrayStruct, uint32_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxUInt64Array(const uint64Array *arrayStruct, uint64_t *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

//Maximum Float Array

void maxFloatArray(const floatArray *arrayStruct, float *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void maxDoubleArray(const doubleArray *arrayStruct, double *maximum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *maximum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*maximum < arrayStruct->array[positionCounter])
            {
                *maximum = arrayStruct->array[positionCounter];
            }
        }
    }
}



//Minimum in array

//Minimum Signed Int Array

void minInt8Array(const int8Array *arrayStruct, int8_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minInt16Array(const int16Array *arrayStruct, int16_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minInt32Array(const int32Array *arrayStruct, int32_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minInt64Array(const int64Array *arrayStruct, int64_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

//Minimum Unsigned Int Array

void minUInt8Array(const uint8Array *arrayStruct, uint8_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minUInt16Array(const uint16Array *arrayStruct, uint16_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minUInt32Array(const uint32Array *arrayStruct, uint32_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}

void minUInt64Array(const uint64Array *arrayStruct, uint64_t *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}


//Minimum Float Array

void minFloatArray(const floatArray *arrayStruct, float *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }

}

void minDoubleArray(const doubleArray *arrayStruct, double *minimum)
{
    if (arrayStruct->size == 0)
    {
        printf("You can't work with an empty array.\nProvides an array with at least one element.\n\n");
    }
    else
    {
        *minimum = arrayStruct->array[0];

        numberOfElements positionCounter = 0;
        for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            if (*minimum > arrayStruct->array[positionCounter])
            {
                *minimum = arrayStruct->array[positionCounter];
            }
        }
    }
}



//Arithmetic Mean Int Array

void meanArithmeticInt8Array(const int8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        for (numberOfElements positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticInt16Array(const int16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticInt32Array(const int32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticInt64Array(const int64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

//Arithmetic Mean Unsigned Int Array

void meanArithmeticUInt8Array(const uint8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticUInt16Array(const uint16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticUInt32Array(const uint32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticUInt64Array(const uint64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

//Arithmetic Mean Float Array

void meanArithmeticFloatArray(const floatArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.\n");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}

void meanArithmeticDoubleArray(const doubleArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Arithmetic mean is set to zero.");
    }
    else
    {
        numberOfElements positionCounter = 0;
        for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
        {
            *mean += (double) arrayStruct->array[positionCounter];
        }

        *mean /= (double) arrayStruct->size;
    }
}



//Geometric Mean Int Array

void meanGeometricInt8Array(const int8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int8_t minimum = 0;

        minInt8Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricInt16Array(const int16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int16_t minimum = 0;

        minInt16Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricInt32Array(const int32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int32_t minimum = 0;

        minInt32Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricInt64Array(const int64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int64_t minimum = 0;

        minInt64Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

//Geometric Mean Unsigned Int Array

void meanGeometricUInt8Array(const uint8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint8_t minimum = 0;

        minUInt8Array(arrayStruct, &minimum);

        if (minimum == 0)
        {
            printf("\nCannot work with zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricUInt16Array(const uint16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint16_t minimum = 0;

        minUInt16Array(arrayStruct, &minimum);

        if (minimum == 0)
        {
            printf("\nCannot work with zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricUInt32Array(const uint32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint32_t minimum = 0;

        minUInt32Array(arrayStruct, &minimum);

        if (minimum == 0)
        {
            printf("\nCannot work with zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricUInt64Array(const uint64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint64_t minimum = 0;

        minUInt64Array(arrayStruct, &minimum);

        if (minimum == 0)
        {
            printf("\nCannot work with zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

//Geometric Mean Float Array

void meanGeometricFloatArray(const floatArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        float minimum = 0.0;

        minFloatArray(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}

void meanGeometricDoubleArray(const doubleArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Geometric mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        double minimum = 0.0;

        minDoubleArray(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Geometric mean is set to zero.\n");
        }
        else
        {
            *mean = (double) arrayStruct->array[0];

            numberOfElements positionCounter = 0;
            for (positionCounter = 1 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean *= (double) arrayStruct->array[positionCounter];
            }

            //Computes the exponent
            double minusOne = -1.0;
            
            //Sets errno for verification
            errno = 0;
            
            double exponent = pow((double) arrayStruct->size, minusOne);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }

            //Sets errno for verification
            errno = 0;

            //Computes the geometric mean
            *mean = pow(*mean, exponent);
            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Geometric mean is set to zero.\n");
                *mean = 0.0;
            }
        }
    }
}



//Harmonic Mean Int Array

void meanHarmonicInt8Array(const int8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int8_t minimum = 0;

        minInt8Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicInt16Array(const int16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int16_t minimum = 0;

        minInt16Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicInt32Array(const int32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int32_t minimum = 0;

        minInt32Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicInt64Array(const int64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        int64_t minimum = 0;

        minInt64Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

//Harmonic Mean Unsigned Int Array

void meanHarmonicUInt8Array(const uint8Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint8_t minimum = 0;

        minUInt8Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicUInt16Array(const uint16Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint16_t minimum = 0;

        minUInt16Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicUInt32Array(const uint32Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint32_t minimum = 0;

        minUInt32Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicUInt64Array(const uint64Array *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        uint64_t minimum = 0;

        minUInt64Array(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

//Harmonic Mean Float Array

void meanHarmonicFloatArray(const floatArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        float minimum = 0;

        minFloatArray(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}

void meanHarmonicDoubleArray(const doubleArray *arrayStruct, double *mean)
{
    //Initialize the value of the mean
    *mean = 0.0;

    if (arrayStruct->size == 0)
    {
        printf("\nCannot work with an empty array. Harmonic mean is set to zero.\n");
    }
    else
    {
        //Initialize the minimum for verification
        double minimum = 0;

        minDoubleArray(arrayStruct, &minimum);

        if (minimum <= 0)
        {
            printf("\nCannot work with negative values and zeroes. Harmonic mean is set to zero.\n");
        }
        else
        {
            //Sets errno for verification
            errno = 0;

            //Exponent to compute the inverse
            double minusOne = -1.0;

            numberOfElements positionCounter = 0;
            for (positionCounter = 0 ; positionCounter < arrayStruct->size ; positionCounter++)
            {
                *mean += pow((double) arrayStruct->array[positionCounter], minusOne);
            }

            if (errno != 0)
            {
                printf("\nAn error occured. errno value : %i\n", errno);
                printf("Harmonic mean is set to zero.\n");
                *mean = 0.0;
            }
            else
            {
                //Sets errno for verification
                errno = 0;

                //Computes the harmonic mean
                *mean = pow(*mean, minusOne);
                if (errno != 0)
                {
                    printf("\nAn error occured. errno value : %i\n", errno);
                    printf("Harmonic mean is set to zero.\n");
                    *mean = 0.0;
                }

                *mean *= (double) arrayStruct->size;
            }
        }
    }
}
















