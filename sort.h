#ifndef SORT_H
#define SORT_H

/* Header description (Doxygen)========================================= */

/*!
    \file       sort.h
    \brief      Header file with sorting algorithm
    \details    Header file with sorting algorithm for numerical arrays
                All functions sort arrays in ascending order
    \author     NMathematician
    \version    1.0
    \date       2024 11 14 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "arrays.h"

/* Macros ============================================================== */



/* Preprocessor constants ============================================== */

/*! \def UINT8_NUMBER_OF_VALUES
    \brief Shortcut for sizeof(int64_t) or sizeof(uint64_t)
*/
#define UINT8_NUMBER_OF_VALUES          256ULL

/*! \def UINT16_NUMBER_OF_VALUES
    \brief Shortcut for sizeof(int64_t) or sizeof(uint64_t)
*/
#define UINT16_NUMBER_OF_VALUES          65536ULL

/*! \def UINT32_NUMBER_OF_VALUES
    \brief Shortcut for sizeof(int64_t) or sizeof(uint64_t)
*/
#define UINT32_NUMBER_OF_VALUES          4294967296ULL

/*! \def BOOL_TRUE
    \brief Value for true boolean
*/
#define BOOL_TRUE                        1

/*! \def BOOL_FALSE
    \brief Value for false boolean
*/
#define BOOL_FALSE                       0


/* Global variables ==================================================== */



/* Types, Structures and Aliases ======================================= */

// Types //



// Structures //



/* Functions prototypes ================================================ */

//////// COMPARISON SORTS ////////

//Selection Sort Int Array

/*! \fn         void sortSelectionInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt8Array(int8Array *inputArray);

/*! \fn         void sortSelectionInt16Array(int16Array *inputArray)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt16Array(int16Array *inputArray);

/*! \fn         void sortSelectionInt32Array(int32Array *inputArray)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt32Array(int32Array *inputArray);

/*! \fn         void sortSelectionInt64Array(int64Array *inputArray)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt64Array(int64Array *inputArray);

//Selection Sort Unsigned Int Array

/*! \fn         void sortSelectionUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt8Array(uint8Array *inputArray);

/*! \fn         void sortSelectionUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt16Array(uint16Array *inputArray);

/*! \fn         void sortSelectionUInt32Array(uint32Array *inputArray)
    \brief      Sorts an array of 32 bits unsigned integers
    \details    Sorts an array of 32 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt32Array(uint32Array *inputArray);

/*! \fn         void sortSelectionUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt64Array(uint64Array *inputArray);

//Selection Sort Float Array

/*! \fn         void sortSelectionFloatArray(floatArray *inputArray)
    \brief      Sorts an array of floats
    \details    Sorts an array of floats in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionFloatArray(floatArray *inputArray);

/*! \fn         void sortSelectionDoubleArray(doubleArray *inputArray)
    \brief      Sorts an array of doubles
    \details    Sorts an array of doubles in increasing order using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory): O(1)
                In-place : Yes
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionDoubleArray(doubleArray *inputArray);



//Merge Sort Int Array

/*! \fn         void sortMergeInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeInt8Array(int8Array *inputArray);

/*! \fn         void sortMergeInt16Array(int16Array *inputArray)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeInt16Array(int16Array *inputArray);

/*! \fn         void sortMergeInt32Array(int32Array *inputArray)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeInt32Array(int32Array *inputArray);

/*! \fn         void sortMergeInt64Array(int64Array *inputArray)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeInt64Array(int64Array *inputArray);

//Merge Sort Unsigned Int Array

/*! \fn         void sortMergeUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeUInt8Array(uint8Array *inputArray);

/*! \fn         void sortMergeUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeUInt16Array(uint16Array *inputArray);

/*! \fn         void sortMergeUInt32Array(uint32Array *inputArray)
    \brief      Sorts an array of 32 bits unsigned integers
    \details    Sorts an array of 32 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeUInt32Array(uint32Array *inputArray);

/*! \fn         void sortMergeUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeUInt64Array(uint64Array *inputArray);

//Merge Sort Float Array

/*! \fn         void sortMergeFloatArray(floatArray *inputArray)
    \brief      Sorts an array of floats
    \details    Sorts an array of floats in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeFloatArray(floatArray *inputArray);

/*! \fn         void sortMergeDoubleArray(doubleArray *inputArray)
    \brief      Sorts an array of doubles
    \details    Sorts an array of doubles in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory): O(n) total & O(n) auxiliary
                In-place : No
                Recursive: Yes
    \param  inputArray      Array to be sorted
*/
void sortMergeDoubleArray(doubleArray *inputArray);



//Heap Sort Int Array

