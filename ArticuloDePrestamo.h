
#ifndef ARTICULODEPRESTAMO_H_
#define ARTICULODEPRESTAMO_H_
#include "Articulo.h"
#include "Profesor.h"
#include <vector>

class ArticuloDePrestamo : public Articulo { 
	private :
		string IDMarca ;
		int CantidadDeTipoDeArticulo ;
		float ValorDespreciacionAnual ;

		
		Profesor* ProfesorAsignado ;
			
	public :
		ArticuloDePrestamo () ;
		void setIDMarca (string IDMarca) ;
		void setCantidadDeTipoDeArticulo (int CantidadDeArticulos) ;
		void setDespreciacion (float Despreciacion) ;
		string getIDMarca () ;
		int getCantidadDeTipoDeArticulo () ;
		float getDespreciacion() ;
		Profesor* getProfesor () ;
		void AsignarAProfesor (Profesor* Profesor) ;
		void CrearArticuloParaPrestamo (ArticuloDePrestamo* ArticuloParaCrear) ; 
		ArticuloDePrestamo* ArticulosDePrestamoIniciales (ArticuloDePrestamo* ArticulosIniciales, int NroDeArticulo) ; 
		float Despreciacion ()  ;  // Polimorfismo
		~ArticuloDePrestamo () ;
};
#endif 
