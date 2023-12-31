/** AUTOR: Marco Napierski
 * FECHA: 21/02/2022
 * EMAIL: alu0101469317@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 *PRÁCTICA Nº: 1
 *COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
              "C++ Programming Style Guidelines"
              https://geosoft.no/development/cppstyle.html
*/
// pauta de estilo Comment Style: comentarios multilínea usando "/* */"
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t
#include <iostream>
#include <cmath>

// pauta de estilo Names and Order of Includes: nombrar y ordenar includes según la Google C++ Style Guide
#include "rational_t.hpp"

using namespace std;

int main() {
  rational_t a(1, 2), b(3), c;
  cout << "a.value()= " << a.Value() << endl;
  cout << "b.value()= " << b.Value() << endl;
  cout << "c.value()= " << c.Value() << endl;
  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();
  c.read();
  cout << "c: ";
  c.write();
  // FASE II
  rational_t x(1, 3), y(2, 3);
  x.write();
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_greater(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_less(y) ? "true" : "false") << endl;
  // FASE III
  cout << "a + b: ";
  a.add(b).write();
  cout << "b - a: ";
  b.substract(a).write();
  cout << "a * b: ";
  a.multiply(b).write();
  cout << "a / b: ";
  a.divide(b).write();

  cout << "¿Es positivo? ";
  if (c.is_positive()) {
    cout << "Sí" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}