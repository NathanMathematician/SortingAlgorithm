#ifndef USERINTERFACE_H
#define USERINTERFACE_H

/* Header description (Doxygen)========================================= */

/*!
    \file       userinterface.h
    \brief      Header file with sorting algorithm
    \details    Header file with sorting algorithm for numerical arrays
                All functions sort arrays in ascending order
    \author     NMathematician
    \version    1.0
    \date       2024 11 14 - 2024 11 25
*/

/* Commentaries, tips, remarks, indications ============================ */



/* Included header ===================================================== */

#include "sort.h"

/* Macros ============================================================== */



/* Preprocessor constants ============================================== */


/* Global variables ==================================================== */



/* Types, Structures and Aliases ======================================= */

// Types //



// Structures //



/* Functions prototypes ================================================ */


/*! \fn         UIprincipal(int argumentCount, char **argumentValues)
    \brief      Entry point of the program
    \details    Main menu. Can be skipped using arguments in command line.
    \param      argumentCount      Array to be sorted
*/
void UIprincipal(int argumentCount, char **argumentValues);

/*! \fn         void UIinputArray()
    \brief      Section of the program where the user can input an array and save it to a file.
    \details    Can be accessed directly using "" in command line.
*/
void UIinputArray();

/*! \fn         void UIsortArray()
    \brief      Section of the program where the user can sort an existing array.
    \details    Can be accessed directly using "" in command line.
*/
void UIsortArray();

/*! \fn         void UIconvertArray()
    \brief      Section of the program where the user can convert an existing array.
    \details    Can be accessed directly using "" in command line.
*/
void UIconvertArray();

/*! \fn         void UIcalculation()
    \brief      Section of the program where the user can do some calculations on an existing array.
    \details    Can be accessed directly using "" in command line.
*/
void UIcalculation();


#endif //USERINTERFACE_H
