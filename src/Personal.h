/*
 * Personal.h
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#ifndef PERSONAL_H_
#define PERSONAL_H_

#include <string>
#include <iostream>
#include "Evento.h"

using namespace std;


class Personal: public Evento {
	int p_adicionales;
public:
	Personal();
	Personal(int p_adicionales, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio);
	virtual ~Personal();
	float montoEvento();
	void listarInfo();
	void absFn();
	Personal(const Personal &other);
};

#endif /* PERSONAL_H_ */
