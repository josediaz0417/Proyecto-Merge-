
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
		void CrearArchivoInformacionCSV (vector <Informacion> Informaciones) ; /** @brief Manejo de Archivos Para Informacion del laboratorio*/
		void ModificarArchivoInformacionCSV (vector <Informacion> Informaciones) ; /** @brief Manejo de Archivos Para Informacion del laboratorio*/
		void ActualizarArchivoInformacionCSV (vector <Informacion>* Informaciones) ; /** @brief Manejo de Archivos Para Informacion del laboratorio*/
		void MostrarArchivoInformacionCSV (vector <Informacion>* Informaciones) ; /** @brief Manejo de Archivos Para Informacion del laboratorio*/
		void CargarArchivoInformacionCSV (vector <Informacion>* Informaciones) ; /** @brief Manejo de Archivos Para Informacion del laboratorio*/

		// Manejo de Archivos Para Estudiante del laboratorio
		void CrearArchivoEstudianteCSV (vector <Estudiante> Estudiantes) ; /** @brief Manejo de Archivos Para Estudiante del laboratorio*/
		void ModificarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ; /** @brief Manejo de Archivos Para Estudiante del laboratorio*/
		void ActualizarArchivoEstudianteCSV (vector <Estudiante> Estudiantes) ; /** @brief Manejo de Archivos Para Estudiante del laboratorio*/
		void MostrarArchivoEstudianteCSV (vector <Estudiante>* Estudiantes) ; /** @brief Manejo de Archivos Para Estudiante del laboratorio*/
		void CargarArchivoEstudianteCSV (vector <Estudiante>& Estudiantes) ; /** @brief Manejo de Archivos Para Estudiante del laboratorio*/

		// Manejo de Archivos Para Profesor del laboratorio
		void CrearArchivoProfesorCSV (vector <Profesor> Profesores) ; /** @brief Manejo de Archivos Para Profesor del laboratorio*/
		void ModificarArchivoProfesorCSV (vector <Profesor>* Profesores) ; /** @brief Manejo de Archivos Para Profesor del laboratorio*/
		void ActualizarArchivoProfesorCSV (vector <Profesor> Profesores) ; /** @brief Manejo de Archivos Para Profesor del laboratorio*/
		void MostrarArchivoProfesorCSV (vector <Profesor>* Profesores) ; /** @brief Manejo de Archivos Para Profesor del laboratorio*/
		void CargarArchivoProfesorCSV (vector <Profesor>* Profesores) ; /** @brief Manejo de Archivos Para Profesor del laboratorio*/
		
		// Manejo de Archivos Para Articulo de Personal Administrativo del laboratorio
		void CrearArchivoAdminisCSV (vector <PersonalAdmi> PersonalAdm) ; /** @brief Manejo de Archivos Para Articulo de Personal Administrativo del laboratorio*/
		void CargarArchivoAdminisCSV (vector <PersonalAdmi>* PersonalAdm) ; /** @brief Manejo de Archivos Para Articulo de Personal Administrativo del laboratorio*/
		
		// Manejo de Archivos Para Articulo de prestamo del laboratorio
		void CrearArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ; /** @brief Manejo de Archivos Para Articulo de prestamo del laboratorio*/
		void ModificarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ; /** @brief Manejo de Archivos Para Articulo de prestamo del laboratorio*/
		void ActualizarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ; /** @brief Manejo de Archivos Para Articulo de prestamo del laboratorio*/
		void MostrarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;/** @brief Manejo de Archivos Para Articulo de prestamo del laboratorio*/
		//vector <int> CargarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo> ArticulosParaPrestar) ;
		vector <int> CargarArchivoArticuloDePrestamoCSV (vector <ArticuloDePrestamo>* ArticulosParaPrestar) ;/** @brief Manejo de Archivos Para Articulo de prestamo del laboratorio*/
		
		// Manejo de Archivos para Articulos de Computo del Laboratorio 
		void CrearArchivoArticuloComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ; /** @brief Manejo de Archivos para Articulos de Computo del Laboratorio */
		vector <int> CargarArchivoArticuloComputoCSV (vector <ArticuloComputo>* ArticulosParaComputo) ; /** @brief Manejo de Archivos para Articulos de Computo del Laboratorio */
		void CargarArticuloComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ; /** @brief Manejo de Archivos para Articulos de Computo del Laboratorio */
		void ActualizarComputoCSV (vector <ArticuloComputo> ArticulosParaComputo) ; /** @brief Manejo de Archivos para Articulos de Computo del Laboratorio */

		// Manejo de Archivos para Articulos de Mueble del Laboratorio
		void CrearArchivoArticuloMuebleCSV (vector <ArticuloMueble> ArticulosParaMueble) ; /** @brief Manejo de Archivos para Articulos de Mueble del Laboratorio */
		vector <int> CargarArchivoArticuloMuebleCSV (vector <ArticuloMueble>* ArticulosParaMueble) ; /** @brief Manejo de Archivos para Articulos de Mueble del Laboratorio */
		void ActualizarMuebleCSV (vector <ArticuloMueble> ArticulosParaMueble) ; /** @brief Manejo de Archivos para Articulos de Mueble del Laboratorio */

		
		//Crear archivo Fechas y manejo de archivos fechas
		
		void CrearArchivoFechas (vector <ArticuloComputo> ArticulosComp) ; /** @brief Crear archivo Fechas y manejo de archivos fechas */
		void CargarArchivoFechasCSV(vector <ArticuloComputo>* FechasDeUso) ; /** @brief Crear archivo Fechas y manejo de archivos fechas */
		void ActualizarArchivoFechas (vector <ArticuloComputo> ArticulosComp) ; /** @brief Crear archivo Fechas y manejo de archivos fechas */
		
		// Funcion para Cambiar de string -> int
		long CambioStringALong (string Temporal) ; /** @brief Funcion para Cambiar de string -> int */

		// Archivo para historial de prestamos
		
		~ManejoDeArchivo () ;
};
#endif
