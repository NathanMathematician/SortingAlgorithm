/* Source description (Doxygen)========================================= */

/*!
    \file       arrays.h
    \brief      Source file with basic array operations
    \details    Source file for array operations such as initialization, saving on hard drive, opening array files, finding the maximum and minimum of a given array and computing arithmetic, geometric and harmonic mean (when possible)
    \author     NMathematician
    \version    1.0
    \date       2024 09 30
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "arrays.h"

/* Functions prototypes ================================================ */

//Initialize Signed Int Array

void initializeInt8Array(const numberOfElements *arraySize, int8Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int8_t *) malloc(sizeof(int8_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeInt16Array(const numberOfElements *arraySize, int16Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int16_t *) malloc(sizeof(int16_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeInt32Array(const numberOfElements *arraySize, int32Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int32_t *) malloc(sizeof(int32_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeInt64Array(const numberOfElements *arraySize, int64Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (int64_t *) malloc(sizeof(int64_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}


//Initialize Unsigned Int Array

void initializeUInt8Array(const numberOfElements *arraySize, uint8Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint8_t *) malloc(sizeof(uint8_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeUInt16Array(const numberOfElements *arraySize, uint16Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint16_t *) malloc(sizeof(uint16_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeUInt32Array(const numberOfElements *arraySize, uint32Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint32_t *) malloc(sizeof(uint32_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeUInt64Array(const numberOfElements *arraySize, uint64Array *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (uint64_t *) malloc(sizeof(uint64_t) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}


//Initialize Float Array

void initializeFloatArray(const numberOfElements *arraySize, floatArray *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (float *) malloc(sizeof(float) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}

void initializeDoubleArray(const numberOfElements *arraySize, doubleArray *array)
{
    //Allocate memory for the structure (according to CERT C Coding Standard)
    array->array = (double *) malloc(sizeof(double) * *arraySize);

    //Memory allocation verification
    if (array->array == NULL)
    {
        exit(EXIT_FAILURE);
    }

    //Initialize the structure
    array->size = *arraySize;

    numberOfElements positionCounter = 0;

    for (positionCounter = 0 ; positionCounter < *arraySize ; positionCounter++)
    {
        array->array[positionCounter] = 0;
    }
}


//Read Unsigned Int Array

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

//Write Signed Int Array Binary File

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
        int16_t success = 0;
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
        int32_t success = 0;
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
        int64_t success = 0;
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
        uint8_t success = 0;
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
        uint16_t success = 0;
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
        uint32_t success = 0;
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
        uint64_t success = 0;
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
    if (arrayToWrite->size > (SIZE_MAX / __SIZEOF_FLOAT__))
    {
        fprintf(stderr, "Error in writeFloatArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        float success = 0;
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
        if(fwrite(arrayToWrite->array, __SIZEOF_FLOAT__, arrayToWrite->size, arrayFile) != arrayToWrite->size)
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
    if (arrayToWrite->size > (SIZE_MAX / __SIZEOF_DOUBLE__))
    {
        fprintf(stderr, "Error in writeDoubleArray : array is too big to be written.\n");
    }
    else
    {
        printf("What is the file name? (31 characters MAX)\n");

        char filename[64] = {0};
        double success = 0;
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
        if(fwrite(arrayToWrite->array, __SIZEOF_DOUBLE__, arrayToWrite->size, arrayFile) != arrayToWrite->size)
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

//Open Signed Int Array Binary

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
        if(fread(arrayOpened->array, __SIZEOF_FLOAT__, arrayOpened->size, arrayFile) != arrayOpened->size)
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
        if(fread(arrayOpened->array, __SIZEOF_DOUBLE__, arrayOpened->size, arrayFile) != arrayOpened->size)
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


//Maximum in array

//Maximum Signed Int Array

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



//Arithmetic Mean Signed Int Array

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



//Geometric Mean Signed Array

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

//Geometric Mean Unsigned Array

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



//Harmonic Mean Signed Array

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

//Harmonic Mean Unsigned Array

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















