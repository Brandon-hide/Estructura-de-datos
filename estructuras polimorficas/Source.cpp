#include <iostream>

#include "objetoBase.h"
#include "vector.h"

using std::cin;
using std::cout;
using std::endl;

int main() {


	vector a;
	a.insertar(new objetoBase());
	a.insertar(new objetoBase());
	a.insertar(new objetoBase());
	a.insertar(new objetoBase());

	a.eliminar(2);

	cout << a.getInsertados() << endl;
	cout << a.getLongitud() << endl;

	cout << (a.obtener(3) ? "valido" : "invalido");


	cin.ignore();
	return 0;
}

