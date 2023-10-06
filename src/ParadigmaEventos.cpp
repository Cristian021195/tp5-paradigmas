/*
 * ParadigmaEventos.cpp
 *
 *  Created on: 4 oct. 2023
 *      Author: cristian-gramajo
 */

#include <iostream>
#include <vector>
#include <string>

#include "ParadigmaEventos.h"
#include "Corporativo.h"
#include "Personal.h"

ParadigmaEventos::ParadigmaEventos() {
}

ParadigmaEventos::~ParadigmaEventos() {
	//delete ;
	unsigned int cant = (unsigned int)eventos.size();
	for(unsigned int i = 0; i < cant; i++){
		delete eventos[i];
	}
}
void ParadigmaEventos::crearEventoCorporativo(string institucion,	bool beneficencia, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio){
	Corporativo *caux = new Corporativo(institucion, beneficencia, codigo, descripcion, personas, dia, mes, anio, servicio);
	eventos.push_back(caux);
}
void ParadigmaEventos::crearEventoPersonal(int p_adicionales, int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio){
	Personal *paux = new Personal(p_adicionales, codigo, descripcion, personas, dia, mes, anio, servicio);
	eventos.push_back(paux);
}
int ParadigmaEventos::cantidadEventos(){
	return eventos.size();
}
void ParadigmaEventos::mostrarResumen(CFecha fecha){

	float monto_total = 0;
	for(int i = 0; i < (int)eventos.size(); i++){
		if(eventos[i]->obtenerFecha().getAnio() == fecha.getAnio() && eventos[i]->obtenerFecha().getMes() == fecha.getMes()){
			monto_total += eventos[i]->montoEvento();
			eventos[i]->listarInfo();
		}
	}
	cout << "Monto total eventos: "<< monto_total << endl;
}

ParadigmaEventos::ParadigmaEventos(const ParadigmaEventos &other) {

}

