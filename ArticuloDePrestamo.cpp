
#include "ArticuloDePrestamo.h"

// CONSTRUCTOR
ArticuloDePrestamo::ArticuloDePrestamo() {
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

// SETTERS 
void ArticuloDePrestamo::setIDMarca(string IDMarca) {
	this->IDMarca = IDMarca ;
}

void ArticuloDePrestamo::setCantidadDeTipoDeArticulo(int CantidadDeArticulos)  {
	this->CantidadDeTipoDeArticulo = CantidadDeArticulos ;
}

void ArticuloDePrestamo::AsignarAProfesor(Profesor* Profesor) {
	this->ProfesorAsignado = Profesor ; 
}

void ArticuloDePrestamo::setDespreciacion(float Despreciacion){
	this->ValorDespreciacionAnual = Despreciacion ;
	
}
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

// GETTERS
string ArticuloDePrestamo::getIDMarca() {
	return this->IDMarca ; 
}


int ArticuloDePrestamo::getCantidadDeTipoDeArticulo() {
	return this->CantidadDeTipoDeArticulo ;
}

Profesor* ArticuloDePrestamo::getProfesor() {
	return this->ProfesorAsignado ; 
}

float ArticuloDePrestamo::getDespreciacion(){
	return this->ValorDespreciacionAnual ;
} 

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

float ArticuloDePrestamo::Despreciacion() { 
	float ValorDeArticulo, DespreciacionXMes ; 
	//ValorDeArticulo = ArticuloADespreciar.getValorArticuloInicial() ;
	DespreciacionXMes = ValorDeArticulo / 18 ; 
//	for (int i=1 ; )
//	ValorDeArticulo -=
//	ArticuloADespreciar.setValorActualArticulo()
	float a = 1.2 ;
	
	return a ; 
}


//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

ArticuloDePrestamo* ArticuloDePrestamo::ArticulosDePrestamoIniciales(ArticuloDePrestamo* ArticulosIniciales, int NroDeArticulo ) {
	string Nombre, Marca ;
	int Codigo, Cantidad ; 
	float Valor ;
	bool EstadoArticulo = false, EstadoDeLimiteCantidad = false, Asignacion = false ;
	
	if (NroDeArticulo == 0) {
		Nombre = "Control" ;
		Marca = "Samsumng" ;
		Codigo = 7818 ;
		Cantidad = 3 ;
		Valor = 2500 ;
		ArticulosIniciales->setIDNombre(Nombre) ;
		ArticulosIniciales->setIDMarca(Marca) ;
		ArticulosIniciales->setCodigoArticulo(Codigo) ;
		ArticulosIniciales->setCantidadDeTipoDeArticulo(Cantidad) ;
		ArticulosIniciales->setValorArticuloInicial(Valor) ;
		ArticulosIniciales->setEstadoArticuloDeActivo(EstadoArticulo) ;
		ArticulosIniciales->setEstadoDeLimiteDeArticulos(EstadoDeLimiteCantidad) ;
		ArticulosIniciales->setEstadoDeAsignadoAProfesor(Asignacion) ;
	}else {
		Nombre = "Guitarra" ;
		Marca = "Yamaha" ;
		Codigo = 1304 ;
		Cantidad = 2 ;
		Valor = 5000 ;
		ArticulosIniciales->setIDNombre(Nombre) ;
		ArticulosIniciales->setIDMarca(Marca) ;
		ArticulosIniciales->setCodigoArticulo(Codigo) ;
		ArticulosIniciales->setCantidadDeTipoDeArticulo(Cantidad) ;
		ArticulosIniciales->setValorArticuloInicial(Valor) ;
		ArticulosIniciales->setEstadoArticuloDeActivo(EstadoArticulo) ;
		ArticulosIniciales->setEstadoDeLimiteDeArticulos(EstadoDeLimiteCantidad) ;
		ArticulosIniciales->setEstadoDeAsignadoAProfesor(Asignacion) ;
	}
	return ArticulosIniciales ;
}

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

void ArticuloDePrestamo::CrearArticuloParaPrestamo(ArticuloDePrestamo* ArticuloParaCrear) {
	system("cls") ;
	string Nombre, Marca ;
	int Codigo, NroDeArticulos ; 
	float Valor ;
	bool EstadoArticulo = false, EstadoDeLimiteCantidad = false, Asignacion = false ;
	
	cout << "\n\tPor favor ingrese los datos correspondientes a articulos de prestamos \n\n" ;
	
	cout << "Ingrese el nombre del articulo: \n" ;
	cin  >> Nombre ;
	
	cout << "Ingrese la marca del articulo: \n"  ;
	cin  >> Marca ;
	
	Codigo = common::ValidarEntero("Ingrese el Codigo del articulo: \n" ) ;
	
	NroDeArticulos = common::ValidarEntero("Ingrese la cantidad de articulos que van a estar disponibles: \n" ) ;
		
	Valor = common::ValidarEntero("Ingrese el valor del articulo: \n" ) ;
		
	ArticuloParaCrear->setIDNombre(Nombre) ;
	ArticuloParaCrear->setIDMarca(Marca) ;
	ArticuloParaCrear->setCodigoArticulo(Codigo) ;
	ArticuloParaCrear->setCantidadDeTipoDeArticulo(NroDeArticulos) ;
	ArticuloParaCrear->setValorArticuloInicial(Valor) ;
	ArticuloParaCrear->setValorActualArticulo(Valor) ;
	ArticuloParaCrear->setDespreciacion(Valor/18) ;
	ArticuloParaCrear->setEstadoArticuloDeActivo(EstadoArticulo) ;
	ArticuloParaCrear->setEstadoDeLimiteDeArticulos(EstadoDeLimiteCantidad) ;
	ArticuloParaCrear->setEstadoDeAsignadoAProfesor(Asignacion) ;
	
	cout << "\nRegistro Exitoso \n\n" ;
}


//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

// DESTRUCTOR
ArticuloDePrestamo::~ArticuloDePrestamo() {
}
