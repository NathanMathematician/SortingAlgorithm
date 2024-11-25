#ifndef READINPUT_H
#define READINPUT_H

/* Header description (Doxygen)========================================= */

/*!
    \file       readinput.h
    \brief      Header file to securely read user input
    \details    Header file for handling and processing user input (character strings) from CMD
    \author     NMathematician
    \version    1.0
    \date       2024 09 25 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <inttypes.h>
#include <float.h>
#include <string.h>
#include <ctype.h>

/* Macros ============================================================== */



/* Preprocessor constants ============================================== */

/*! \def BYTESIZE_INT8
    \brief Shortcut for sizeof(int8_t) or sizeof(uint8_t)
*/
#define BYTESIZE_INT8           1U

/*! \def BYTESIZE_INT16
    \brief Shortcut for sizeof(int16_t) or sizeof(uint16_t)
*/
#define BYTESIZE_INT16          2U

/*! \def BYTESIZE_INT32
    \brief Shortcut for sizeof(int32_t) or sizeof(uint32_t)
*/
#define BYTESIZE_INT32          4U

/*! \def BYTESIZE_INT64
    \brief Shortcut for sizeof(int64_t) or sizeof(uint64_t)
*/
#define BYTESIZE_INT64          8U

/*! \def BYTESIZE_FLOAT
    \brief Shortcut for sizeof(float)
*/
#define BYTESIZE_FLOAT          4U

/*! \def BYTESIZE_DOUBLE
    \brief Shortcut for sizeof(double)
*/
#define BYTESIZE_DOUBLE         8U



/*! \def STRING_SIZE_BASE_10_UINT8
    \brief Equals the number of decimal places of the maximum value of a UINT_8
*/
#define STRING_SIZE_BASE_10_UINT8   4U

/*! \def STRING_SIZE_BASE_10_UINT16
    \brief Equals the number of decimal places of the maximum value of a UINT_16
*/
#define STRING_SIZE_BASE_10_UINT16  6U

/*! \def STRING_SIZE_BASE_10_UINT32
    \brief Equals the number of decimal places of the maximum value of a UINT_32
*/
#define STRING_SIZE_BASE_10_UINT32  11U

/*! \def STRING_SIZE_BASE_10_UINT64
    \brief Equals the number of decimal places of the maximum value of a UINT_64
*/
#define STRING_SIZE_BASE_10_UINT64  21U

/*! \def STRING_SIZE_FOR_NUMBER
    \brief For the initialization of strings of characters which are numbers
*/
#define STRING_SIZE_FOR_NUMBER      23U

/*! \def STRING_SIZE_FOR_FILENAME
    \brief For the initialization of strings of characters which are numbers
*/
#define STRING_SIZE_FOR_FILENAME     32U

/*! \def NUMBER_OF_INVALID_WORD
    \brief For the initialization of strings of characters which are numbers
*/
#define NUMBER_OF_INVALID_WORD     30U



/*! \def NUMBER_OF_BITS_UINT8
    \brief Shortcut for 8 bits
*/
#define NUMBER_OF_BITS_UINT8          8U

/*! \def NUMBER_OF_BITS_UINT16
    \brief Shortcut for 8 bits
*/
#define NUMBER_OF_BITS_UINT16         16U

/*! \def NUMBER_OF_BITS_UINT32
    \brief Shortcut for 8 bits
*/
#define NUMBER_OF_BITS_UINT32         32U

/*! \def NUMBER_OF_BITS_UINT64
    \brief Shortcut for 8 bits
*/
#define NUMBER_OF_BITS_UINT64         64U



/*! \def MOST_SIGNIFICANT_BIT_UINT8
    \brief Shortcut for 1 << 7
*/
#define MOST_SIGNIFICANT_BIT_UINT8          128U

/*! \def MOST_SIGNIFICANT_BIT_UINT16
    \brief Shortcut for 1 << 15
*/
#define MOST_SIGNIFICANT_BIT_UINT16         32768U

/*! \def MOST_SIGNIFICANT_BIT_UINT32
    \brief Shortcut for 1 << 31
*/
#define MOST_SIGNIFICANT_BIT_UINT32         2147483648UL

/*! \def MOST_SIGNIFICANT_BIT_UINT64
    \brief Shortcut for 1 << 63
*/
#define MOST_SIGNIFICANT_BIT_UINT64         9223372036854775808ULL


/* Global variables ==================================================== */



/* Types, Structures and Aliases ======================================= */

// Types



// Structures



/* Functions prototypes ================================================ */

/*! \fn         void emptyBuffer()
    \brief      Empties the buffer securely
*/
void emptyBuffer();


//Read Signed Int

