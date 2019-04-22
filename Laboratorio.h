#ifndef LABORATORIO_H_
#define LABORATORIO_H_
#include <iostream>
#include <stdlib.h>
#include <map>
#include <vector>
#include "Profesor.h"
#include "Estudiante.h"
#include "Informacion.h"
#include "PersonalAdmi.h"
#include "ManejoDeArchivo.h"
#include "ArticuloDePrestamo.h"
#include "ArticuloComputo.h"
#include "ArticuloMueble.h"


using namespace std ;

class Laboratorio {
	private :
		vector <Profesor> Profesores ;
		vector <Estudiante> Estudiantes ;
		vector <Informacion> Informaciones ;
		vector <PersonalAdmi> PersonalAdmin ;
		vector <ArticuloDePrestamo> ArticulosDisponibles ; 
		vector <ArticuloComputo> ArticulosComp ; 
		vector <ArticuloMueble> ArticulosMuebles ;
		vector <int> Fechas  ; // desde 1-3 es Dia, Mes, Anio
	
	public :
		Laboratorio () ;
		// Mostrar todo lo que tiene cada vector
		/**
		*@brief lee los  valores de un objeto Laboratorio (getProfesores)
		*/
		void getProfesores () ;
		/**
		*@brief lee los  valores de un objeto Laboratorio (getEstudiantes)
		*/
		void getEstudiantes () ; 
		/**
		*@brief lee los  valores de un objeto Laboratorio (getPersonalAdmin)
		*/
		void getPersonalAdmin () ;
		/**
		*@brief lee los  valores de un objeto Laboratorio (getInformaciones)
		*/
		void getInformaciones () ;
		/**
		*@brief lee los  valores de un objeto Laboratorio (getComputo)
		*/
		void getComputo () ; 
		/**
		*@brief lee los  valores de un objeto Laboratorio (getMuebles)
		*/
		void getMuebles () ;
		/**
		*@brief lee los  valores de un objeto Laboratorio (getPrestamos)
		*/
		void getPrestamos () ;
		/**
		*@brief lee los  valores de un objeto Laboratorio (getArticulosPrestamo)
		*/
		void getArticulosPrestamo() ;

 		// Reglas
 		/**
		*@brief Carga la reglas con unas indicacions creadas por el autor
		*/
		void Reglas () ;
		/**
		*@brief Carga Todos los arhivos del Laboratorio
		*/
		void CargarTodoslosArchivos () ;
		
		/**
		* Mandar tamaño del vector y posicion del ultimo dato
		*/
		int MandarPosicionActual (int ClaseVector) ;
		
		
		void AgregarAlVectorProfesores (int Cantidad) ; /**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorEstudiantes (int Cantidad) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorInformaciones (int Cantidad) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorPersonalAdmin (int Cantidad) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorComputo (int Cantidad) ; /**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorMueble (int Cantidad) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorDisponibles (int Cantidad) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarFecha(int Posicion, int Dia, int Mes, int Anio) ;/**  @brief Pedir datos y agregarlos al vector correspondiente */
		void AgregarAlVectorPrestamo(int Catindad );/**  @brief Pedir datos y agregarlos al vector correspondiente */

		// Acceder a alguna posicion
		void AccederProfesor (int Codigo, int CodigoArticulo) ; /** @brief Para acceder mediante el codigo y agregarlo al articulo */
		void AccederProfesorPosicion (int Posicion) ; /** @brief Acceder a alguna posicion */
		void AccederArticulosProfe(int Posicion) ; /** @brief Acceder a alguna posicion */
		void AccederAUnEstudiante (int Posicion) ;/** @brief Acceder a alguna posicion */
		void AccederPersonalAdmi(int Posicion) ;/** @brief Acceder a alguna posicion */
		Informacion* AccederAUnaInformacion (int Posicion) ;/** @ brief Acceder a alguna posicion con puntero */
		void AccederAComputo (int Posicion) ;/**  brief Acceder a alguna posicion */
		void AccederAMueble (int Posicion) ;/** @brief Acceder a alguna posicion */
		void AccederProfesorMueb (int Codigo , int CodigoArticulo) ;/** @ brief Acceder a alguna posicion */
		void AccederArticulosPrestamo(int Posicion) ;/** @ brief Acceder a alguna posicion */
		void AccederEStadoMultaEstudiante(int Posicion);/** @ brief Acceder a alguna posicion */
//		void AccederArticulosprestamo (int Posicion);

		// Modificar datos de los vectores 
		void ModificarDatosDelVectorInformaciones() ; /** @brief Modificar datos de los vectores */
		void ModificarDatosDelVectorComputo() ; /** m@brief Modificar datos de los vectores */ 
		void ModificarDatosBasicosProfe(int Posicion) ; /**@brief Modificar datos de los vectores */
		void ModificarDatosProfe(int Posicion) ;  /** @brief Modificar datos de los vectores */
		void ModificarDatosEstudiante(int Posicion); /** @ brief Modificar datos de los vectores */
		void ModificarDatosMueble(int Posicion) ; /** @brief Modificar datos de los vectores */
		
		// Eliminar datos de los vectores 
		void EliminarDatosDelVectorInformaciones() ; /** @brief Eliminar datos de los vectores  */
		void EliminarDatosDelVectorComputo() ;/** @brief Eliminar datos de los vectores  */
		void EliminarDatosDelVectorProfesor(int Opcion) ; /** @brief Eliminar datos de los vectores  */
		void EliminarDatosDelVectorEstudiante(int Opcion) ; /** @brief Eliminar datos de los vectores  */
		void EliminarDatosDelVectorMueble() ; /** @brief Eliminar datos de los vectores  */
		

		// Asignar Profesor a Articulo
		void AsignarProfesorArticulo (int Posicion) ; /** @brief ArticuloComputo* ArticulosParaAsignar) ; //int CantidadACrear, bool PrimeraVez) */
		void AsignarProfeMueble (int Posicion) ; /** @brief Asignar Profesor a Articulo */
//		void AsignarProfePrestamos (int Posicion) ; /** @brief Asignar Profesor a Articulo */
		void AsignarProfePrestamo (int Posicion) ; /** @brief Asignar Profesor a Articulo */

		//Despreciacion
		
		void FechaDespreciar() ;
		
		//Verificar Fechas
		
		void VerificarFechasArticulos () ;
		
		// Para verificar si el vector esta vacio o no
		bool VerificarVectorProfesores () ; /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarVectorAdmin () ; /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarVectorEstudiantes () ; /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarVectorInformaciones () ; /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarArticulosCompu () ; /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarArticulosMueble() ;  /** @brief Para verificar si el vector esta vacio o no */
		bool VerificarArticulosPrestamo() ;  /** @brief Para verificar si el vector esta vacio o no */

		~Laboratorio () ;
};
#endif