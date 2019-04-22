/**
* @file Informacion.h
* @date 4/13/2019
* @title clase Informacion
* @brief clase Informacion para definir articulos que tenga una herencia de este tipo
* @code
* class Informacion {
*  private :
*      string NombreDeInfo;
*  public :
*      void setNombreDeInfo;
*      string getNombreDeInfo;
*
* @endcode
*/
#ifndef INFORMACION_H_
#define INFORMACION_H_
#include <iostream>
#include <string> 


using namespace std ;

class Informacion {
	private :
		string NombreDeInfo ;/** @brief en este campo NombreDeInfo toma el valor string */
		string ContenidoDeInfo ; /** @brief en este campo ContenidoDeInfo toma el valor string */
		
	public :
	    /** 
		*@brief constructor de Inforamcion sin parametros y sin datos
		*/	
		Informacion () ;
		/**
		*@brief constructor de Informacion  con parametros y datos
		*/
		Informacion (string NombreDeInfo, string ContenidoDeInfo) ;
		/**
		*@brief asignar valores a un objeto Informacion ( Agrega un setNombreDeInfo)
		*/
		void setNombreDeInfo (string NombreDeInfo) ;
		/**
		*@brief asignar valores a un objeto Informacion ( Agrega un setContenidoDeInfo)
		*/
		void setContenidoDeInfo (string ContenidoDeInfo) ;
		/**
		*@brief lee los  valores de un objeto Informacion (getNombreDeInfo)
		*/
		string getNombreDeInfo () ;
		/**
		*@brief lee los  valores de un objeto Informacion (getContenidoDeInfo)
		*/
		string getContenidoDeInfo () ;
		void DatosIniciales (Informacion* InfoInicial, int NroAuxiliar) ;
		void CrearInformacionLabotatorio (Informacion* InformacionParaCrear) ;
		
		~Informacion () ;
};
#endif
