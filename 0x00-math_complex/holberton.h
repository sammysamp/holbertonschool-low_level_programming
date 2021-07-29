#ifndef COMPLEX_H
#define COMPLEX_H
/**
 * struct complex - struct of complex number
 * @re: real part
 * @im: imaginary part
 */
typedef struct Complex
{
	double re;
	double im;
} complex;
void display_complex_number(complex c);
#endif
