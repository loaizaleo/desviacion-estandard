//28 de Febrero de 2021
//Programa basado en funciones C++ para calcular la desviación estandard 
//de una colección de 80 datos almacenados en un archivo .dat
//Autor: Leonardo Loaiza
#include <cassert>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

//Declaración de funciones de leer datos y calcular la desviacion
void leer_datos(float y[80]);
float desviacion(float x[80]);

//Función principal MAIN
int main(int argc, char* argv[])
{
int N=80;
float y[N];
float desvest=0;
leer_datos(y);
desvest=desviacion(y);

cout<<"sigma= +-"<<desvest<<endl;

}//End de la funcion main

//Instrucciones para leer archivo .dat y asignar a un array
void leer_datos(float y[]){
std::ifstream read_file("pulso.dat");
assert(read_file.is_open());
for (int i=0; i<80; i++)
{
read_file >> y[i];
}
}
//desviacion
float desviacion(float x[]){
	int N=80;
	float mean=0;float sigma=0; float sum=0; float desvest=0;
	for (int i=0; i<N; i++)
	{
	sum+=x[i];
	}
	mean=sum/N;
	cout<<"mean ="<<mean<<endl;
	for (int j=0; j<N; j++)
	{
	sigma+=pow((x[j]-mean),2);
	}
	desvest=sqrt(sigma/(N-1));
	return desvest;
	}
