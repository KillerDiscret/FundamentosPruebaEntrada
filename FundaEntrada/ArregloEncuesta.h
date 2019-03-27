#pragma once
#include "En.h"
class Arrencuesta
{
private:
	int *N;
	encuesta**arreglo;
public:
	Arrencuesta();
	void agregar(encuesta*obj);
	encuesta* obtener(int indice);
	int get_N();
	void set_N(int valor);
	~Arrencuesta();
};

Arrencuesta::Arrencuesta()
{
	arreglo = NULL;
	N = new int;
	*N = 0;
}
void Arrencuesta::agregar(encuesta*obj)
{
	encuesta**temporal;
	temporal = new encuesta*[*N + 1];
	if (temporal != NULL)
	{
		for (int i = 0; i<*N; i++)
		{
			temporal[i] = arreglo[i];
		}
		temporal[*N] = obj;
		*N = *N + 1;
		arreglo = temporal;
	}
}
encuesta* Arrencuesta::obtener(int indice)
{
	return arreglo[indice];
}
int Arrencuesta::get_N()
{
	return *N;
}
void Arrencuesta::set_N(int valor)
{
	*N = valor;
}
Arrencuesta::~Arrencuesta()
{

}