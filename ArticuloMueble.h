
#ifndef ARTICULOMUEBLE_H_
#define ARTICULOMUEBLE_H_
#include "Articulo.h"
#include "Profesor.h"

using namespace std ;

class ArticuloMueble : public Articulo {
	private :
		string Material ;/** @brief en este campo Material toma el valor string */
		int CantidadMueble ; /** @brief en este campo CantidadMueble toma el valor int */
		float ValorDespreciacionAnual ; /** @brief en este campo ValorDespreciacionAnual toma el valor float */
		
		Profesor* ProfesorAsignado ;
						
	public :
			/** 
		*@brief constructor de ArticuloMueble sin parametros y sin datos
		*/
		ArticuloMueble () ;
		/**
		*@brief asignar valores a un objeto ArticuloMueble  (agrega un setMaterial)
		*/	
		void setMaterial (string Material) ;
			/** 
		*@brief asignar valores a un Articulomueble (setDespreciacion)
		*/
		void setDespreciacion (float Despreciacion) ;
			/** 
		*@brief asignar valores a un Articulomueble (setCantidad)
		*/
		void setCantidad (int Cantidad) ;
		void AsignarAlArticulo (Profesor* Profesor) ;
		/** 
		*@brief asignar valores a un Articulomueble (getMaterial)
		*/  
		string getMaterial () ;
		/**
		*@brief lee los  valores de un objeto ArticuloMueble( getDespreciacion)
		*/
		float getDespreciacion() ;
		/** 
		*@brief lee los  valores de un objeto ArticuloMueble( getCantidad)
		*/
		int getCantidad () ; 
		Profesor* getProfesorAsignado () ;
		float Despreciacion ()  ; // Polimorfismo
		void CrearMueble (ArticuloMueble* ArticuloACrear) ; 
		~ArticuloMueble () ;
};
#endif 
