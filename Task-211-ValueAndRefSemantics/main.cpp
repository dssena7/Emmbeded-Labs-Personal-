#include "mbed.h"

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

int main() {
    printf("\n\nTASK311\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    printf(" (1)p = %f + j%f\n", p.real, p.imag);
    
    //Create another 
    ComplexNumber_C q = {0.0, 0.0};
    printf("(2)q = %f + j%f\n", q.real, q.imag);

    // 1 - Assign one to another
    q = p;
    printf("(3)q = %f + j%f\n", q.real, q.imag);  // Values = 2 + j3

    // 2 - Change p. Is q affected?  Answer = no
    p.real = -1.0;
    p.imag = -2.0;
    printf("(4)p = %f + j%f\n", p.real, p.imag);
    printf("(5)q = %f + j%f\n", q.real, q.imag);

    // 3 - Now create a REFERENCE TYPE (C pointer type)
    ComplexNumber_C* ptrP;   //Note the type is a pointer (32-bit address)
    ptrP = &p;               //prt = address of p
    ptrP->imag = 100.0;
    ptrP->real = 200.0;

    // Are either p and q affected? Why?
    printf("(6)p = %f + j%f\n", p.real, p.imag);
    printf("(7)q = %f + j%f\n", q.real, q.imag);    

    // 4 - Another reference type (C++ reference type)
    ComplexNumber_C& refQ = q;
    refQ.real = 33.0;
    refQ.imag = 66.0;
    printf("(8)p = %f + j%f\n", p.real, p.imag);
    printf("(9)q = %f + j%f\n", q.real, q.imag);   

    // 5 - Converting a C pointer to a C++ reference
    ComplexNumber_C& nice_ptr = *ptrP;
    nice_ptr = {5.0, 6.0};
    printf("p = %f + j%f\n", p.real, p.imag);
    printf("q = %f + j%f\n", q.real, q.imag);      
    
    while (true) {
    }
}
