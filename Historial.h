* @code
* class Historial {
*  private :
*      int HistorialPorArticulo;
*  public :
*      void ConsultarHistorialPorArticulo();
*
* @endcode
*/
#ifndef HISTORIAL_H_
#define HISTORIAL_H_
#include "Estudiante.h"

using namespace std ;

class Historial {
	private :
		int HistorialPorArticulo ;/** @brief en este campo HistorialPorArticulo toma el valor int */
		int HistorialPorEstudiante ; /** @brief en este campo HistorialPorEstudiante toma el valor int */
		vector <Articulo>* ArticuloHistorial ;
		vector <Estudiante>* EstudianteHistorial ;
		
				
	public :
		/** 
		*@brief constructor de Historial sin parametros y sin datos
		*/
		Historial () ;
			/**
		*@brief constructor de Historial con parametros y datos
		*/
		Historial (int HistorialPorArticulo, int HistorialPorEstudiante) ;
		/**
		*@brief asignar valores a un objeto Historial  (agrega un Articulo &ArticuloTemporal)
		*/	
		void AgregarDatosAlArticuloHistorial (Articulo &ArticuloTemporal) ;
		/**
		*@brief asignar valores a un objeto Historial  (agrega un Estudiante &EstudianteTemporal)
		*/
		void AgregarDatosAlEstudianteHistorial (Estudiante &EstudianteTemporal) ;
	    /**
		*@brief lee los  valores de un Historial articulo ( ConsultarHistorialPorArticulo)
		*/
		void ConsultarHistorialPorArticulo () ;
		/**
		*@brief lee los  valores de un Historial articulo ( ConsultarHistorialEstudiante)
		*/
		void ConsultarHistorialPorEstudiante () ;
		~Historial () ; 
};
#endif 