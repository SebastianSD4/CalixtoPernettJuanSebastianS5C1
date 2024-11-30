
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

// 1) Inicializar dos variables globales (con valores escogidos por ustedes), una entera y otra flotante.

int a = 2;
float b = 2.5;

// Función para la división
float division(float mivarflotante, int mivarentera){
  return mivarflotante/mivarentera;
}

// Función para hallar el mínimo de un arreglo
int minimo(int arreglo[ ], int N){
  int minimo = arreglo[0];
  for (int i=0; i<N; i++){
    if (minimo>arreglo[i]){
    minimo=arreglo[i];
    }
  }
  return minimo;
}

// Función para imprimir los valores impares de una función hasta llegar a uno mayor a 800
void impares(int arreglo[ ], int N){
  for (int i=0; i<N; i++){
    if (arreglo[i]>800){
    break;
    }
    else if ((arreglo[i]%2)==1){
      cout<<arreglo[i]<<endl;
    }
  }
}

int main(){
  // 2) Imprimir los valores de las variables en un mensaje: "la primera tiene un valor de XX y la segunda variable tiene un valor de YY"
  cout<<"La primera tiene un valor de "<<a<<" y la segunda variable tiene un valor de "<<b<<endl;
  // 3) Calcular el valor de la segunda variable dividida por la primera e imprimir : "El resultado es ZZ"
  float cociente = b/a;
  cout<<"El resultado es "<<cociente<<endl;
  // 4) Crear un arreglo con 300 números enteros aleatorios entre 0 y 900.
  srand(time(NULL));
  int arreglo[300];
  for (int i=0; i<300; i++){
    arreglo[i]=rand()%900;
  // 5) Hacer una iteración para recorrer dicho arreglo e imprimir todos sus elementos.
    cout<<arreglo[i]<<endl;
  }
  // 6) Imprimir el quinto elemento del arreglo
  cout<<"El quinto elemento del arreglo es "<<arreglo[4]<<endl;
  // 7) Obtener la longitud del arreglo e imprimir: "la longitud del arreglo es XX" (use la función size(), mire cppreference)
  int N = size(arreglo);
  cout<<"La longitud del arreglo es "<<N<<endl;
  // 8) Haga una función que reciba dos variables una flotante llamada mivarflotante y una entera llamada mivarentera y retorne la variable flotante dividida por la variable entera.
  // 9) Llame su función desde la función main e imprima lo que retorna su función para mivarflotante=17.5 y mivarentera=5.
  cout<<"Al dividir 17.5 entre 5, se obtiene "<<division(17.5, 5)<<endl;
  // 10) Haga una función que retorne el mínimo del arreglo de números aleatorios antes creado
  cout<<"El mínimo valor del arreglo generado es "<<minimo(arreglo, N)<<endl;
  // 11) Haga una función que reciba el arreglo de números aleatorios antes creado, imprima los números impares y pare de imprimir al encontrar un número mayor a 800  
  impares(arreglo, N);
  return 0;
}
