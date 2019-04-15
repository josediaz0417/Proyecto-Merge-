
#include "Estudiante.h"

// CONSTRUCTOR
Estudiante::Estudiante(){
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// SETTERS
void Estudiante::setCarrera(string Carrera) {
	this->Carrera = Carrera ;
}

void Estudiante::setCodigo(int Codigo) {
	this->Codigo = Codigo ;
}

void Estudiante::setSemestre(int Semestre) {
	this->Semestre = Semestre ;
}

void Estudiante::CorrerValorMulta(int ValorMultaAcomulada) {
	this->ValorMultaAcomulada = ValorMultaAcomulada ;
}

void Estudiante::setEstadoDeMulta(bool EstadoDeMulta) {
	this->EstadoDeMulta = EstadoDeMulta ;
}

void Estudiante::setEstadoDeEstudiante(bool EstadoDeEstudiante) {
	this->EstadoDeEstudiante = EstadoDeEstudiante ;
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// GETTERS
string Estudiante::getCarrera() {
	return this->Carrera ; 
}

int Estudiante::getCodigo() {
	return this->Codigo ;
}

int Estudiante::getSemestre() {
	return this->Semestre ;
}

int Estudiante::getValorMultaAcomulada() {
	return this->ValorMultaAcomulada ;
}

bool Estudiante::getEstadoDeMulta() {
	return this->EstadoDeMulta ;
}

bool Estudiante::getEstadoDeEstudiante() {
	return this->EstadoDeEstudiante ;
}



////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// Mostrar
void Estudiante::MostrarTodosLosArticulos() {
	
	
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// OTROS METODOS 
void Estudiante::CrearDatosDeObjetoEstudiante(Estudiante* EstudianteParaCrear, int Cantidad) {
	system("cls") ;
	string Nombre, Apellido, Email, Carrera ; 
	int Edad, Codigo, Semestre, ValorMultaAcomulada = 0 ;
	long Cedula, Telefono ;
	bool EstadoDeMulta = false ;
	bool EstadoDeEstudiante = false ;

	for (int i=0 ; i<Cantidad ; i++) {
		cout << "\nIngresa los datos correspondiente de estudiante \n" ;
		cout << "Ingrese su nombre: \n" ;
		cin  >> Nombre ;
		EstudianteParaCrear->setNombre(Nombre) ;
		
		cout << "Ingrese su apellido: \n" ;
		cin  >> Apellido ;
		EstudianteParaCrear->setApellido(Apellido) ;
		
		cout << "Ingrese su email: \n" ;
		fflush(stdin) ;
		cin  >> Email ;
		EstudianteParaCrear->setEmail(Email) ;
		
		cout << "Ingrese su carrera: \n" ;
		fflush(stdin) ;
		cin  >> Carrera ;
		EstudianteParaCrear->setCarrera(Carrera) ;
		
		fflush(stdin) ;
		Edad = common::ValidarEntero("Ingrese su edad: \n") ;
		EstudianteParaCrear->setEdad(Edad) ;
		
		
		Cedula = common::ValidarEntero("Ingrese su numero de cedula: \n" ) ;
		EstudianteParaCrear->setCedula(Cedula) ;
		
		Telefono = common::ValidarEntero("Ingrese su numero de telefono: \n") ;
		EstudianteParaCrear->setTelefono(Telefono) ;
		
		Codigo = common::ValidarEntero("Ingrese su nuevo numero de codigo: \n") ;
		EstudianteParaCrear->setCodigo(Codigo) ;
		
		Semestre = common::ValidarEntero("Ingrese el semestre que cursa: \n") ;
		EstudianteParaCrear->setSemestre(Semestre) ;
		
		EstudianteParaCrear->setEstadoDeMulta(EstadoDeMulta) ;
		EstudianteParaCrear->setEstadoDeEstudiante(EstadoDeEstudiante) ;
		EstudianteParaCrear->CorrerValorMulta(ValorMultaAcomulada) ;
		cout << "\nRegistro Exitoso \n\n" ;
		system("pause") ; 
	}
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// Asignar Al vector
void Estudiante::AsignarAlVector(ArticuloDePrestamo* ArticuloParaPrestar) {
	this->ArticulosPrestados.push_back(ArticuloParaPrestar) ;
}


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
// DESTRUCTOR
Estudiante::~Estudiante() {
}
