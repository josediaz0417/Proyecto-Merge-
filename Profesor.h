
#ifndef PROFESOR_H_
#define PROFESOR_H_
#include <iostream>
#include "Persona.h"

using namespace std ;

class Profesor : public Persona {
	private :
		int Codigo ;
		string TituloProfesional ;
		
	public :
		Profesor () ;
		Profesor (string Nombre, string Apellido, string Email, int Edad,
				  long Cedula, int Telefono, int Codigo, string TituloProfesional) ;
		void setCodigo (int Codigo) ;
		void setTituloProfesional (string TituloProfesional) ;
		int getCodigo () ;
		string getTituloProfesional () ;
		void CrearDatosDeProfesor (Profesor* Profesor) ;	
		~Profesor () ;
};
#endif 
