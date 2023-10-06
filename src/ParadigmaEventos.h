/*
 * ParadigmaEventos.h
 *
 *  Created on: 4 oct. 2023
 *      Author: cristian-gramajo
 */

#ifndef PARADIGMAEVENTOS_H_
#define PARADIGMAEVENTOS_H_

#include <iostream>
#include <vector>
#include <string>
#include "Evento.h"
using namespace std;

class ParadigmaEventos {
	vector<Evento*> eventos;
public:
	ParadigmaEventos();
	void crearEventoCorporativo(string institucion,	bool beneficencia, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio);
	void crearEventoPersonal(int p_adicionales, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio);
	void mostrarResumen(CFecha fecha);
	int cantidadEventos();
	virtual ~ParadigmaEventos();
	ParadigmaEventos(const ParadigmaEventos &other);
};

#endif /* PARADIGMAEVENTOS_H_ */
