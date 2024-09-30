#include <iostream>
#include "complex.h"

/*  TALLER: 
    - Complete el CMakeLists.txt para configurar adecuadamente el proyecto. 
    - Nombrar el ejecutable usando la variable de configuración PROJECT_NAME
    - Usar tanto el main.cpp como el complex.h para construir el ejecutable.
    - Completar el archivo complex.h de acuerdo a las indicaciones internas.
	- No se debe modificar el código del main.cpp y la aplicación debe 
	    ejecutarse correctamente. Se deben explicar cada una de las líneas 
		del main en comentarios.
	- Enviar el pull request.
	- Se puede desarrollar de forma individual o máximo en parejas.
*/

	
using namespace std;

int main(){     // define la funcion principal del programa
  complex a, b, c; // declara 3 variables de tipo complex
  a.re = 34.8; a.im = -12.4; // da valores a las partes real e imaginaria de a
  b = conjugate(a); // da a b el conjugado de a
  c.re = c.im = 24.59; // da el mismo valor a las partes real e imaginaria de c

  complex d =  c + b; // llama a d y le asigna la suma de c y b

  //d = c - a;
  cout << c << endl; //imprime los valores de c y d

  cout << d << endl; //imprime los valores de c y d

  cout << "Son iguales a y b?: " << ( a==b ) << endl; // verifica e imprime si a es igual a b
  cout << "son iguales b y d?: " << ( b==d ) << endl; // verifica e imprime si b es igual a d

// Ahora con arrglos

  complex obj[5]; // llama un arreglo de 5 elementos de tipo complex
// da valores a las partes real e imaginaria de cada elemento del arreglo obj
  obj[0].re = 34.; obj[0].im = -4.;
  obj[1].re = obj[1].im = 45.;
  obj[2].re = 33.33; obj[2].im = -45.;
  obj[3].re = 12.; obj[3].im = 25.;
  obj[4].re = obj[4].im = -56.56 ;

// nombra variables temporales para intercambiar valores y otra variable cambio para controlar el bucle
  double tmp1, tmp2;
  bool cambio;

  // Qué hace este código?
// este codigo utiliza el metodo de la burbuja para ordenar el arreglo obj en orden ascendente basado en la parte real de los numeros complejos
  do{
    cambio = false;
    for (int i =0; i < 4; ++i ){
      if( obj[i] < obj[i+1] ){
      }else{
        tmp1 = obj[i].re;
        tmp2 = obj[i].im;
        obj[i].re = obj[i+1].re ;
        obj[i].im = obj[i+1].im ;
        obj[i+1].re = tmp1 ;
        obj[i+1].im = tmp2 ;
        cambio = true;
      }
    }
  }while(cambio == true);

  for( int i = 0 ; i < 5; ++i ) // imprime los elementos del arreglo obj después de ser ordenados
    cout << obj[i] << endl; // imprime los elementos del arreglo obj después de ser ordenados

// finaliza  el main  y devuelve un 0 diciendo que el programa termino bien 
  return 0;
}
