/*
 * Evento.cpp
 *
 *  Created on: 2 oct 2023
 *      Author: crist
 */

#include "Evento.h"
#include "Servicio.h"

Evento::Evento() {
	//cout << "CREATED!" << endl;
}

Evento::Evento(int codigo, string descripcion, int personas, int dia, int mes, int anio, vector<Servicio *> servicio):
	codigo(codigo), descripcion(descripcion), personas(personas), fecha(dia, mes, anio), servicio(servicio){
	//cout << "OVERLOADED!" << endl;
}

Evento::~Evento() {
	//cout << "DEL!" << endl;
}

float Evento::costoTarjeta(){
	unsigned int cant = (int)Evento::servicio.size();
	float tarjeta = 0;

	for(int i = 0; i < cant; i++){
		tarjeta+= Evento::servicio[i]->montoBase();
	}
	return tarjeta * 1.1;
}
int Evento::getCodigo(){
	return codigo;
}

float Evento::montoEvento(){
	return 0;
}
CFecha Evento::obtenerFecha(){
	return fecha;
}
void Evento::listarInfo(){
	//cout << "default" << endl;
}
void Evento::absFn(){};//la palabra virtual solo va en la definicion de cabecera.h de la clase
Evento::Evento(const Evento &other) {
	cout << "COPIED!" << endl;
}

