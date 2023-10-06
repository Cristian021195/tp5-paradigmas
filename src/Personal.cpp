/*
 * Personal.cpp
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#include "Personal.h"

Personal::Personal() {
	//cout << "CREATED!" << endl;
}

Personal::Personal(int p_adicionales, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio):
	p_adicionales(p_adicionales), Evento(codigo, descripcion, personas, dia, mes, anio, servicio){
}
//void absFn();
Personal::~Personal() {
	delete this;
}
void Personal::listarInfo(){
	cout << "CODIGO: " << getCodigo() << " FECHA: " << obtenerFecha().getFecha()
		<< " CANT SER: " << servicio.size() << " MONTO EV: " << montoEvento() << endl;
}
float Personal::montoEvento(){
	float monto = costoTarjeta();
	monto = (monto * personas) + ((monto * 0.6) * p_adicionales);
	return monto;
}
void Personal::absFn(){}

Personal::Personal(const Personal &other) {
	//cout << "COPIED!" << endl;
}

