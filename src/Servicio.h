/*
 * Servicio.h
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

#include <iostream>
#include <string>
using namespace std;

class Servicio {
	int codigo;
	string descripcion;
	float monto_base;
public:
	Servicio();
	Servicio(int codigo, string descripcion, float monto_base);

	float montoBase();

	virtual ~Servicio();
	Servicio(const Servicio &other);
};

#endif /* SERVICIO_H_ */
