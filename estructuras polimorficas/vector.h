#pragma once
class objetoBase;
class vector {
protected:
	size_t longitud;
	size_t insertados;
	objetoBase** elementos;
public:
	vector(size_t longitud=15);



	size_t getInsertados() const;
	size_t getLongitud() const;

	void insertar(objetoBase* nuevo);
	bool eliminar(const size_t& posicion);

	objetoBase* obtener(size_t posicion);

	void redimensionar(size_t tam);

private:

	//mueve los elementos posteriores hacia atras desde la posicion,
	//util cuando se elimina en el inicio o el medio
	void mover(size_t posicion);
	
public:
	~vector();

};
