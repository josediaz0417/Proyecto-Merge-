
#ifndef ARTICULODEPRESTAMO_H_
#define ARTICULODEPRESTAMO_H_
#include "Articulo.h"
#include "Profesor.h"
#include <vector>

class ArticuloDePrestamo : public Articulo { 
	private :
		string IDMarca ;/** @brief en este campo IDMarca toma el valor string */
		int CantidadDeTipoDeArticulo ; /** @brief en este campo CantidadDeTipoDeArticulo toma el valor int */
		float ValorDespreciacionAnual ; /** @brief en este campo ValorDespreciacionAnual toma el valor float  */

		
		Profesor* ProfesorAsignado ;
			
	public :
			/** 
		*@brief constructor de ArticuloDePrestamo sin parametros y sin datos
		*/
		ArticuloDePrestamo () ;
		/**
		*@brief asignar valores a un objeto ArticuloDePrestamo  (agrega un IDMarca)
		*/	
		void setIDMarca (string IDMarca) ;
		/**
		*@brief asignar valores a un objeto ArticuloDePrestamo  (agrega una CantidadDeArticulos)
		*/	
		void setCantidadDeTipoDeArticulo (int CantidadDeArticulos) ;
			/**
		*@brief lee los  valores de un objeto ArticuloDePrestamo (getDespreciacion)
		*/
		void setDespreciacion (float Despreciacion) ;
		/**
		*@brief lee los  valores de un objeto ArticuloDePrestamo  (getIDMarca)
		*/
		string getIDMarca () ;
		/**
		*@brief lee los  valores de un objeto ArticuloDePretamo (getIDCantidadDeTipoDeArticulo)
		*/
		int getCantidadDeTipoDeArticulo () ;
		/**
		*@brief lee los  valores de un objeto ArticuloComputo (getDespreciacion)
		*/
		float getDespreciacion() ;
		Profesor* getProfesor () ;
		void AsignarAProfesor (Profesor* Profesor) ;
		void CrearArticuloParaPrestamo (ArticuloDePrestamo* ArticuloParaCrear) ; 
		ArticuloDePrestamo* ArticulosDePrestamoIniciales (ArticuloDePrestamo* ArticulosIniciales, int NroDeArticulo) ; 
		/**
		*@brief lee los  valores de un objeto ArticuloComputo (Despreciacion) para calcularlos
		*/
		float Despreciacion ()  ;  // Polimorfismo
		~ArticuloDePrestamo () ;
};
#endif 