/*! \fn         void sortHeapInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapInt8Array(int8Array *inputArray);

/*! \fn         void sortHeapInt16Array(int16Array *inputArray)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapInt16Array(int16Array *inputArray);

/*! \fn         void sortHeapInt32Array(int32Array *inputArray)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapInt32Array(int32Array *inputArray);

/*! \fn         void sortHeapInt64Array(int64Array *inputArray)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapInt64Array(int64Array *inputArray);

//Heap Sort Unsigned Int Array

/*! \fn         void sortHeapUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapUInt8Array(uint8Array *inputArray);

/*! \fn         void sortHeapUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapUInt16Array(uint16Array *inputArray);

/*! \fn         void sortHeapUInt32Array(uint32Array *inputArray)
    \brief      Sorts an array of 32 bits unsigned integers
    \details    Sorts an array of 32 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapUInt32Array(uint32Array *inputArray);

/*! \fn         void sortHeapUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapUInt64Array(uint64Array *inputArray);

//Heap Sort Float Array

/*! \fn         void sortHeapFloatArray(floatArray *inputArray)
    \brief      Sorts an array of floats
    \details    Sorts an array of floats in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapFloatArray(floatArray *inputArray);

/*! \fn         void sortHeapDoubleArray(doubleArray *inputArray)
    \brief      Sorts an array of doubles
    \details    Sorts an array of doubles in increasing order using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: No
                Space complexity (memory): O(n) total & O(1) auxiliary
                In-place : Yes
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortHeapDoubleArray(doubleArray *inputArray);



//////// NON-COMPARISON SORTS ////////

//Radix Sort Int Array

/*! \fn         void sortRadixLSBInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt8Array(int8Array *inputArray);

/*! \fn         void sortRadixLSBInt16Array(int16Array *inputArray)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt16Array(int16Array *inputArray);

/*! \fn         void sortRadixLSBInt32Array(int32Array *inputArray)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt32Array(int32Array *inputArray);

/*! \fn         void sortRadixLSBInt64Array(int64Array *inputArray)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt64Array(int64Array *inputArray);

//Radix Sort Unsigned Int Array

/*! \fn         void sortRadixLSBUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt8Array(uint8Array *inputArray);

/*! \fn         void sortRadixLSBUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt16Array(uint16Array *inputArray);

/*! \fn         void sortRadixLSBUInt32Array(uint32Array *inputArray)
    \brief      Sorts an array of 32 bits unsigned integers
    \details    Sorts an array of 32 bits unsigned integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt32Array(uint32Array *inputArray);

/*! \fn         void sortRadixLSBUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt64Array(uint64Array *inputArray);

//Radix Sort Float Array

/*! \fn         void sortRadixLSBFloatArray(floatArray *inputArray)
    \brief      Sorts an array of floats
    \details    Sorts an array of floats in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBFloatArray(floatArray *inputArray);

/*! \fn         void sortRadixLSBDoubleArray(doubleArray *inputArray)
    \brief      Sorts an array of doubles
    \details    Sorts an array of doubles in increasing order without comparisons
                Best case complexity: N/A
                Average complexity: O(n * B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n * B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) auxiliary
                In-place : No
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBDoubleArray(doubleArray *inputArray);



//Counting Sort Unsigned Int Array

/*! \fn         void sortCountingInt8Array(int8Array *inputArray, int8Array *arraySorted)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers in increasing order using comparisons
                Best case complexity: N/A
                Average complexity: O(n + B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n + B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) total & O(2^B) auxiliary [B is the size of the elements, in number of bits]
                In-place : No
                Recursive: No
    \param  inputArray[in]      Array to be sorted
    \param  arraySorted[out]    Result array after sort
*/
void sortCountingInt8Array(int8Array *inputArray, int8Array *arraySorted);

/*! \fn         void sortCountingInt16Array(int16Array *inputArray, int16Array *arraySorted)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers in increasing order using comparisons
                Best case complexity: N/A
                Average complexity: O(n + B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n + B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) total & O(2^B) auxiliary [B is the size of the elements, in number of bits]
                In-place : No
                Recursive: No
    \param  inputArray[in]      Array to be sorted
    \param  arraySorted[out]    Result array after sort
*/
void sortCountingInt16Array(int16Array *inputArray, int16Array *arraySorted);

//Counting Sort Unsigned Int

/*! \fn         void sortCountingUInt8Array(uint8Array *inputArray, uint8Array *arraySorted)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers in increasing order using comparisons
                Best case complexity: N/A
                Average complexity: O(n + B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n + B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) total & O(2^B) auxiliary [B is the size of the elements, in number of bits]
                In-place : No
                Recursive: No
    \param  inputArray[in]      Array to be sorted
    \param  arraySorted[out]    Result array after sort
*/
void sortCountingUInt8Array(uint8Array *inputArray, uint8Array *arraySorted);

/*! \fn         void sortCountingUInt16Array(uint16Array *inputArray, uint16Array *arraySorted)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers in increasing order using comparisons
                Best case complexity: N/A
                Average complexity: O(n + B) [B is the size of the elements, in number of bits]
                Worst case complexity: O(n + B) [B is the size of the elements, in number of bits]
                Stable: Yes
                Space complexity (memory): O(n) total & O(2^B) auxiliary [B is the size of the elements, in number of bits]
                In-place : No
                Recursive: No
    \param  inputArray[in]      Array to be sorted
    \param  arraySorted[out]    Result array after sort
*/
void sortCountingUInt16Array(uint16Array *inputArray, uint16Array *arraySorted);



//Miscellaneous

/*! \fn         void sortVerificationInt8Array(int8Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 8 bits integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationInt8Array(int8Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationInt16Array(int16Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 16 bits integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationInt16Array(int16Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationInt32Array(int32Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 32 bits integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationInt32Array(int32Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationInt64Array(int64Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 64 bits integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationInt64Array(int64Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationUInt8Array(uint8Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 8 bits unsigned integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationUInt8Array(uint8Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationUInt16Array(uint16Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 16 bits unsigned integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationUInt16Array(uint16Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationUInt32Array(uint32Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 32 bits unsigned integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationUInt32Array(uint32Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationUInt64Array(uint64Array *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of 64 bits unsigned integers
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationUInt64Array(uint64Array *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationFloatArray(floatArray *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of floats
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationFloatArray(floatArray *toVerify, int8_t *verifBool);

/*! \fn         void sortVerificationDoubleArray(doubleArray *toVerify, int8_t *verificationBool)  
    \brief      Verifies if an array of doubles
    \param  toVerify[in]    Array to be verified
    \param  verifBool[out]  Resulting boolean (1 = TRUE)
*/
void sortVerificationDoubleArray(doubleArray *toVerify, int8_t *verifBool);












#endif //SORT_H
