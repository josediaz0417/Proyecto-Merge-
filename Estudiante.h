#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include <iostream>
#include <vector>
#include "Persona.h"
#include "ArticuloDePrestamo.h"
//#include "Prestamo.h" 


class Estudiante : public Persona {
	private :
		string Carrera ;   /** @brief en este campo Carrera toma el valor string */
		int Codigo ;  /** @brief en este campo Codigo toma el valor int */
		int Semestre ;  /** @brief en este campo Semestre toma el valor int */
		int ValorMultaAcomulada ;  /** @brief en este campo ValorMultaAcomulada toma el valor int */
		bool EstadoDeMulta ;  /** @brief en este campo EstadoDeMulta toma el valor bool */
		bool EstadoDeEstudiante ;  /** @brief en este campo EstadoDeMultaEstudiante toma el valor boll */
		
		vector <ArticuloDePrestamo*> ArticulosPrestados ; 	/** Articulos prestamos Por estudiante */

	public :
		/** 
		*@brief constructor de Estudiante sin parametros y sin datos
		*/
		Estudiante () ;
		/** 
		*@brief constructor de Estudiante con parametros y datos
		*/
		Estudiante (string Nombre, string Apellido, string Email, int Edad, long Cedula, int Telefono,
					string Carrera, int Codigo, int Semestre, int ValorMultaAcomulada, bool EstadoDeMulta, bool EstadoDeEstudiante) ;					
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un setCarrera)
		*/		  
		void setCarrera (string Carrera) ;
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un setCodigo)
		*/
		void setCodigo (int Codigo) ;
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un setSemestre)
		*/              
		void setSemestre (int Semestre) ;
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un CorrerValorMulta int ValorMultaAcomulada)
		*/
		void CorrerValorMulta (int ValorMultaAcomulada) ;
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un setEstadoDemulta)
		*/
		void setEstadoDeMulta (bool EstadoDeMulta) ;
		/**
		*@brief asignar valores a un objeto Estudiante  (agrega un setEstadoDeEstudiante)
		*/
		void setEstadoDeEstudiante (bool EstadoDeEstudiante) ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getCarrera)
		*/
		string getCarrera () ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getCodigo)
		*/
		int getCodigo () ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getSemestre)
		*/
		int getSemestre ()  ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getValorMultaAcomulada)
		*/
		int getValorMultaAcomulada () ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getEstadoDeMulta)
		*/
		bool getEstadoDeMulta () ;
		/**
		*@brief lee los  valores de un objeto Estudiante (getEstadoDeEstudiante)
		*/
		bool getEstadoDeEstudiante () ;
		/**
		*@brief lee los  valores de un objeto Estudiante (mostrarTodosLosArticulos)
		*/
		void MostrarTodosLosArticulos () ;
		void CrearDatosDeObjetoEstudiante (Estudiante* EstudianteParaCrear, int Cantidad) ;
		void AsignarAlVector (ArticuloDePrestamo* ArticuloParaPrestar) ; 
		void Devolucion (ArticuloDePrestamo* ArticuloDeDevolucion) ;
		~Estudiante () ;
};
#endif
