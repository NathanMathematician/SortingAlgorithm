#ifndef SORT_H
#define SORT_H

/* Header description (Doxygen)========================================= */

/*!
    \file       sort.h
    \brief      Header file with sorting algorithm
    \details    Header file with sorting algorithm for numerical arrays
    \author     NMathematician
    \version    1.0
    \date       2024 11 14
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

/* Global variables ==================================================== */



/* Types, Structures and Aliases ======================================= */

// Types //



// Structures //



/* Functions prototypes ================================================ */

//Selection Sort Int

/*! \fn         void sortSelectionInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt8Array(int8Array *inputArray);

/*! \fn         void sortSelectionInt16Array(int16Array *inputArray)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt16Array(int16Array *inputArray);

/*! \fn         void sortSelectionInt32Array(int32Array *inputArray)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt32Array(int32Array *inputArray);

/*! \fn         void sortSelectionInt64Array(int64Array *inputArray)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionInt64Array(int64Array *inputArray);

//Selection Sort Unsigned Int

/*! \fn         void sortSelectionUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt8Array(uint8Array *inputArray);

/*! \fn         void sortSelectionUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers comparisons
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
    \details    Sorts an array of 32 bits unsigned integers comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt32Array(uint32Array *inputArray);

/*! \fn         void sortSelectionUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionUInt64Array(uint64Array *inputArray);

//Selection Sort Float

/*! \fn         void sortSelectionFloatArray(floatArray *inputArray)
    \brief      Sorts an array of floats
    \details    Sorts an array of floats using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionFloatArray(floatArray *inputArray);

/*! \fn         void sortSelectionDoubleArray(doubleArray *inputArray)
    \brief      Sorts an array of doubles
    \details    Sorts an array of doubles using comparisons
                Best case complexity: O(n^2) comparisons & O(1) swaps
                Average complexity: O(n^2) & O(n) swaps
                Worst case complexity: O(n^2) & O(n) swaps
                Stable: No
                Space complexity (memory and in-place): O(1) In-place
                Recursive: No
    \param      inputArray      Array to be sorted
*/
void sortSelectionDoubleArray(doubleArray *inputArray);




//Radix Sort Int

/*! \fn         void sortRadixInt8Array(int8Array *inputArray, int8Array *arraySorted)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt8Array(int8Array *inputArray);

/*! \fn         void sortRadixInt16Array(int16Array *inputArray, int16Array *arraySorted)
    \brief      Sorts an array of 16 bits integers
    \details    Sorts an array of 16 bits integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt16Array(int16Array *inputArray);

/*! \fn         void sortRadixInt32Array(int32Array *inputArray, int32Array *arraySorted)
    \brief      Sorts an array of 32 bits integers
    \details    Sorts an array of 32 bits integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt32Array(int32Array *inputArray);

/*! \fn         void sortRadixInt64Array(int64Array *inputArray, int64Array *arraySorted)
    \brief      Sorts an array of 64 bits integers
    \details    Sorts an array of 64 bits integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBInt64Array(int64Array *inputArray);

//Radix Sort Unsigned Int

/*! \fn         void sortRadixUInt8Array(uint8Array *inputArray)
    \brief      Sorts an array of 8 bits unsigned integers
    \details    Sorts an array of 8 bits unsigned integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt8Array(uint8Array *inputArray);

/*! \fn         void sortRadixUInt16Array(uint16Array *inputArray)
    \brief      Sorts an array of 16 bits unsigned integers
    \details    Sorts an array of 16 bits unsigned integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt16Array(uint16Array *inputArray);

/*! \fn         void sortRadixUInt32Array(uint32Array *inputArray)
    \brief      Sorts an array of 32 bits unsigned integers
    \details    Sorts an array of 32 bits unsigned integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt32Array(uint32Array *inputArray);

/*! \fn         void sortRadixUInt64Array(uint64Array *inputArray)
    \brief      Sorts an array of 64 bits unsigned integers
    \details    Sorts an array of 64 bits unsigned integers without comparisons
                Best case complexity: N/A
                Average complexity: O(n)
                Worst case complexity: O(n)
                Stable: Yes
                Space complexity (memory and in-place): O(n)
                Recursive: No
    \param  inputArray      Array to be sorted
*/
void sortRadixLSBUInt64Array(uint64Array *inputArray);





//Merge Sort Int

/*! \fn         void sortMergeInt8Array(int8Array *inputArray)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory and in-place): O(n) total & O(n) auxiliary
                Recursive: Yes
    \param[in]  inputArray      Array to be sorted
    \param[out] arraySorted      Sorted array
*/
void sortMergeInt8Array(int8Array *inputArray);







//Heap Sort Int

/*! \fn         void sortMergeInt8Array(int8Array *inputArray, int8Array *arraySorted)
    \brief      Sorts an array of 8 bits integers
    \details    Sorts an array of 8 bits integers using comparisons
                Best case complexity: O(n log n)
                Average complexity: O(n log n)
                Worst case complexity: O(n log n)
                Stable: Yes
                Space complexity (memory and in-place): O(n) total & O(n) auxiliary
                Recursive: Yes
    \param[in]  inputArray      Array to be sorted
    \param[out] arraySorted      Sorted array
*/
void sortHeapInt8Array(int8Array *inputArray);












//Counting Sort Unsigned

void sortCountingInt8Array(int8Array *inputArray, int8Array *arraySorted);

void sortCountingInt16Array(int16Array *inputArray, int16Array *arraySorted);

void sortCountingInt32Array(int32Array *inputArray, int32Array *arraySorted);

//Counting Sort Unsigned Int
/*

*/
void sortCountingUInt8Array(uint8Array *inputArray, uint8Array *arraySorted);

void sortCountingUInt16Array(uint16Array *inputArray, uint16Array *arraySorted);

void sortCountingUInt32Array(uint32Array *inputArray, uint32Array *arraySorted);

#endif //SORT_H
