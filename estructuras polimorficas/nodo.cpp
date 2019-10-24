#include "nodo.h"
#include "objetoBase.h"

nodo::nodo(objetoBase* val) :
	val(val),
	siguiente(nullptr)
{

}

objetoBase* nodo::getObjeto() {
	return val;
}

nodo* nodo::getSiguiente() {
	return siguiente;
}
nodo* nodo::setSiguiente(nodo* siguiente) {
	this->siguiente = siguiente;
	return this->siguiente;
}


nodo::~nodo() {
	if (val) {
		delete val;
		val = nullptr;
	}
}
