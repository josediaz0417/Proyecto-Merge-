
#ifndef PRESTAMO_H_
#define PRESTAMO_H_
#include <iostream> 
#include <string>
#include <vector>
#include "Estudiante.h" 
//#include "ManejoDeArchivo.h" 

using namespace std ;

class Prestamo {
	private :
		vector <ArticuloDePrestamo*> ArticulosPrestados ; 
		Estudiante* Auxiliar ; // Mirar a ver si este es necesario
		
	public :
			/** 
		*@brief constructor de Perstamo sin parametros y sin datos
		*/
		Prestamo() ;
		void CrearArchivoCSVHistorial () ; 
		void AgregarAlHistorial (ArticuloDePrestamo* ArticuloAPrestar) ;
		void DiligenciarPrestamo (ArticuloDePrestamo* ArticuloAPrestar, Estudiante* a ) ;
		~Prestamo() ; 
};
#endif
