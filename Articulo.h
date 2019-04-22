/**
* @file Articulo.h
* @date 4/13/2019
* @title clase articulo
* @brief clase articulo para definir articulos que tenga una herencia de este tipo
* @code
* class Articulo {
*  protected :
*      string IDnombre;
*  public :
*      void setIDnombre;
*      string getIDnombre;
*
*  string Articulo::getIDNombre() {
*  return this->IDNombre ;
* @endcode
*/
#ifndef ARTICULO_H_
#define ARTICULO_H_
#include <iostream>
#include <string>
#include <time.h>
#include "common.h"

using namespace std ; 

class Articulo {
	protected :
		string IDNombre ; /** @brief en este campo IDNombre toma el valor string */
		int CodigoArticulo ;/** @brief en este campo CodigoArticulo toma el valor int */
		float ValorArticulo ; /** @brief en este campo ValorArticulo toma el valor float  */
		float ValorActualArticulo ; /** @brief en este campo ValorActualArticulo toma el valor float  */ 
		bool EstadoArticuloDeActivo ;/** @brief en en este campo EstadoArticuloDeActivo toma el valor bool  */
		bool EstadoDeLimiteDeArticulos ;/** @brief en esta campo EstadoDeLimiteDeArticulos toma el valor bool  */
		bool EstadoDeAsignadoAProfesor ;/** @biref en este campo EstadoDeAsignadoProfesor */
		
		struct tm* Fecha ; /**  \struct estructura que permite determinar en que fecha se crea un articulo */
		
	public :
		/** 
		*@brief constructor de articulo sin parametros y sin datos
		*/
		Articulo () ;
		/**
		*@brief constructor de articulo  con parametros y datos
		*/
		Articulo (string IDNombre, int CodigoArticulo, int ValorArticuloInicial, int ValorActualArticulo, 
				  bool EstadoArticulo, bool EstadoDeLimiteDeArticulos, bool EstadoDeAsignadoAProfesor) ;
		/**
		*@brief asignar valores a un objeto articulo  (agrega un IDnombre)
		*/		  
		void setIDNombre (string IDNombre) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un CodigoArticulo)
		*/
		void setCodigoArticulo (int CodigoArticulo) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un ValorArticuloInicial)
		*/
		void setValorArticuloInicial (float ValorArticuloInicial) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un VAlorActualArticulo)
		*/
		void setValorActualArticulo (float ValorActualArticulo) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un EstadoArticulo)
		*/
		void setEstadoArticuloDeActivo (bool EstadoArticulo) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un EstadoDeLimiteDeArticulos)
		*/
		void setEstadoDeLimiteDeArticulos (bool EstadoDeLimiteDeArticulos) ;
		/**
		*@brief asignar valores a un objeto articulo ( Agrega un EstadoDeAsignadoAProfesor)
		*/
		void setEstadoDeAsignadoAProfesor (bool EstadoDeAsignadoAProfesor) ;
		/**
		*@brief lee los  valores de un objeto articulo (getIDNombre)
		*/
		string getIDNombre () ;
		/**
		*@brief lee los  valores de un objeto articulo ( getCodigoArticulo)
		*/
		int getCodigoArticulo () ;
			/**
		*@brief lee los  valores de un objeto articulo ( getArticuloInicial)
		*/
		float getValorArticuloInicial () ;
			/**
		*@brief lee los  valores de un objeto articulo ( getValorActualArticulo)
		*/
		float getValorActualArticulo () ;
			/**
		*@brief lee los  valores de un objeto articulo ( getEstadoArticuloDeActivo)
		*/
		bool getEstadoArticuloDeActivo () ;
			/**
		*@brief lee los  valores de un objeto articulo ( getEstadoDeLimiteDeArticulos)
		*/
		bool getEstadoDeLimiteDeArticulos () ;
			/**
		*@brief lee los  valores de un objeto articulo ( getEstadoDeAsigandoAProfesor )
		*/
		bool getEstadoDeAsignadoAProfesor () ;	
		/**
		* @brief toma la direccion de un objeto articulo y utiliza sus valores (getFecha)
		*/
		struct tm* getFecha () ; 
		/**
		* @brief toma la direccion de un objeto articulo y utliza sus valores (MandarFechaLocal)
		*/
		struct tm* MandarFechaLocal() ;
		/**
       * @brief Una funcion virutal pura que obliga a sus hijos a implementarla, porque cuando la hereda y no la implementa tambien esta se convierte en una clase pura y dicha clase no permite crear objetos de ese tipo 
       * @see Despreciacion
       * @param no tiene parametros
       */
		virtual float Despreciacion () = 0 ;
		void AsignarFecha (struct tm* AgregarFecha) ;   
		~Articulo () ; 
};
#endif
