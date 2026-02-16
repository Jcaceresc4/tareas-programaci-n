#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	getline (cin, nit);
	cout<<"Ingresar Nombres: ";
	getline(cin, nombres);
	cout<<"Ingresar Apellidos: ";
	getline(cin, apellidos);
	cout<<"Ingresar Direccion: ";
	getline(cin, direccion);	
	cout<<"Ingresar Telefono: ";
	cin>> telefono;
	// instancia de un objeto 
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	//cout<<"Datos del cliente: "<<obj.getNit()<<obj.getNombres()<<obj.getApellidos()<<obj.getDireccion()<<obj.getTelefono()<<endl;
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
}
