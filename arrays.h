#ifndef ARRAYS_H
#define ARRAYS_H

/* Header description (Doxygen)========================================= */

/*!
    \file       arrays.h
    \brief      Header file with basic array operations
    \details    Header file for array operations such as initialization, saving on hard drive, opening array files, finding the maximum and minimum of a given array and computing arithmetic, geometric and harmonic mean (when possible)
    \author     NMathematician
    \version    1.0
    \date       2024 09 30
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include <math.h>
#include "readinput.h"

/* Macros ============================================================== */



/* Preprocessor constants ============================================== */



/* Global variables ==================================================== */



/* Types, Structures and Aliases ======================================= */

// Types

typedef uint64_t numberOfElements;


// Structures

//Signed Int Array

/*!
    \struct     int8Array
    \brief      Structure of an array of 8 bits integers
    \details    Array of 8 bits integers pointed with \a array and with \a size number of elements.
*/
typedef struct int8Array int8Array;
struct int8Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   int8_t *array;      /*!< Pointer to the first 8 bits integer in the array. */
};

/*!
    \struct     int16Array
    \brief      Structure of an array of 16 bits integers
    \details    Array of 16 bits integers pointed with \a array and with \a size number of elements.
*/
typedef struct int16Array int16Array;
struct int16Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   int16_t *array;      /*!< Pointer to the first 16 bits integer in the array. */
};

/*!
    \struct     int32Array
    \brief      Structure of an array of 32 bits integers
    \details    Array of 32 bits integers pointed with \a array and with \a size number of elements.
*/
typedef struct int32Array int32Array;
struct int32Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   int32_t *array;      /*!< Pointer to the first 32 bits integer in the array. */
};

/*!
    \struct     int64Array
    \brief      Structure of an array of 64 bits integers
    \details    Array of 64 bits integers pointed with \a array and with \a size number of elements.
*/
typedef struct int64Array int64Array;
struct int64Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   int64_t *array;      /*!< Pointer to the first 64 bits integer in the array. */
};

//Unsigned Int Array

/*!
    \struct     uint8Array
    \brief      Structure of an array of 8 bits unsigned integers
    \details    Array of 8 bits unsigned integers pointed with \a array and with \a size number of elements.
*/
typedef struct uint8Array uint8Array;
struct uint8Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   uint8_t *array;      /*!< Pointer to the first 8 bits unsigned integer in the array. */
};

/*!
    \struct     uint16Array
    \brief      Structure of an array of 16 bits unsigned integers
    \details    Array of 16 bits unsigned integers pointed with \a array and with \a size number of elements.
*/
typedef struct uint16Array uint16Array;
struct uint16Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   uint16_t *array;      /*!< Pointer to the first 16 bits unsigned integer in the array. */
};

/*!
    \struct     uint32Array
    \brief      Structure of an array of 32 bits unsigned integers
    \details    Array of 32 bits unsigned integers pointed with \a array and with \a size number of elements.
*/
typedef struct uint32Array uint32Array;
struct uint32Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   uint32_t *array;      /*!< Pointer to the first 32 bits unsigned integer in the array. */
};

/*!
    \struct     uint64Array
    \brief      Structure of an array of 64 bits unsigned integers
    \details    Array of 64 bits unsigned integers pointed with \a array and with \a size number of elements.
*/
typedef struct uint64Array uint64Array;
struct uint64Array
{
   numberOfElements size;     /*!< Number of elements in the array */
   uint64_t *array;      /*!< Pointer to the first 64 bits unsigned integer in the array. */
};

//Float Array

/*!
    \struct     floatArray
    \brief      Structure of an array of float
    \details    Array of float pointed with \a array and with \a size number of elements.
*/
typedef struct floatArray floatArray;
struct floatArray
{
   numberOfElements size;     /*!< Number of elements in the array */
   float *array;      /*!< Pointer to the first float in the array. */
};

/*!
    \struct     doubleArray
    \brief      Structure of an array of double
    \details    Array of double pointed with \a array and with \a size number of elements.
*/
typedef struct doubleArray doubleArray;
struct doubleArray
{
   numberOfElements size;     /*!< Number of elements in the array */
   double *array;      /*!< Pointer to the first double in the array. */
};

/* Functions prototypes ================================================ */

//Initialize Int Array

