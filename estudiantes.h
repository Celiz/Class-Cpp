#ifndef estudiantes_h
#define estudiantes_h
#include <string>
#include <iostream>

using namespace std;

class cEstudiantes {
	private: 
		string nombre;
		string apellido;
		string dia;
		string mes;
		string anio;
		int nota;
	public: 
		cEstudiantes(string n, string a, string d, string m, string an, int no);
		cEstudiantes();
		~cEstudiantes();
		string getNombre();
		string getApellido();
		string getDia();
		string getMes();
		string getAnio();
		int getNotas();
};

cEstudiantes::cEstudiantes(string n, string a, string d, string m, string an, int no){
	nombre = n;
	apellido = a;
	dia = d;
	mes = m;
	anio = an;
	nota = no;
}

cEstudiantes::~cEstudiantes(){
	cout<<"Borrando datos"<<endl;
}

cEstudiantes::cEstudiantes(){
	
}

string cEstudiantes::getNombre(){
	return nombre;
}

string cEstudiantes::getApellido(){
	return apellido;
}
string cEstudiantes::getDia(){
	return dia;
}
string cEstudiantes::getMes(){
	return mes;
}
string cEstudiantes::getAnio(){
	return anio;
}
int cEstudiantes::getNotas(){
	return nota;
}

#endif
