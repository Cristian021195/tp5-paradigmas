/*
 * Servicio.cpp
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#include <iostream>
#include <string>
#include "Servicio.h"

using namespace std;


Servicio::Servicio() {
	//cout << "CREATED!" << endl;
}

Servicio::Servicio(int codigo, string descripcion, float monto_base):
	codigo(codigo), descripcion(descripcion), monto_base(monto_base){
}


float Servicio::montoBase(){
	return monto_base;
}

Servicio::~Servicio() {
	//cout << "DEL!" << endl;
}

Servicio::Servicio(const Servicio &other) {
	//cout << "COPIED!" << endl;
}

