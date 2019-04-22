
#ifndef PERSONA_H_
#define PERSONA_H_
#include <iostream>
#include <string>
#include "common.h" 
#include <limits>

using namespace std ;

class Persona {
	protected :
		string Nombre ;
		string Apellido ;
		string Email ;
		int Edad ;
		long Cedula ;
		long Telefono ;
	
	public :
			/** 
		*@brief constructor de Persona sin parametros y sin datos
		*/
		Persona () ;
			/**
		*@brief constructor de Persona  con parametros y datos
		*/
		Persona (string Nombre, string Apellido, string Email, int Edad, int Cedula, long Telefono) ;
		/**
		*@brief asignar valores a un objeto Persona  (agrega un Nombre)
		*/	
		void setNombre (string Nombre) ;
		/**
		*@brief asignar valores a un objeto Persona  (agrega un Apellido)
		*/
		void setApellido (string Apellido) ;
		/**
		*@brief asignar valores a un objeto Persona  (agrega un Email)
		*/
		void setEmail (string Email) ;
		/**
		*@brief asignar valores a un objeto Persona  (agrega una Edad)
		*/
		void setEdad (int Edad) ;
		/**
		*@brief asignar valores a un objeto Persona  (agrega una Cedula)
		*/
		void setCedula (long Cedula) ; 
		/**
		*@brief asignar valores a un objeto Persona  (agrega un Telefono)
		*/
		void setTelefono (long Telefono) ; 
		/**
		*@brief lee los  valores de un objeto Persona ( getNombre)
		*/
		string getNombre () ;
		/**
		*@brief lee los  valores de un objeto Persona ( getApellido)
		*/
		string getApellido () ;
			/**
		*@brief lee los  valores de un objeto Persona ( getEmail)
		*/
		string getEmail () ;
			/**
		*@brief lee los  valores de un objeto Persona ( getEdad)
		*/
		int getEdad () ;
			/**
		*@brief lee los  valores de un objeto Persona ( getCedula)
		*/
		long getCedula () ;
			/**
		*@brief lee los  valores de un objeto Persona ( getTlefono)
		*/
		long getTelefono () ;
		~Persona () ;
};
#endif
