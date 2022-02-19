#include "persona.cpp"
#include <iostream>
using namespace std;

class Propietario : persona {
	private : string nit;
				double cui;
	
	public :
		Propietario(string nom, string ape, string dir, string fe, string n, int tel, double a) : Persona (nom,ape,dir,f,tel){
			nit = n;
			cui = a;
		}
		
		void setNit(string n){nit = n;}	
		void setCui(double a){cui = a;}
		void setFecha(string fe){fecha = fe;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setDireccion(string dir){direccion = dir;}
		void setTelefono(int tel){telefono = tel;}
			
		string getNit(){return nit;}
		double getCui(){return cui;}
	  	string getFecha(){	return fecha;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		string getDireccion(){return direccion;}
		int getTelefono(){return telefono;}
		void mostrar(){
			cout<<"______________________"<<endl;
			cout<<nit<<","<<cui<<","<<fn<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		}
};

