#ifndef __Complex_C__
#define __Complex_C__


typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexConjugate( double ComplexNumber_C y);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);


#endif