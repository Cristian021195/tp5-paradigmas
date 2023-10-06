/*
 * Corporativo.cpp
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#include "Corporativo.h"

Corporativo::Corporativo() {
	//cout << "CREATED!" << endl;
}
Corporativo::Corporativo(string institucion, bool beneficencia, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio):
	institucion(institucion), beneficencia(beneficencia), Evento(codigo, descripcion, personas, dia, mes, anio,servicio){
}
Corporativo::~Corporativo() {
	//cout << "DEL!" << endl;
	delete this;
}

float Corporativo::montoEvento(){
	float monto = costoTarjeta();
	if(personas < 100){
		monto = monto * 100;
	}else{
		monto = (monto * personas);
	}
	if(esBenefico()){
		monto = monto * 0.85;
	}
	return monto;
}
void Corporativo::listarInfo(){
	cout << "CODIGO: " << getCodigo() << " FECHA: " << obtenerFecha().getFecha()
		<< " CANT SER: " << servicio.size() << " MONTO EV: " << montoEvento() << endl;
}
void Corporativo::absFn(){}
bool Corporativo::esBenefico(){
	return beneficencia;
}

Corporativo::Corporativo(const Corporativo &other) {
	//cout << "COPIED!" << endl;
}