/*! \fn         void initializeInt8Array(const numberOfElements *arraySize, int8Array *array)
    \brief      Initializes an int8Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeInt8Array(const numberOfElements *arraySize, int8Array *array);

/*! \fn         void initializeInt16Array(const numberOfElements *arraySize, int16Array *array)
    \brief      Initializes an int16Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeInt16Array(const numberOfElements *arraySize, int16Array *array);

/*! \fn         void initializeInt32Array(const numberOfElements *arraySize, int32Array *array)
    \brief      Initializes an int32Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeInt32Array(const numberOfElements *arraySize, int32Array *array);

/*! \fn         void initializeInt64Array(const numberOfElements *arraySize, int64Array *array)
    \brief      Initializes an int64Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeInt64Array(const numberOfElements *arraySize, int64Array *array);

//Initialize Unsigned Int Array

/*! \fn         void initializeUInt8Array(const numberOfElements *arraySize, uint8Array *array)
    \brief      Initializes an uint8Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeUInt8Array(const numberOfElements *arraySize, uint8Array *array);

/*! \fn         void initializeUInt16Array(const numberOfElements *arraySize, uint16Array *array)
    \brief      Initializes an uint16Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeUInt16Array(const numberOfElements *arraySize, uint16Array *array);

/*! \fn         void initializeUInt32Array(const numberOfElements *arraySize, uint32Array *array)
    \brief      Initializes an uint32Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeUInt32Array(const numberOfElements *arraySize, uint32Array *array);

/*! \fn         void initializeUInt64Array(const numberOfElements *arraySize, uint64Array *array)
    \brief      Initializes an uint64Array
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeUInt64Array(const numberOfElements *arraySize, uint64Array *array);

//Initialize Float Array

/*! \fn         void initializeFloatArray(const numberOfElements *arraySize, floatArray *array)
    \brief      Initializes an floatArray
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeFloatArray(const numberOfElements *arraySize, floatArray *array);

/*! \fn         void initializeDoubleArray(const numberOfElements *arraySize, doubleArray *array)
    \brief      Initializes an doubleArray
    \details    Initializes \a array of zeroes with size set to \a arraySize
    \param[in]  arraySize   Number of elements of the array
    \param[out] array       Array with \a arraySize elements set to zero
*/
void initializeDoubleArray(const numberOfElements *arraySize, doubleArray *array);



//Print Int Array

/*! \fn         void printInt8Array(int8Array *arrayToPrint)
    \brief      Print an int8Array to CMD
    \param[in] arrayToPrint    The address of the int8Array which will be printed
*/
void printInt8Array(int8Array *arrayToPrint);

/*! \fn         void printInt16Array(int16Array *arrayToPrint)
    \brief      Print an int16Array to CMD
    \param[in] arrayToPrint    The address of the int16Array which will be printed
*/
void printInt16Array(int16Array *arrayToPrint);

/*! \fn         void printInt32Array(int32Array *arrayToPrint)
    \brief      Print an int32Array to CMD
    \param[in] arrayToPrint    The address of the int32Array which will be printed
*/
void printInt32Array(int32Array *arrayToPrint);

/*! \fn         void printInt64Array(int64Array *arrayToPrint)
    \brief      Print an int64Array to CMD
    \param[in] arrayToPrint    The address of the int64Array which will be printed
*/
void printInt64Array(int64Array *arrayToPrint);

//Print Unsigned Int Array

/*! \fn         void printUInt8Array(uint8Array *arrayToPrint)
    \brief      Print an uint8Array to CMD
    \param[in] arrayToPrint    The address of the uint8Array which will be printed
*/
void printUInt8Array(uint8Array *arrayToPrint);

/*! \fn         void printUInt16Array(uint16Array *arrayToPrint)
    \brief      Print an uint16Array to CMD
    \param[in] arrayToPrint    The address of the uint16Array which will be printed
*/
void printUInt16Array(uint16Array *arrayToPrint);

/*! \fn         void printUInt32Array(uint32Array *arrayToPrint)
    \brief      Print an uint32Array to CMD
    \param[in] arrayToPrint    The address of the uint32Array which will be printed
*/
void printUInt32Array(uint32Array *arrayToPrint);

