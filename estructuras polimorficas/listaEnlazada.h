#pragma once

class nodo;
class objetoBase;

class listaEnlazada {
private:
	nodo* inicio;
	size_t insertados;
public:
	listaEnlazada();

	size_t getInsertados();

	nodo* getNodo(size_t posicion);
	void eliminar(size_t posicion);

protected:

	void insertar(objetoBase* elemento);

public:
	~listaEnlazada();
};