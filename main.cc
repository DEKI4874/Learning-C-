/* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos; Nombre, edad, promedio. Pedir datos al usuario para los 3 alumnos, comprobar cuál tiene el
mejor promedio, e imprimir los datos en relación al que tiene más promedio hasta el que menos*/

#include <iostream>

struct alumno {
  char Nombre[10];
  int Edad;
  double Promedio;
} alumno[3];

int main() {  
  for (int counter = 0; counter < 3; ++counter) {
    std::cout << "Digite el nombre del alumno número " << counter + 1 << ": " << std::endl;
    std::cin.getline(alumno[counter].Nombre, 20,'\n');
    std::cout << "Digite la edad del alumno número " << counter + 1 << ": " << std::endl;
    std::cin >> alumno[counter].Edad;
    fflush(stdin);
    std::cout << "Digite el promedio del alumno número " << counter + 1 << ": " << std::endl;
    std::cin >> alumno[counter].Promedio;
  } 
  std::cout << "\n\nImpresión de datos: " << std::endl;
  int promedium{0};
  int position{0};
  for (int counter2 = 0; counter2 < 3; ++counter2) {
    if (alumno[counter2].Promedio > promedium) {  
      promedium = alumno[counter2].Promedio;
      alumno[4] = alumno[counter2];
      alumno[counter2] = alumno[position];
      alumno[position] = alumno[counter2];
      int position = counter2;
    }
  }
  for (int counter2 = 0; counter2 < 3; ++counter2) {
    std::cout << "Nombre del alumno: ";
    std::cout <<  alumno[counter2].Nombre << std::endl;
    std::cout << "Edad del alumno: ";
    std::cout << alumno[counter2].Edad << std::endl;
    std::cout << "Promedio del alumno: ";
    std::cout << alumno[counter2].Promedio << std::endl;
  }
  return 0;
}