/*! \fn         void printUInt64Array(uint64Array *arrayToPrint)
    \brief      Print an uint64Array to CMD
    \param[in] arrayToPrint    The address of the uint64Array which will be printed
*/
void printUInt64Array(uint64Array *arrayToPrint);

//Print Float Array

/*! \fn         void printFloatArray(floatArray *arrayToPrint)
    \brief      Print an floatArray to CMD
    \param[in] arrayToPrint    The address of the floatArray which will be printed
*/
void printFloatArray(floatArray *arrayToPrint);

/*! \fn         void printDoubleArray(doubleArray *arrayToPrint)
    \brief      Print an doubleArray to CMD
    \param[in] arrayToPrint    The address of the doubleArray which will be printed
*/
void printDoubleArray(doubleArray *arrayToPrint);



//Read Int Array

/*! \fn         void readInt8Array(int8Array *inputValue)
    \brief      Reads a user int8Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the int8Array which will be inputed
*/
void readInt8Array(int8Array *inputArray);

/*! \fn         void readInt16Array(int16Array *inputValue)
    \brief      Reads a user int16Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the int16Array which will be inputed
*/
void readInt16Array(int16Array *inputArray);

/*! \fn         void readInt32Array(int32Array *inputValue)
    \brief      Reads a user int32Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the int32Array which will be inputed
*/
void readInt32Array(int32Array *inputArray);

/*! \fn         void readInt64Array(int64Array *inputValue)
    \brief      Reads a user int64Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the int64Array which will be inputed
*/
void readInt64Array(int64Array *inputArray);

//Read Unsigned Int Array

/*! \fn         void readUInt8Array(uint8Array *inputArray)
    \brief      Reads a user uint8Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the uint8Array which will be inputed
*/
void readUInt8Array(uint8Array *inputArray);

/*! \fn         void readUInt16Array(uint16Array *inputArray)
    \brief      Reads a user uint16Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the uint16Array which will be inputed
*/
void readUInt16Array(uint16Array *inputArray);

/*! \fn         void readUInt32Array(uint32Array *inputArray)
    \brief      Reads a user uint32Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the uint32Array which will be inputed
*/
void readUInt32Array(uint32Array *inputArray);

/*! \fn         void readUInt64Array(uint64Array *inputArray)
    \brief      Reads a user uint64Array from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the uint64Array which will be inputed
*/
void readUInt64Array(uint64Array *inputArray);

//Read Float Array

/*! \fn         void readFloatArray(floatArray *inputArray)
    \brief      Reads a user floatArray from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the floatArray which will be inputed
*/
void readFloatArray(floatArray *inputArray);


/*! \fn         void readDoubleArray(doubleArray *inputArray)
    \brief      Reads a user floatArray from CMD
    \details    Asks for the number of elements and then ask for the elements values
    \param[out] inputArray    The address of the doubleArray which will be inputed
*/
void readDoubleArray(doubleArray *inputArray);



//Write Array as Binary File

//Write Int Array Binary File

/*! \fn         void writeInt8Array(const int8Array *arrayToWrite)
    \brief      Writes a user int8Array in a int8array (.i8arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the int8Array which will be written
*/
void writeInt8Array(const int8Array *arrayToWrite);

/*! \fn         void writeInt16Array(const int16Array *arrayToWrite)
    \brief      Writes a user int16Array in a int16array (.i16arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the int16Array which will be written
*/
void writeInt16Array(const int16Array *arrayToWrite);

/*! \fn         void writeInt32Array(const int32Array *arrayToWrite)
    \brief      Writes a user int32Array in a int32array (.i32arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the int32Array which will be written
*/
void writeInt32Array(const int32Array *arrayToWrite);

/*! \fn         void writeInt64Array(const int64Array *arrayToWrite)
    \brief      Writes a user int64Array in a int64array (.i64arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the int64Array which will be written
*/
void writeInt64Array(const int64Array *arrayToWrite);

//Write Unsigned Int Array Binary File

/*! \fn         void writeUInt8Array(const uint8Array *arrayToWrite)
    \brief      Writes a user uint8Array in a uint8array (.ui8arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the uint8Array which will be written
*/
void writeUInt8Array(const uint8Array *arrayToWrite);

/*! \fn         void writeUInt16Array(const uint16Array *arrayToWrite)
    \brief      Writes a user uint16Array in a uint16array (.ui16arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the uint16Array which will be written
*/
void writeUInt16Array(const uint16Array *arrayToWrite);

