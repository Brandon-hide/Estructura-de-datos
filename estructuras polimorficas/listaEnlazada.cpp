#include "listaEnlazada.h"
#include "nodo.h"
#include "objetoBase.h"



listaEnlazada::listaEnlazada() :
	inicio(nullptr),
	insertados(0)
{


}


size_t listaEnlazada::getInsertados() {
	return insertados;
}

nodo* listaEnlazada::getNodo(size_t posicion) {
	nodo* actual = inicio;
	size_t pActual = 0;
	while (actual) {
		if (pActual == posicion) {
			break;
		}
		else if (pActual > posicion)
		{
			return nullptr;
		}


		actual = actual->getSiguiente();
		pActual++;

	}
	return actual;

}

void listaEnlazada::eliminar(size_t posicion) {
	if (posicion == 0) {
		nodo* temp = inicio ? inicio->getSiguiente() : nullptr;
		delete inicio;
		inicio = temp;
		insertados--;
	}
	else {
		nodo* temp = getNodo(posicion - 1);
		if (temp && temp->getSiguiente()) {
			nodo* temp2 = temp->getSiguiente()->getSiguiente();
			delete temp->getSiguiente();
			temp->setSiguiente(temp2);
			insertados--;
		}
	}

}

void listaEnlazada::insertar(objetoBase* elemento) {
	if (insertados == 0) {
		inicio = new nodo(elemento);
		insertados++;
	}
	else
	{
		getNodo(insertados - 1)->setSiguiente(new nodo(elemento));
		insertados++;
	}




}



listaEnlazada::~listaEnlazada() {
	while (insertados>0){
		eliminar(0);
	}
}



