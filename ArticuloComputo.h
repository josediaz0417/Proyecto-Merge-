/**
* @file Articulo.h
* @date 4/13/2019
* @title clase ArticuloComputo
* @brief clase ArticuloComputo para definir articulos que tenga una herencia de este tipo
* @code
* class ArticuloComputo {
*  protected :
*      string IDMarca;
*  public :
*      void setCantidad;
*      string getCantidad;
*
*  void ArticuloMueble::setCantidad(int Cantidad) {
*	this->CantidadMueble = Cantidad ;
* @endcode
*/
#ifndef ARTICULOCOMPUTO_H_
#define ARTICULOCOMPUTO_H_
#include "Articulo.h"
#include "Profesor.h" 

using namespace std ;

class ArticuloComputo : public Articulo {
	private :
		string IDMarca ;/** @brief en este campo IDMarca toma el valor string */
		int CantidadDisponibles ; /** @brief en este campo CantidadDisponibles toma el valor int */
		float ValorDespreciacionAnual ; /** @brief en este campo ValorDespreciacionAnual toma el valor float */
		
		Profesor* ProfesorAsignado ;
		

	public :
		/** 
		*@brief constructor de ArticuloComputo sin parametros y sin datos
		*/
		ArticuloComputo () ;
		Profesor* getProfesor () ;
		/** 
		*@brief asignar valores a un artico de tipo objeto con la direccion de un profesor
		*/
		void AsignarAlArticulo (Profesor* Profesor) ;
		/** 
		*@brief asignar valores a un ArticuloComputo (setIDMarca)
		*/
		void setIDMarca (string IDMarca) ;
     	/** 
		*@brief asignar valores a un ArticuloComputo (setDespreciacion)
		*/
		void setDespreciacion (float Despreciacion) ;
		/** 
		*brief asignar valores a un ArticuloComputo (setCantidad )
		*/
		void setCantidad (int Cantidad) ;
			/**
		*@brief lee los  valores de un objeto ArticuloComputo (getIDMarca)
		*/
		string getIDMarca () ;
		/**
		*@brief lee los  valores de un objeto ArticuloComputo (getDespreciacion)
		*/
		float getDespreciacion() ;
		/**
		*@brief lee los  valores de un objeto ArticuloComputo (getCantidad)
		*/
		int getCantidad () ; 
		/**
		*@brief lee los  valores de un objeto ArticuloComputo (getCantidad)
		*/
		float Despreciacion ()  ; // Polimorfismo
		void CrearComputo (ArticuloComputo* ComputoACrear) ; 
		void CrearArchivoInventario () ;
		~ArticuloComputo () ;
};
#endif
