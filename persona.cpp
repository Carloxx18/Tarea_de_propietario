#include <iostream>
using namespace std;
class persona {

	protected : string nombres, apellidos, direccion, fecha;
				int telefono;

	protected :	
			persona (string nom, string ape, string dir, string fe, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fecha = fe;
			}	
		
void mostrar();
};
