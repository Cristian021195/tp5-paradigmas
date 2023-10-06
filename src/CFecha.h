/*
 * CFecha.h
 *
 *  Created on: 4 oct. 2023
 *      Author: cristian-gramajo
 */

#ifndef CFECHA_H_
#define CFECHA_H_
#include <string>
#include <iostream>
using namespace std;

class CFecha {
	int dia;
	int mes;
	int anio;
public:
	CFecha();
	CFecha(int dia, int mes, int anio);
	float getDia();
	float getMes();
	float getAnio();
	string getFecha();
	virtual ~CFecha();
};

#endif /* CFECHA_H_ */