/*! \fn         void writeUInt32Array(const uint32Array *arrayToWrite)
    \brief      Writes a user uint32Array in a uint32array (.ui32arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the uint32Array which will be written
*/
void writeUInt32Array(const uint32Array *arrayToWrite);

/*! \fn         void writeUInt64Array(const uint64Array *arrayToWrite)
    \brief      Writes a user uint64Array in a uint64array (.ui64arr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the uint64Array which will be written
*/
void writeUInt64Array(const uint64Array *arrayToWrite);

//Write Float Array Binary File

/*! \fn         void writeFloatArray(const floatArray *arrayToWrite)
    \brief      Writes a user floatArray in a floatarray (.fltarr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the floatArray which will be written
*/
void writeFloatArray(const floatArray *arrayToWrite);

/*! \fn         void writeDoubleArray(const doubleArray *arrayToWrite)
    \brief      Writes a user doubleArray in a doublearray (.dblarr) file
    \details    Asks for the filename and then writes the file
    \param[in]  arrayToWrite    The address of the doubleArray which will be written
*/
void writeDoubleArray(const doubleArray *arrayToWrite);



//Open Array as Binary File

//Open Int Array Binary File

/*! \fn         void openInt8Array(const char *filename, int8Array *arrayOpened)
    \brief      Opens a user int8Array from a int8array (.i8arr) file
    \details    Asks for the filename and then opens the file and store it in memory
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the int8Array which will be stored in memory
*/
void openInt8Array(const char *filename, int8Array *arrayOpened);

/*! \fn         void openInt16Array(const char *filename, int16Array *arrayOpened)
    \brief      Opens a user int16Array from a int16array (.i16arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the int16Array which will be stored in memory
*/
void openInt16Array(const char *filename, int16Array *arrayOpened);

/*! \fn         void openInt32Array(const char *filename, int32Array *arrayOpened)
    \brief      Opens a user int32Array from a int32array (.i32arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the int32Array which will be stored in memory
*/
void openInt32Array(const char *filename, int32Array *arrayOpened);

/*! \fn         void openInt64Array(const char *filename, int64Array *arrayOpened)
    \brief      Opens a user int64Array from a int64array (.i64arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the int64Array which will be stored in memory
*/
void openInt64Array(const char *filename, int64Array *arrayOpened);

//Open Unsigned Int Array Binary File

/*! \fn         void openUInt8Array(const char *filename, uint8Array *arrayOpened)
    \brief      Opens a user uint8Array from a uint8array (.ui8arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the uint8Array which will be stored in memory
*/
void openUInt8Array(const char *filename, uint8Array *arrayOpened);

/*! \fn         void openUInt16Array(const char *filename, uint16Array *arrayOpened)
    \brief      Opens a user uint16Array from a uint16array (.ui16arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the uint16Array which will be stored in memory
*/
void openUInt16Array(const char *filename, uint16Array *arrayOpened);

/*! \fn         void openUInt32Array(const char *filename, uint32Array *arrayOpened)
    \brief      Opens a user uint32Array from a uint32array (.ui32arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the uint32Array which will be stored in memory
*/
void openUInt32Array(const char *filename, uint32Array *arrayOpened);

/*! \fn         void openUInt64Array(const char *filename, uint64Array *arrayOpened)
    \brief      Opens a user uint64Array from a uint64array (.ui64arr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the uint64Array which will be stored in memory
*/
void openUInt64Array(const char *filename, uint64Array *arrayOpened);

//Open Float Array Binary File

/*! \fn         void openFloatArray(const char *filename, floatArray *arrayOpened)
    \brief      Opens a user floatArray from a floatarray (.fltarr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the floatArray which will be stored in memory
*/
void openFloatArray(const char *filename, floatArray *arrayOpened);

/*! \fn         void openDoubleArray(const char *filename, doubleArray *arrayOpened)
    \brief      Opens a user doubleArray from a doublearray (.dblarr) file
    \details    Asks for the filename and then opens the file
    \param[in]   filename       Characters string of the filename with its extension
    \param[out]  arrayOpened    The address of the doubleArray which will be stored in memory
*/
void openDoubleArray(const char *filename, doubleArray *arrayOpened);



