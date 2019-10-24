
class objetoBase;

class nodo {
private:
	objetoBase* val;
	nodo* siguiente;
public:
	nodo(objetoBase* val);
	nodo* getSiguiente();
	nodo* setSiguiente(nodo* siguiente);
	objetoBase* getObjeto();
	~nodo();
};
