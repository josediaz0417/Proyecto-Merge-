
#include "Informacion.h"

// CONSTRUCTOR
Informacion::Informacion() {

}

Informacion::Informacion(string NombreDeInfo, string ContenidoDeInfo) {
	this->NombreDeInfo = NombreDeInfo ;
	this->ContenidoDeInfo = ContenidoDeInfo ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// SETTERS
void Informacion::setNombreDeInfo(string NombreDeInfo) {
	this->NombreDeInfo = NombreDeInfo ;
}

void Informacion::setContenidoDeInfo(string ContenidoDeInfo) {
	this->ContenidoDeInfo = ContenidoDeInfo ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// GETTERS 
string Informacion::getNombreDeInfo() {
	return this->NombreDeInfo ;
}

string Informacion::getContenidoDeInfo() {
	return this->ContenidoDeInfo ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// OTROS METODOS
void Informacion::DatosIniciales(Informacion* InfoInicial, int NroAuxiliar) {
	string* Nombre = new string ;
	string* Contenido = new string ;
	
	if (NroAuxiliar == 0) {
		*Nombre = "Nombre o Tipo de informacion" ;
		*Contenido = "Contenido" ;
		InfoInicial->setNombreDeInfo(*Nombre) ;
		InfoInicial->setContenidoDeInfo(*Contenido) ;
	}else if (NroAuxiliar == 1) {
		// Hacer otro objeto de informacion
		*Nombre = "Nombre del Laboratorio" ;
		*Contenido = "Laboratorio Central de Tulua" ;
		InfoInicial->setNombreDeInfo(*Nombre) ;
		InfoInicial->setContenidoDeInfo(*Contenido) ;
	}else if (NroAuxiliar == 2) {
		// Hacer otro objeto de informacion
		*Nombre = "Direccion" ;
		*Contenido = "Carrera 13 #21-56 B/Ruben Cruz" ;
		InfoInicial->setNombreDeInfo(*Nombre) ;
		InfoInicial->setContenidoDeInfo(*Contenido) ;
	}
	// ELiminar datos en memoria dinamica
	delete Nombre ;
	delete Contenido ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////


void Informacion::CrearInformacionLabotatorio(Informacion* InformacionParaCrear) {
	
	string Nombre, Contenido ;
	
	system("cls") ;
	
	cout << "\nPor favor ingrese los datos correspondientes \n\n" ;
	
		
	cout << "Ingrese el tipo o nombre de la informacion que desea registrar \n" ;
	cin  >> Nombre ;
		
	cout << "Ingrese el contenido de la informacion que desea registrar \n" ;
	cin  >> Contenido ;		
		
	InformacionParaCrear->setNombreDeInfo(Nombre) ;
	InformacionParaCrear->setContenidoDeInfo(Contenido) ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// DESTRUCTOR
Informacion::~Informacion() {
}