/*! \fn         void readInt8(int8_t *inputValue)
    \brief      Reads a user int8_t from CMD
    \details    Asks for an int8_t and loops until the input is valid
    \param[out] inputValue    The address of the int8_t which will be inputed
*/
void readInt8(int8_t *inputValue);


/*! \fn         void readInt16(int16_t *inputValue)
    \brief      Reads a user int16_t from CMD
    \details    Asks for an int16_t and loops until the input is valid
    \param[out] inputValue    The address of the int16_t which will be inputed
*/
void readInt16(int16_t *inputValue);


/*! \fn         void readInt32(int32_t *inputValue)
    \brief      Reads a user int32_t from CMD
    \details    Asks for an int32_t and loops until the input is valid
    \param[out] inputValue    The address of the int32_t which will be inputed
*/
void readInt32(int32_t *inputValue);


/*! \fn         void readInt64(int64_t *inputValue)
    \brief      Reads a user int64_t from CMD
    \details    Asks for an int64_t and loops until the input is valid
    \param[out] inputValue    The address of the int64_t which will be inputed
*/
void readInt64(int64_t *inputValue);


//Read Unsigned Int

/*! \fn         void readUInt8(uint8_t *inputValue)
    \brief      Reads a user uint8_t from CMD
    \details    Asks for an uint8_t and loops until the input is valid
    \param[out] inputValue    The address of the uint8_t which will be inputed
*/
void readUInt8(uint8_t *inputValue);


/*! \fn         void readUInt16(uint16_t *inputValue)
    \brief      Reads a user uint16_t from CMD
    \details    Asks for an uint16_t and loops until the input is valid
    \param[out] inputValue    The address of the uint16_t which will be inputed
*/
void readUInt16(uint16_t *inputValue);


/*! \fn         void readUInt32(uint32_t *inputValue)
    \brief      Reads a user uint32_t from CMD
    \details    Asks for an uint32_t and loops until the input is valid
    \param[out] inputValue    The address of the uint32_t which will be inputed
*/
void readUInt32(uint32_t *inputValue);


/*! \fn         void readUInt64(uint64_t *inputValue)
    \brief      Reads a user uint64_t from CMD
    \details    Asks for an uint64_t and loops until the input is valid
    \param[out] inputValue    The address of the uint64_t which will be inputed
*/
void readUInt64(uint64_t *inputValue);


//Read Float

/*! \fn         void readFloat(float *inputValue)
    \brief      Reads a user float from CMD
    \details    Asks for a float and loops until the input is valid
    \param[out] inputValue    The address of the float which will be inputed
*/
void readFloat(float *inputValue);


/*! \fn         void readDouble(double *inputValue)
    \brief      Reads a user double from CMD
    \details    Asks for a double and loops until the input is valid
    \param[out] inputValue    The address of the double which will be inputed
*/
void readDouble(double *inputValue);


//Read Char String

/*! \fn         void readFileName(char *filename)
    \brief      Reads a user filename from CMD
    \details    Asks for a filename and loops until the filename is valid
    \param[out] filename    The address of the character string in which the filename will be stored
*/
void readFileName(char filename[]);



//Print Binary

//Print Binary Signed Int

/*! \fn         void printInt8Binary(int8_t *number)
    \brief      Print the bits of an int8_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the int8_t to be printed
*/
void printInt8Binary(int8_t *number);

/*! \fn         void printInt16Binary(int16_t *number)
    \brief      Print the bits of an int16_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the int16_t to be printed
*/
void printInt16Binary(int16_t *number);

/*! \fn         void printInt32Binary(int32_t *number)
    \brief      Print the bits of an int32_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the int32_t to be printed
*/
void printInt32Binary(int32_t *number);

/*! \fn         void printInt64Binary(int64_t *number)
    \brief      Print the bits of an int64_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the int64_t to be printed
*/
void printInt64Binary(int64_t *number);

//Print Binary Unsigned Int

/*! \fn         void printUInt8Binary(uint8_t *number)
    \brief      Print the bits of an uint8_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the uint8_t to be printed
*/
void printUInt8Binary(uint8_t *number);

/*! \fn         void printUInt16Binary(uint16_t *number)
    \brief      Print the bits of an uint16_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the uint16_t to be printed
*/
void printUInt16Binary(uint16_t *number);

/*! \fn         void printUInt32Binary(uint32_t *number)
    \brief      Print the bits of an uint32_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the uint32_t to be printed
*/
void printUInt32Binary(uint32_t *number);

/*! \fn         void printUInt64Binary(uint64_t *number)
    \brief      Print the bits of an uint64_t in CMD
    \details    Print the bits from most to least significant 
    \param[in]  number    The address of the uint64_t to be printed
*/
void printUInt64Binary(uint64_t *number);


#endif //READINPUT_H