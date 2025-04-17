/* Source description (Doxygen)========================================= */

/*!
    \file       readinput.c
    \brief      Source file to securely read user input
    \details    Source file for handling and processing user input (character strings) from CMD
    \author     NMathematician
    \version    1.0
    \date       2024 09 25 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "readinput.h"

/* Functions =========================================================== */

void emptyBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

//Read Signed Int

void readInt8(int8_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        int32_t rangeTest = strtol(buf, &endptr, 10);

        if (rangeTest < INT8_MIN || rangeTest > INT8_MAX)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large. Enter a value between %i and %i.\n", INT8_MIN, INT8_MAX);
            success = 0;
        }
        else if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            *inputValue = (int8_t) rangeTest;
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readInt16(int16_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        int32_t rangeTest = strtol(buf, &endptr, 10);

        if (rangeTest < INT16_MIN || rangeTest > INT16_MAX)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large. Enter a value between %i and %i.\n", INT16_MIN, INT16_MAX);
            success = 0;
        }
        else if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            *inputValue = (int16_t) rangeTest;
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readInt32(int32_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtol(buf, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readInt64(int64_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtoll(buf, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

//Read Unsigned Int

void readUInt8(uint8_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        uint32_t rangeTest = strtoul(buf, &endptr, 10);

        if (rangeTest > UINT8_MAX)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large. Enter a value between 0 and %u.\n", UINT8_MAX);
            success = 0;
        }
        else if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            *inputValue = (uint8_t) rangeTest;
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readUInt16(uint16_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Convert input
        uint32_t rangeTest = strtoul(buf, &endptr, 10);

        if (rangeTest > UINT16_MAX)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large. Enter a value between 0 and %i.\n", UINT16_MAX);
            success = 0;
        }
        else if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            *inputValue = (uint16_t) rangeTest;
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readUInt32(uint32_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtoul(buf, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}

void readUInt64(uint64_t *inputValue)
{
    char buf[STRING_SIZE_FOR_NUMBER] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, STRING_SIZE_FOR_NUMBER, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtoull(buf, &endptr, 10);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}


//Read Float

void readFloat(float *inputValue)
{
    char buf[__FLT32X_DECIMAL_DIG__] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, __FLT32X_DECIMAL_DIG__, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtof(buf, &endptr);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}


void readDouble(double *inputValue)
{
    char buf[__FLT64X_DECIMAL_DIG__] = {0};
    int8_t success = 0;

    do
    {
        printf("Enter a number: ");
        if (fgets(buf, __FLT64X_DECIMAL_DIG__, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Helps to check the input
        char *endptr = NULL;

        //Reset error number
        errno = 0;

        //Have some input, convert it to integer
        *inputValue = strtod(buf, &endptr);

        if (errno == ERANGE)
        {
            //If the number is too small or too large, loop
            printf("This number is too small or too large.\n");
            success = 0;
            emptyBuffer();
        }
        else if (endptr == buf)
        {
            //If no character was read, loop
            printf("No character was read, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else if (*endptr != '\0' && *endptr != '\n')
        {
            //If *endptr is neither end of string nor newline,
            //the *whole* input was not converted, loop
            printf("The whole input was not converted, enter a valid number.\n");
            success = 0;
            emptyBuffer();
        }
        else
        {
            success = 1;
        }
    } while (success != 1); // repeat until we got a valid number
}


//Read Char String

void readFileName(char filename[])
{
    char buffer[STRING_SIZE_FOR_FILENAME] = {0};
    int8_t success = 0;

    //Variable initialization
    
    //Verification pointer
    char *verification = NULL;
    
    //Invalid characters for filename
    const char INVALIDCHARACTERS[] = "&<>:\"/\\|?*;!{}' ";

    //Invalid filename
    const char *INVALIDWORD[] = {"con", "prn", "aux", "nul",
    "com0", "com1", "com2", "com3", "com4", "com5", "com6", "com7", "com8", "com9", "com¹", "com²", "com³",
    "lpt0", "lpt1", "lpt2", "lpt3", "lpt4", "lpt5", "lpt6", "lpt7", "lpt8", "lpt9", "lpt¹", "lpt²", "lpt³"};

    do
    {
        printf("Enter the filename: ");
        if (fgets(buffer, STRING_SIZE_FOR_FILENAME, stdin) == NULL)
        {
            //Reading input failed
            //Empty the buffer for security reason
            emptyBuffer();

            printf("\nReading input failed. Exiting.\n");
            exit(EXIT_FAILURE);
        }

        //Convert the next line character to NULL character
        verification = strchr(buffer, '\n');

        if (verification == NULL)
        {
            //If filename is too long, loop
            printf("The filename is too long. Use a shorter filename (%i characters maximum).\n", STRING_SIZE_FOR_FILENAME - 1);
            emptyBuffer();
            success = 0;
        }
        else if (strpbrk(buffer, INVALIDCHARACTERS) != NULL)
        {
            //If an invalid character is found, loop
            printf("An invalid character was found in the filename.\n");
            printf("Do not use space character and one of these characters: & < > : \" / \\ | ? * ; ! { } '\n");
            emptyBuffer();
            success = 0;
        }
        else
        {
            uint8_t bufferLength = (uint8_t) (strlen(buffer) - 1);

            uint8_t characterCounter = 0;

            for (characterCounter = 0 ; characterCounter < bufferLength ; characterCounter++)
            {
                //Converts the alphabetic characters to lower case
                filename[characterCounter] = tolower((unsigned char) buffer[characterCounter]);
            }

            filename[bufferLength] = '\0';

            int32_t comparaisonResult = 0;
            uint8_t wordCounter = 0;

            for (wordCounter = 0 ; wordCounter < NUMBER_OF_INVALID_WORD ; wordCounter++)
            {
                comparaisonResult = strncmp(filename, INVALIDWORD[wordCounter], strlen(INVALIDWORD[wordCounter]));
                if (comparaisonResult == 0)
                {
                    printf("Invalid file name. Try another one.\n");
                    emptyBuffer();
                    success = 0;
                    break;
                }
            }

            if (comparaisonResult != 0)
            {
                success = 1;
            }
        }
    } while (success != 1); //Repeat until we got a valid name
}



//Print Binary

//Signed Int

void printInt8Binary(int8_t *number)
{
    uint8_t bitCount = MOST_SIGNIFICANT_BIT_UINT8;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT8 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printInt16Binary(int16_t *number)
{
    uint16_t bitCount = MOST_SIGNIFICANT_BIT_UINT16;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT16 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printInt32Binary(int32_t *number)
{
    uint32_t bitCount = MOST_SIGNIFICANT_BIT_UINT32;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT32 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printInt64Binary(int64_t *number)
{
    uint64_t bitCount = MOST_SIGNIFICANT_BIT_UINT64;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT64 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

//Unsigned Int

void printUInt8Binary(uint8_t *number)
{
    uint8_t bitCount = MOST_SIGNIFICANT_BIT_UINT8;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT8 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printUInt16Binary(uint16_t *number)
{
    uint16_t bitCount = MOST_SIGNIFICANT_BIT_UINT16;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT16 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printUInt32Binary(uint32_t *number)
{
    uint32_t bitCount = MOST_SIGNIFICANT_BIT_UINT32;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT32 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}

void printUInt64Binary(uint64_t *number)
{
    uint64_t bitCount = MOST_SIGNIFICANT_BIT_UINT64;
    uint8_t loopCounter;
    for(loopCounter = 0 ; loopCounter < NUMBER_OF_BITS_UINT64 ; loopCounter++)
    {
        if (*number & bitCount)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        bitCount >>= 1;
    }
}






