/*
 * CFecha.cpp
 *
 *  Created on: 4 oct. 2023
 *      Author: cristian-gramajo
 */

#include "CFecha.h"
#include <iostream>
#include <string>
using namespace std;

CFecha::CFecha() {
	//cout << "CREATED!" << endl;
}
CFecha::CFecha(int dia, int mes, int anio):
	dia(dia), mes(mes), anio(anio){
}

string CFecha::getFecha(){
	return to_string(dia)+"/"+to_string(mes)+"/"+to_string(anio);
}

float CFecha::getDia(){
	return dia;
}
float CFecha::getMes(){
	return mes;
}
float CFecha::getAnio(){
	return anio;
}

CFecha::~CFecha() {
	//cout << "DELETED!" << endl;
}

