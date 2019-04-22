
#ifndef MENU_H_
#define MENU_H_
#include <string>
#include "Laboratorio.h"
#include "Prestamo.h" 
 
 

using namespace std ;

class Menu {
	private :
		int Opcion ; /** @brief Este Atributo es para utilizar solo en el menu 
					 * para que me vaya almacenando la opciones ingresadas
					 */
		Laboratorio* UsoDelLaboratorio = new Laboratorio () ;  
		 
	public :
			/** 
		*@brief constructor de MenuIngreso sin parametros y sin datos
		*/
		Menu () ; 
		void MenuIngreso () ; 
		void RegistroIDPersona () ;
		void MenuDatosExistentes() ;
		void MenuOpcionesPosibles () ;
		void MenuParaEstudiantes(int Posicion) ;
		void MenuExclusivoEstudiante();
		void MenuParaProfesores (int Posicion) ;
		void MenuExclusivoProfe() ;
		void MenuParaArticulosDePrestamo () ;
		void MenuParaArticulosDeMueble   () ;
		void MenuParaArticulosDeComputo  () ;
		void MenuParaPersonalAdmi(int Posicion) ;
		void MenuInformacionLaboratorio () ;
		void MenuParaHistoriales () ;
		void MenuParaEstadosDeArticulo () ;
		~Menu () ;
};
#endif 
