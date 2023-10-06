//============================================================================
// Name        : tp5.cpp
// Author      : Cristian Gramajo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
#include "Personal.h"
#include "Corporativo.h"
#include "Servicio.h"
#include "CFecha.h"
#include "ParadigmaEventos.h"
using namespace std;

int main() {
	Servicio s1(1, "comida", 150); Servicio s2(2, "bebida", 100); Servicio s3(3, "mozos", 200);
	vector<Servicio*>vsep1 = {&s1,&s2,&s3};
	ParadigmaEventos APP;
	APP.crearEventoCorporativo("La Casona", true, 2, "Cena Egresados", 100, 5,10,2023, vsep1);
	APP.crearEventoPersonal(10, 1, "Evento Personal #1", 100, 4,10,2023, vsep1);
	APP.crearEventoPersonal(50, 4, "Evento Personal #2", 50, 4,12,2023, vsep1);

	APP.mostrarResumen(CFecha(5,10,2023));

	/*cout << "COSTRO TARJETA: " << p1.costoTarjeta() << endl;
	cout << "EVENTO PERSONAL: " << p1.montoEvento() << endl;
	cout << "EVENTO CORPORATIVO: " << c1.montoEvento() << endl;*/

	return 0;
}
