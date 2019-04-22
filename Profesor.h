
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
			/** 
		*@brief constructor de Profesor sin parametros y sin datos
		*/
		Profesor () ;
			/** 
		*@brief constructor de Profesor con parametros y datos
		*/
		Profesor (string Nombre, string Apellido, string Email, int Edad,
				  long Cedula, int Telefono, int Codigo, string TituloProfesional) ;
		/**
		*@brief asignar valores a un objeto Profesor  (agrega un Codigo)
		*/			  
		void setCodigo (int Codigo) ;
		/**
		*@brief asignar valores a un objeto Profesor  (agrega un TituloProfesional)
		*/	
		void setTituloProfesional (string TituloProfesional) ;
		/**
		*@brief lee los  valores de un objeto Profesoor (getCodigo)
		*/
		int getCodigo () ;
		/**
		*@brief lee los  valores de un objeto Profesoor (getTituloProfesional)
		*/
		string getTituloProfesional () ;
		void CrearDatosDeProfesor (Profesor* Profesor) ;	
		~Profesor () ;
};
#endif 
