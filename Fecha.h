 /**
* @file Fecha.h
* @date 4/13/2019
* @title clase fecha
* @brief clase fecha para definir articulos que tenga una herencia de este tipo
* @code
* class Fecha {
*  private :
*    int Dia ;
*  public :
*      void setDia (int Dia) ;
*      int getDia() ;
*
*  
* @endcode
*/
#ifndef FECHA_H_
#define FECHA_H_

using namespace std ;

class Fecha {
	private :
		int Dia ; /** @brief en este campo Dia toma el valor int */
		int Mes ;  /** @brief en este campo mes toma el valor int */
 		int Anio ;  /** @brief en este campo Anio toma el valor int */
	
	public :
		/** 
		*@brief constructor de Fecha sin parametros y sin datos
		*/
		Fecha () ;
		/**
		*@brief constructor de Fecha con parametros y datos
		*/
		Fecha (int Dia, int Mes, int Anio) ;
		/**
		*@brief asignar valores a un objeto Fecha  (agrega un Dia)
		*/	
		void setDia (int Dia) ;
		/**
		*@brief asignar valores a un objeto Fecha  (agrega un Mes)
		*/
		void setMes (int Mes) ;
		/**
		*@brief asignar valores a un objeto Fecha  (agrega un Anio)
		*/
		void setAnio (int Anio) ;
		/**
		*@brief lee los  valores de un objeto Fecha (getDia)
		*/
		int getDia () ;
		/**
		*@brief lee los  valores de un objeto Fecha (getMes)
		*/
		int getMes () ;
		/**
		*@brief lee los  valores de un objeto Fecha (getAnio)
		*/
		int getAnio () ;
		bool ValidarFormatoDeFecha (int Dia, int Mes, int Anio) ;
		void RegistrarFecha (int Dia, int Mes, int Anio) ;
		~Fecha () ;
};
#endif

