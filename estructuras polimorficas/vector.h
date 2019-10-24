#pragma once
class objetoBase;
class vector {
protected:
	size_t longitud;
	size_t insertados;
	objetoBase** elementos;
public:
	vector(size_t longitud=15);

	size_t getInsertados();
	size_t getLongitud();

	void redimensionar(size_t tam);

	bool eliminar(const size_t& posicion);
	objetoBase* obtener(size_t posicion);

protected:

	void insertar(objetoBase* nuevo);
	
public:
	~vector();

};
