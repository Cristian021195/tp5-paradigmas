/*
 * Corporativo.h
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#ifndef CORPORATIVO_H_
#define CORPORATIVO_H_
#include <iostream>
#include <string>
#include "Evento.h"

using namespace std;

class Corporativo: public Evento{
	string institucion;
	bool beneficencia;
public:
	Corporativo();
	Corporativo(string institucion,	bool beneficencia, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio);

	virtual ~Corporativo();
	float montoEvento();
	void listarInfo();
	void absFn();
	bool esBenefico();
	Corporativo(const Corporativo &other);
};
/*El resumen de
facturación debe escribir por pantalla el código del evento, la fecha, la cantidad de servicios
contratados y el monto a pagar por el mismo. Al final, el resumen debe presentar el monto total
recaudado en dicho mes.*/

#endif /* CORPORATIVO_H_ */
