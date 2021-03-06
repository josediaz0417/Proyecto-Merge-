
#include "ArticuloComputo.h"

// CONSTRUCTOR
ArticuloComputo::ArticuloComputo() {
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

// SETTERS
void ArticuloComputo::setIDMarca(string IDMarca) {
	this->IDMarca = IDMarca ;
}

void ArticuloComputo::setDespreciacion(float Despreciacion) {
	this->ValorDespreciacionAnual = Despreciacion ;
}

void ArticuloComputo::AsignarAlArticulo(Profesor* Profesor) {
	this->ProfesorAsignado = Profesor ;
}

void ArticuloComputo::setCantidad(int Cantidad) {
	this->CantidadDisponibles = Cantidad ;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

// GETTERS
string ArticuloComputo::getIDMarca() {
	return this->IDMarca ;
}

Profesor* ArticuloComputo::getProfesor() {
	return this->ProfesorAsignado ;
}

int ArticuloComputo::getCantidad() {
	return this->CantidadDisponibles ;
}

float ArticuloComputo::getDespreciacion() {
	return this->ValorDespreciacionAnual ; 
}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

float ArticuloComputo::Despreciacion () {
//	int Hoy = 2019 ; 
//	int AnioActual = this->FechaActual()->tm_year+1900 ; 
//	for (int i=AnioActual ; i<=AnioActual+10 ; i++) {
//		if (this->ValorArticulo != 0) {
//			this->ValorDespreciacionAnual = this->ValorArticulo / 10 ;
//			this->ValorArticulo -= this->ValorDespreciacionAnual ;
//		}
//	} 
//	
//	return this->ValorDespreciacionAnual ;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////


void ArticuloComputo::CrearComputo(ArticuloComputo* ComputoACrear) {

	time_t FechaActual ; 
	time(&FechaActual) ;
	ctime(&FechaActual) ;
	
	struct tm* MiFecha = localtime(&FechaActual) ;
	
	string Nombre, Marca ;
	int Codigo, Cantidad ;
	float ValorArticulo ;

	system("cls") ;

	cout << "\n\tA Continuacion digite la informacion correspondiente \n\n" ;

	cout << "\nIngrese el nombre del articulo: \n" ;
	cin  >> Nombre ;
	
	cout << "\nIngrese la Marca del articulo: \n" ;
	cin  >> Marca ;
	
	Codigo = common::ValidarEntero("\nIngrese el codigo del articulo \n") ;

	ValorArticulo = common::ValidarEntero("\nIngrese el valor del articulo \n") ;
	
	Cantidad = common::ValidarEntero("\nIngrese la cantidad del articulo que van a estar disponibles \n") ;
	
	ComputoACrear->setIDNombre(Nombre) ;
	ComputoACrear->setIDMarca(Marca) ; 
	ComputoACrear->setCodigoArticulo(Codigo) ;
	ComputoACrear->setCantidad(Cantidad) ; 
	ComputoACrear->setValorArticuloInicial(ValorArticulo) ;
	ComputoACrear->setValorActualArticulo(ValorArticulo) ;
	ComputoACrear->setDespreciacion(this->ValorArticulo/10) ; 
	ComputoACrear->setEstadoArticuloDeActivo(0) ;
	ComputoACrear->setEstadoDeLimiteDeArticulos(0) ;
	ComputoACrear->setEstadoDeAsignadoAProfesor(0) ;
	MiFecha->tm_year += 1900 ;
	ComputoACrear->AsignarFecha(MiFecha) ; 
	
	cout << "\nRegistro Exitoso !!! \n\n" ;
	system("pause") ;

}


/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

// DESTRUCTOR
ArticuloComputo::~ArticuloComputo() {
}
