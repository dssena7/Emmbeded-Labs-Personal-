#include "mbed.h"
#include"Complex_C.hpp"





// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    ComplexNumber_C c = {3.0, 4.0};
    
    //complexDisplay("p", p);
    //complexDisplay("q", q);

/*/*****Complex conjugate code*******
******************************************************************************
    //complexDisplay("c", c);   //Display Value of C in form of complex number
    //ComplexNumber_C conjugate = complexConjugate(y);
   // complexDisplay("Conjugate of c", conjugate);
*********************************************************************************
*/
    ComplexNumber_C sum = complexAdd(p, q);
    //complexDisplay("p+q", sum);

    
    while (true) {
    }
}
