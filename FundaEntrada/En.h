#pragma once
#include<conio.h>
#include<iostream>

class encuesta
{
private:
	int edad;
	char p1, p2, p3;
public:
	encuesta();
	int getedad();
	char getp1();
	char getp2();
	char getp3();
	void setedad(int valor);
	void setp1(char letra);
	void setp2(char letra);
	void setp3(char letra);
	~encuesta();
};
encuesta::encuesta()
{

}
int  encuesta::getedad()
{
	return edad;
}
char encuesta::getp1()
{
	return p1;
}
char encuesta::getp2()
{
	return p2;
}
char encuesta::getp3()
{
	return p3;
}
void encuesta::setedad(int valor)
{
	edad = valor;
}
void encuesta::setp1(char letra)
{
	p1 = letra;
}
void encuesta::setp2(char letra)
{
	p2 = letra;
}
void encuesta::setp3(char letra)
{
	p3 = letra;
}
encuesta::~encuesta()
{

}