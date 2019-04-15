
#ifndef MANEJODEARCHIVO_H_
#define MANEJODEARCHIVO_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include "Laboratorio.h"
#include "ArticuloComputo.h"
#include "ArticuloMueble.h"


using namespace std ;

class ManejoDeArchivo {
	private :
		int PosicionDelVector ;  //

	public :
		ManejoDeArchivo () ;
		// Manejo de Archivos Para Informacion del laboratorio
		void CrearArchivoInformacionCSV (vector <Informacion> Informaciones) ;
		void ModificarArchivoInformacionCSV (vector <Informacion> Informaciones) ;
		void ActualizarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void MostrarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;
		void CargarArchivoInformacionCSV (vector <Informacion>* Informaciones) ;

		// Manejo de Archivos Para Estudiante del laboratorio
		void CrearArchivoEstudianteCSV (vector <Estudiante> Estudiantes) ;
		void ModificarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void ActualizarArchivoEstudianteCSV (vector <Estudiante> Estudiantes) ;
		void MostrarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ;
		void CargarArchivoEstudianteCSV (vector <Estudiante>& Estudiantes) ;

		// Manejo de Archivos Para Profesor del laboratorio
		void CrearArchivoProfesorCSV (vector <Profesor> Profesores) ;
		void ModificarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void ActualizarArchivoProfesorCSV (vector <Profesor> Profesores) ;
		void MostrarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		void CargarArchivoProfesorCSV (vector <Profesor>* Profesores) ;
		
		// Manejo de Archivos Para Articulo de Personal Administrativo del laboratorio
		void CrearArchivoAdminisCSV (vector <PersonalAdmi> PersonalAdm) ;
		void CargarArchivoAdminisCSV (vector <PersonalAdmi>* PersonalAdm) ;
		
		// Manejo de Archivos Para Articulo de prestamo del laboratorio
		void CrearArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		void ModificarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		void ActualizarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		void MostrarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		//vector <int> CargarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		vector <int> CargarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo>* ArticulosParaPrestar) ;
		
		// Manejo de Archivos para Articulos de Computo del Laboratorio 
		void CrearArchivoArticuloComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ; 
		vector <int> CargarArchivoArticuloComputoCSV (vector <ArticuloComputo>* ArticulosParaComputo) ;
		void CargarArticuloComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ;
		void ActualizarComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ;

		// Manejo de Archivos para Articulos de Mueble del Laboratorio
		void CrearArchivoArticuloMuebleCSV (vector <ArticuloMueble> ArticulosParaMueble) ; 
		vector <int> CargarArchivoArticuloMuebleCSV (vector <ArticuloMueble>* ArticulosParaMueble) ;
		void ActualizarMuebleCSV (vector <ArticuloMueble> ArticulosParaMueble) ;

		
		//Crear archivo Fechas y manejo de archivos fechas
		
		void CrearArchivoFechas (vector <ArticuloComputo> ArticulosComp) ;
		void CargarArchivoFechasCSV(vector <ArticuloComputo>* FechasDeUso) ;
		void ActualizarArchivoFechas (vector <ArticuloComputo> ArticulosComp) ;
		
		// Funcion para Cambiar de string -> int
		long CambioStringALong (string Temporal) ;

		// Archivo para historial de prestamos
		
		~ManejoDeArchivo () ;
};
#endif
