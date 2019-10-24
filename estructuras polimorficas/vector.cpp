#include "vector.h"
#include "objetoBase.h"



vector::vector(size_t longitud) :
	longitud(longitud), insertados(0)
{
	elementos = new objetoBase * [longitud];
	for (size_t i = 0; i < longitud; i++) {
		elementos[i] = nullptr;
	}
}


size_t vector::getInsertados() const {
	return insertados;
}
size_t vector::getLongitud() const {
	return longitud;
}






void vector::insertar(objetoBase* nuevo) {
	if (insertados == longitud) {
		redimensionar(longitud);
	}
	elementos[insertados++] = nuevo;
}
bool vector::eliminar(const size_t& posicion) {
	if (posicion < insertados){
		delete elementos[posicion];
		mover(posicion);
		return true;
	}
	return false;
}
objetoBase* vector::obtener(size_t posicion) {
	return posicion < insertados ? elementos[posicion] : nullptr;
}



void vector::redimensionar(size_t tam) {
	size_t longitudNueva = longitud + tam;
	objetoBase** nuevo = new objetoBase * [longitudNueva];

	for (size_t i = 0; i < longitudNueva; i++){
		nuevo[i] = obtener(i);
	}

	longitud = longitudNueva;
	delete[] elementos;
	elementos = nuevo;
}
void vector::mover(size_t posicion) {
	for (size_t i = posicion; i < insertados - 1; i++) {
		elementos[i] = elementos[i + 1];
	}
	elementos[--insertados] = nullptr;
}



vector::~vector() {
	for (size_t i = 0; i < insertados; i++) {
		delete elementos[i];
		elementos[i] = nullptr;
	}
	delete[] elementos;
	elementos = nullptr;
}