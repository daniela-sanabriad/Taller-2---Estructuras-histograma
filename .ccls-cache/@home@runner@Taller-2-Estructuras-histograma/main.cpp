/* 
Nombre: Daniela Sanabria.
Fecha: Febrero 15.
Ejercicio: Se desea hacer un aplicación que genere un conjunto de números aleatorios entre 0 y 20. En caso que el usuario quiera, se debe presentar un histograma sobre la frecuencia
de los números del conjunto de números aleatorios. La aplicación deberá presentar un menú, que identifique en dos partes: a) presentar la generación del conjunto de números aleatorios y b) presentar el histograma del conjunto de números aleatorios.
Para la solución del problema se recomienda:
• Se recomienda repasar funciones, vectores, arrays y estructuras.
• Hacer dos funciones para cada parte del menú.
• Crear una estructura que encapsule los datos del conjunto de números
aleatorios (Tamaño del conjunto, Max valor del conjunto y el conjunto).
• El conjunto de números aleatorios sea un array.
• El tipo de datos de la función para generar el conjunto debería ser la estructura.
• En la función del histograma deberá presentar como la guía de la Figura 1
o mucho mejor.
• Se evaluará significativamente la documentación del código.
*/


#include <iostream>
#include <cstdlib>//librería para números aleatorios
#include <stdio.h>
#include <stdlib.h>
//#include <vector>
using namespace std;

int menu();
void generarVectorAleatorio(int tam, int array[tam]);
void generarHistograma(int tam, int array[tam]);//dos funciones que uso en este programa
int main() {
  int tam;
  cout<<"Ingrese el tamaño que desea para el arreglo con numeros aleatorios"<<endl;
  cin>>tam;//tamaño del arreglo
  int array[tam];//se crea el arreglo
  int max=0;
  int opcion; string op;
  int max_valor, size_array;
  int arreglos[10]={2,5,7,8,2,5,1,7,8};
  int prueba[10];

  do{//ciclo para poder volver al menu pero haciéndolo primero y si la persona desea, repetirlo.
  cout<<"Menú: "<<endl;//se crea el menu para saber a qué función entrar y qué acciones realizar
  cout<<"0. Salir del programa."<<endl;
  cout<<"1. Crear vector aleatorio de números entre 0 y 20."<<endl;
  cout<<"2. Generar matriz del histograma."<<endl;
  cin>>opcion;
  
  switch(opcion){ //switch para entrar en la parte del programa que el usuario desea
    case 0:{
      cout<<"Ha salido del programa"<<endl;
      cout<<"Desea volver al menu? "<<endl;
      cin>>op;
      }
      break;
    case 1:{
      generarVectorAleatorio(tam,array);
      
      for(int i=0;i<tam-1;i++){
        if(array[i]<array[i+1] && max<array[i+1]){
          max=array[i+1];
          
        }
      }
      cout<<"El número máximo es: "<<max<<endl;//presentar el numero mayor entre el arreglo
      cout<<"El tamaño del arreglo es: "<<tam<<endl;//presentar el tamaño del arreglo
      //cout << "\nMax:" << max_valor << endl;
      //cout << "Size:  " << size_array << endl;
      cout<<"Desea volver al menu? "<<endl;
      cin>>op;
    }
      break;
    case 2:{
      generarHistograma(tam,array);
      cout<<"Desea volver al menu? "<<endl;
      cin>>op;
    }
      break;
    default:{
      cout <<"Ingrese opción valida"<<endl;
      cout<<"Desea volver al menu? "<<endl;
      cin>>op;
      }
      break;
    }
  }
while (op=="si");
  }
void generarVectorAleatorio(int tam, int array[tam]){
  for(int i=0;i<tam;i++){
    array[i]= rand()%21;//rand()% y el número para generar números aleatorios entre 0 y 20
    cout<<array[i]<<"\t";
  }
  cout<<endl;
}
void generarHistograma(int tam, int array[tam]){
  int arreglo[tam], cont=1, fila;//se crea otro arreglo para almacenar los números sin ser repetidos, es decir, todos los numeros del antiguo arreglo solo una vez. El contador se inicializa con 1 porque los números se repiten al menos una vez.
  cout<<"Index\t"<<"Valor\t"<<"Histograma\t"<<endl;
  for(int i=0;i<tam;i++){
    arreglo[i]=array[i];
  }
  for(int j=0;j<tam;j++){
    for(int k=j+1;k<tam;k++){
      if(arreglo[j]!=arreglo[k]){
      }
      if(arreglo[j]==arreglo[k]){//cuando encuentre valores iguales
        fila=k;
        
        for(int h=fila;h<tam;h++){//se eliminan los datos repetidos 
          arreglo[h]=arreglo[h+1];
        }
      }
    }
  }
  
  int pos;//variable para saber la posición donde hay números que no corresponden
  for(int i=0;i<tam;i++){
      if(arreglo[i]>20||arreglo[i]<0){
        pos=i; //hallar la posición donde hay números que no corresponden
        break;
      }
  }   
  
 //arreglo sin numeros repetidos
  int vecescant;
  string veces;
  char vec='*';//intenté imprimir estos valores
  for(int i=0;i<pos;i++){
    for(int j=0;j<pos;j++){

      }
    cout<<i<<"        "<<arreglo[i]<<"        "<<veces<<endl; //histograma
  }
       if(arreglo[i]==array[j]){
       vecescant++;
        for(int j=1;j<21;j++)
          if(vecescant==j){
            veces=j*vec;//muestra de que intenté poner la cantidad de veces que se repetía el número
        }
        }
 }


