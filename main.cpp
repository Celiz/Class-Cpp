#include <iostream>
#include "estudiantes.h"
using namespace std;

void mostrarAprobados(cEstudiantes *vector){
	for(int i=0;i<5;i++){
		if(vector[i].getAnio()=="2021"){
			if(vector[i].getNotas()>=7){
				cout<<"El alumno: "<<vector[i].getNombre()<<" esta aprobado"<<endl;
			}
			else {
				cout<<"El alumno: "<<vector[i].getNombre()<<" no esta aprobado"<<endl;
			}
		}
		else {
			cout<<"El alumno: " << vector[i].getNombre() << " no fue aprobado en 2021" <<endl;
		}
	}
}

void desplegarDatos(cEstudiantes *vector){
	cout<<"Listado de estudiantes"<<endl<<endl;
	for(int i=0;i<5;i++){
	cout<<"Nombre: "<<vector[i].getNombre()<<endl;
	cout<<"Apellido: "<<vector[i].getApellido()<<endl;
	cout<<"Fecha: "<<vector[i].getDia() << "/"<<vector[i].getMes() << "/"<<vector[i].getAnio()<<endl;
	cout<<"Nota: "<<vector[i].getNotas()<<endl<<endl;
	}
}

int main() {
    cout<<"Crear 3 estudiantes"<<endl;
	
    cEstudiantes *estudiante = new cEstudiantes[5];
	
    estudiante[0] = cEstudiantes("Juan", "Ramirez", "02", "04", "2022", 7);
    estudiante[1] = cEstudiantes("Rodrigo", "Peña", "10", "09", "2021", 8);
    estudiante[2] = cEstudiantes("Pedro", "Lopez", "29", "05", "2022", 7);
    estudiante[3] = cEstudiantes("Matias", "Celiz", "05", "10", "2021", 6);
    estudiante[4] = cEstudiantes("Luca", "Lopez", "30", "09", "2021", 10);
 
    desplegarDatos(estudiante);
    mostrarAprobados(estudiante);
    delete []estudiante;
 
    return 0;
}

