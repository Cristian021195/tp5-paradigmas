/*
 * Evento.h
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#ifndef EVENTO_H_
#define EVENTO_H_

#include <iostream>
#include <string>
#include <vector>
#include "Servicio.h"
#include "CFecha.h"

using namespace std;

class Evento {
	int codigo;
protected:
	vector<Servicio *> servicio;
	int personas;
	string descripcion;
	CFecha fecha;

public:
	Evento();
	Evento(int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio);

	virtual ~Evento();
	float costoTarjeta();
	int getCodigo();
	CFecha obtenerFecha();
	virtual float montoEvento();
	virtual void listarInfo();// todos los metodos que vayan a tener comportamiento diferente en clases hijas, son metodos virtuales en sus padres.
	virtual void absFn() = 0; // la declaracion de funcion virtual = 0 indica que sera clase abstracta ¿xq?, solo va virtual aqui no en cpp

	Evento(const Evento &other);
};

#endif /* EVENTO_H_ */
