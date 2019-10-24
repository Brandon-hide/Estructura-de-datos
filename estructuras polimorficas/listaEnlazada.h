#pragma once

class nodo;
class objetoBase;

class listaEnlazada {
private:
	nodo* inicio;
	size_t insertados;
public:
	listaEnlazada();

	nodo* getNodo(size_t posicion);

	void insertarObjeto(objetoBase* elemento);

	void eliminarNodo(size_t posicion);

	size_t getInsertados();


};