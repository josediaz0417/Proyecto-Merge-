
#ifndef PERSONALADMI_H_
#define PERSONALADMI_H_

#include "Persona.h"

using namespace std ;

class PersonalAdmi : public Persona {
	public :
			/** 
		*@brief constructor de PersonalAdmi sin parametros y sin datos
		*/
		PersonalAdmi () ;
			/** 
		*@brief constructor de PersonalAdmi con parametros y  datos
		*/
		PersonalAdmi (string Nombre, string Apellido, string Email, int Edad, int Cedula, long Telefono) ; 
		void CrearPersonal (PersonalAdmi* Personal) ;
		~PersonalAdmi () ;
};
#endif