//Maximum in array

//Maximum Int Array

/*! \fn         void maxInt8Array(const int8Array *arrayStruct, int8_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the int8Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxInt8Array(const int8Array *arrayStruct, int8_t *maximum);

/*! \fn         void maxInt16Array(const int16Array *arrayStruct, int16_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the int16Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxInt16Array(const int16Array *arrayStruct, int16_t *maximum);

/*! \fn         void maxInt32Array(const int32Array *arrayStruct, int32_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the int32Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxInt32Array(const int32Array *arrayStruct, int32_t *maximum);

/*! \fn         void maxInt64Array(const int64Array *arrayStruct, int64_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the int64Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxInt64Array(const int64Array *arrayStruct, int64_t *maximum);

//Maximum Unsigned Int Array

/*! \fn         void maxUInt8Array(const uint8Array *arrayStruct, uint8_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the uint8Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxUInt8Array(const uint8Array *arrayStruct, uint8_t *maximum);

/*! \fn         void maxUInt16Array(const uint16Array *arrayStruct, uint16_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the uint16Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxUInt16Array(const uint16Array *arrayStruct, uint16_t *maximum);

/*! \fn         void maxUInt32Array(const uint32Array *arrayStruct, uint32_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the uint32Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxUInt32Array(const uint32Array *arrayStruct, uint32_t *maximum);

/*! \fn         void maxUInt64Array(const uint64Array *arrayStruct, uint64_t *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the uint64Array
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxUInt64Array(const uint64Array *arrayStruct, uint64_t *maximum);

//Maximum Float Array

/*! \fn         void maxFloatArray(const floatArray *arrayStruct, float *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the floatArray
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxFloatArray(const floatArray *arrayStruct, float *maximum);

/*! \fn         void maxDoubleArray(const doubleArray *arrayStruct, double *maximum)
    \brief      Gives the \a maximum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a maximum
    \param[in]  arrayStruct   The address of the doubleArray
    \param[out] maximum The address of the variable which will stores the maximum
*/
void maxDoubleArray(const doubleArray *arrayStruct, double *maximum);



//Minimum in arrayStruct

//Minimum Int Array

/*! \fn         void minInt8Array(const int8Array *arrayStruct, int8_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the int8Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minInt8Array(const int8Array *arrayStruct, int8_t *minimum);

/*! \fn         void minInt16Array(const int16Array *arrayStruct, int16_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the int16Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minInt16Array(const int16Array *arrayStruct, int16_t *minimum);

/*! \fn         void minInt32Array(const int32Array *arrayStruct, int32_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the int32Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minInt32Array(const int32Array *arrayStruct, int32_t *minimum);

/*! \fn         void minInt64Array(const int64Array *arrayStruct, int64_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the int64Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minInt64Array(const int64Array *arrayStruct, int64_t *minimum);

//Minimum Unsigned Int Array

/*! \fn         void minUInt8Array(const uint8Array *arrayStruct, uint8_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the uint8Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minUInt8Array(const uint8Array *arrayStruct, uint8_t *minimum);

/*! \fn         void minUInt16Array(const uint16Array *arrayStruct, uint16_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the uint16Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minUInt16Array(const uint16Array *arrayStruct, uint16_t *minimum);

/*! \fn         void minUInt32Array(const uint32Array *arrayStruct, uint32_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the uint32Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minUInt32Array(const uint32Array *arrayStruct, uint32_t *minimum);

/*! \fn         void minUInt64Array(const uint64Array *arrayStruct, uint64_t *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the uint64Array
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minUInt64Array(const uint64Array *arrayStruct, uint64_t *minimum);

//Minimum Float Array

/*! \fn         void minFloatArray(const floatArray *arrayStruct, float *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the floatArray
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minFloatArray(const floatArray *arrayStruct, float *minimum);

/*! \fn         void minDoubleArray(const doubleArray *arrayStruct, double *minimum)
    \brief      Gives the \a minimum value in \a arrayStruct
    \details    Copies the greatest value in \a arrayStruct to \a minimum
    \param[in]  arrayStruct   The address of the doubleArray
    \param[out] minimum The address of the variable which will stores the minimum
*/
void minDoubleArray(const doubleArray *arrayStruct, double *minimum);



//Means

//Arithmetic Mean Int Array

