#include <iostream>
#include <cmath>
using namespace std;

struct complex{
  double re;
  double im;

// Implemente la siguiente función y explique para qué sirve

  complex(double r =0.0 , double i = 0.0) : re(r), im(i) {}

// Es un constructor que permite la creacion de objetos complex
// y crea un numero complejo el cual tiene 2 partes, una real(re)
// y una imaginaria(im), permitiendo establecer valores iniciales cuando
// se crea el numero complejo y si no se le da valor usara el 0
// tanto en la parte real e imaginaria

};
// Ajuste la declaración de estas funciones para tener parámetros por referencia seguros
// e implementelas. Explique qué hace cada una de ellas.
double angle(const complex& a) {
	return atan2(a.im, a.re);
// calcula el angulo del numero complejo  a y devuelve el angulo en radianes
}
double magnitude(const complex& a) {
	return sqrt(a.re * a.re + a.im * a.im);
// calcula el modulo de un numero complejo a
}
complex conjugate(const complex& a) {
	return complex(a.re, -a.im);
// calcula el conjugado del numero complejo a
}
// Ajuste la declaración de estas funciones para tener parámetros por referencia seguros
// e implementelas. Explique por qué se llama sobrecarga de operadores.
complex operator+(const complex& a, const complex& b) {
	return complex(a.re + b.re, a.im + b.im);
}
complex operator-(const complex& a, const complex& b) {
        return complex(a.re - b.re, a.im - b.im);
}
complex operator*(const complex& a, const complex& b) {
        return complex(a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re);
}
// la sobrecarga de operaciones  se llama asi porque permite definir como deberian
// comportarse los operadores cuando se aplican a objetos definidos por el usuario, es cuando se le da al operador 
// una forma de trabajar con los tipos de datos

bool operator==(const complex& a, const complex& b) {
    return magnitude(a) == magnitude(b) && angle(a) == angle(b);
}

bool operator<(const complex& a, const complex& b) {
    return magnitude(a) < magnitude(b);
}

bool operator>(const complex& a, const complex& b) {
    return magnitude(a) > magnitude(b);
}

// Esta sobrecarga es espacial. Indague cómo se debe realizar, explique su correcto funcionamiento
// e implementela.
ostream& operator<<(std::ostream& out, const complex& a) {
	out << "(" << a.re << ", " << a.im << ")";
    return out;
}
