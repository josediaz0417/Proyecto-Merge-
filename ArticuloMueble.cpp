
#include "ArticuloMueble.h"

// CONSTRUCTOR 
ArticuloMueble::ArticuloMueble() {
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// SETTERS
void ArticuloMueble::setMaterial(string Material) {
	this->Material = Material ;
}

void ArticuloMueble::AsignarAlArticulo(Profesor* Profesor) {
	this->ProfesorAsignado = Profesor ;
}

void ArticuloMueble::setCantidad(int Cantidad) {
	this->CantidadMueble = Cantidad ;
}

void ArticuloMueble::setDespreciacion(float Despreciacion) {
	this->ValorDespreciacionAnual = Despreciacion ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// GETTERS
string ArticuloMueble::getMaterial() {
	return this->Material ;
}

Profesor* ArticuloMueble::getProfesorAsignado() {
	return this->ProfesorAsignado ;
}

int ArticuloMueble::getCantidad() {
	return this->CantidadMueble ;
}

float ArticuloMueble::getDespreciacion() {
	return this->ValorDespreciacionAnual ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

float ArticuloMueble::Despreciacion() {
	
	return 1.3 ;
}


void ArticuloMueble::CrearMueble(ArticuloMueble* ArticuloACrear) {
	string Nombre, Material ;
	int Codigo, Cantidad ;
	float ValorArticulo ;

	system("cls") ;

	cout << "\n\tA Continuacion digite la informacion correspondiente \n\n" ;

	cout << "\nIngrese el nombre del articulo: \n" ;
	cin  >> Nombre ;
	
	cout << "\nIngrese el material del articulo: \n" ;
	cin  >> Material ;
	
	Codigo = common::ValidarEntero("\nIngrese el codigo del articulo \n") ;

	ValorArticulo = common::ValidarEntero("\nIngrese el valor del articulo \n") ;
	
	Cantidad = common::ValidarEntero("\nIngrese la cantidad del articulo que van a estar disponibles \n") ;
	
	ArticuloACrear->setIDNombre(Nombre) ;
	ArticuloACrear->setMaterial(Material) ; 
	ArticuloACrear->setCodigoArticulo(Codigo) ;
	ArticuloACrear->setCantidad(Cantidad) ; 
	ArticuloACrear->setValorArticuloInicial(ValorArticulo) ;
	ArticuloACrear->setValorActualArticulo(ValorArticulo) ;
	ArticuloACrear->setDespreciacion(this->ValorArticulo/10) ; 
	ArticuloACrear->setEstadoArticuloDeActivo(0) ;
	ArticuloACrear->setEstadoDeLimiteDeArticulos(0) ;
	ArticuloACrear->setEstadoDeAsignadoAProfesor(0) ;
	
	
	cout << "\nRegistro Exitoso !!! \n\n" ;
	system("pause") ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// DESTRUCTOR
ArticuloMueble::~ArticuloMueble() {
}