/*! \fn         void meanArithmeticInt8Array(const int8Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int8Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticInt8Array(const int8Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticInt16Array(const int16Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int16Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticInt16Array(const int16Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticInt32Array(const int32Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int32Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticInt32Array(const int32Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticInt64Array(const int64Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int64Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticInt64Array(const int64Array *arrayStruct, double *mean);

//Arithmetic Mean Unsigned Int Array

/*! \fn         void meanArithmeticUInt8Array(const uint8Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint8Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticUInt8Array(const uint8Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticUInt16Array(const uint16Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint16Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticUInt16Array(const uint16Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticUInt32Array(const uint32Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint32Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticUInt32Array(const uint32Array *arrayStruct, double *mean);

/*! \fn         void meanArithmeticUInt64Array(const uint64Array *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint64Array
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticUInt64Array(const uint64Array *arrayStruct, double *mean);

//Arithmetic Mean Float Array

/*! \fn         void meanArithmeticFloatArray(const floatArray *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the floatArray
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticFloatArray(const floatArray *arrayStruct, double *mean);

/*! \fn         void meanArithmeticDoubleArray(const doubleArray *arrayStruct, double *mean)
    \brief      Computes the arithmetic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the doubleArray
    \param[out] minimum         The address of the variable which will stores the arithmetic \a mean
*/
void meanArithmeticDoubleArray(const doubleArray *arrayStruct, double *mean);



//Geometric Mean Int Array

/*! \fn         void meanGeometricInt8Array(const int8Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int8Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricInt8Array(const int8Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricInt16Array(const int16Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int16Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricInt16Array(const int16Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricInt32Array(const int32Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int32Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricInt32Array(const int32Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricInt64Array(const int64Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int64Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricInt64Array(const int64Array *arrayStruct, double *mean);

//Geometric Mean Unsigned Int Array

/*! \fn         void meanGeometricUInt8Array(const uint8Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint8Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricUInt8Array(const uint8Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricUInt16Array(const uint16Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint16Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricUInt16Array(const uint16Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricUInt32Array(const uint32Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint32Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricUInt32Array(const uint32Array *arrayStruct, double *mean);

/*! \fn         void meanGeometricUInt64Array(const uint64Array *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint64Array
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricUInt64Array(const uint64Array *arrayStruct, double *mean);

//Geometric Mean Float Array

/*! \fn         void meanGeometricFloatArray(const floatArray *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the floatArray
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricFloatArray(const floatArray *arrayStruct, double *mean);

/*! \fn         void meanGeometricDoubleArray(const doubleArray *arrayStruct, double *mean)
    \brief      Computes the geometric \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the doubleArray
    \param[out] minimum         The address of the variable which will stores the geomtric \a mean
*/
void meanGeometricDoubleArray(const doubleArray *arrayStruct, double *mean);



//Harmonic Mean Int Array

/*! \fn         void meanHarmonicInt8Array(const int8Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int8Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicInt8Array(const int8Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicInt16Array(const int16Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int16Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicInt16Array(const int16Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicInt32Array(const int32Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int32Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicInt32Array(const int32Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicInt64Array(const int64Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the int64Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicInt64Array(const int64Array *arrayStruct, double *mean);

//Harmonic Mean Unsigned Int Array

/*! \fn         void meanHarmonicUInt8Array(const uint8Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint8Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicUInt8Array(const uint8Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicUInt16Array(const uint16Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint16Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicUInt16Array(const uint16Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicUInt32Array(const uint32Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint32Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicUInt32Array(const uint32Array *arrayStruct, double *mean);

/*! \fn         void meanHarmonicUInt64Array(const uint64Array *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the uint64Array
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicUInt64Array(const uint64Array *arrayStruct, double *mean);

//Harmonic Mean Float Array

/*! \fn         void meanHarmonicFloatArray(const floatArray *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the floatArray
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicFloatArray(const floatArray *arrayStruct, double *mean);

/*! \fn         void meanHarmonicDoubleArray(const doubleArray *arrayStruct, double *mean)
    \brief      Computes the harmonic \a mean of the values in \a arrayStruct
    \param[in]  arrayStruct     The address of the doubleArray
    \param[out] minimum         The address of the variable which will stores the harmonic \a mean
*/
void meanHarmonicDoubleArray(const doubleArray *arrayStruct, double *mean);




#endif //ARRAYS_H