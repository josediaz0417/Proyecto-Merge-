#include "Laboratorio.h"

// CONSTRUCTOR
Laboratorio::Laboratorio() {
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// Mostrar todo el vector de profesores
void Laboratorio::getProfesores(){
	system("cls") ;
	for (int i=0 ; i<this->Profesores.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\n\tProfesor " << i+1 << "\n\n" ;
		cout << "Nombre :" << Profesores[i].getNombre() << "\n" ;
		cout << "Apellido :" << Profesores[i].getApellido() << "\n" ;
		cout << "Email: " << Profesores[i].getEmail() << "\n" ;
		cout << "Edad: " << Profesores[i].getEdad() << "\n" ;
		cout << "Cedula: " << Profesores[i].getCedula() << "\n" ;
		cout << "Telefono: " << Profesores[i].getTelefono() << "\n" ;
		cout << "Titulo Profesional: " << Profesores[i].getTituloProfesional() << "\n" ;
		cout << "Codigo: " << Profesores[i].getCodigo() << "\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	}
}

// Mostrar todo el vector de estudiantes
void Laboratorio::getEstudiantes() {
	system("cls") ;
	for (int i=0 ; i<this->Estudiantes.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\n\tEstudiante " << i+1 << "\n\n" ;
		cout << "Nombre :" << Estudiantes[i].getNombre() << "\n" ;
		cout << "Apellido :" << Estudiantes[i].getApellido() << "\n" ;
		cout << "Email: " << Estudiantes[i].getEmail() << "\n" ;
		cout << "Edad: " << Estudiantes[i].getEdad() << "\n" ;
		cout << "Cedula: " << Estudiantes[i].getCedula() << "\n" ;
		cout << "Telefono: " << Estudiantes[i].getTelefono() << "\n" ;
		cout << "Carrera: " << Estudiantes[i].getCarrera() << "\n" ;
		cout << "Codigo: " << Estudiantes[i].getCodigo() << "\n" ;
		cout << "Semestre: " << Estudiantes[i].getSemestre() << "\n" ;
		cout << "Valor la multa acomulada: " << Estudiantes[i].getValorMultaAcomulada() << "\n" ;
		cout << "Estado de multa :" << Estudiantes[i].getEstadoDeMulta()<< "\n" ;
		cout << "Estado de estudiante: " << Estudiantes[i].getEstadoDeEstudiante() << "\n\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	} 
}


// Mostrar todo el vector de personal administrativo
void Laboratorio::getPersonalAdmin(){
	system("cls") ;
	for (int i=0 ; i<this->PersonalAdmin.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\n\tPersonal Administrativo " << i+1 << "\n\n" ;
		cout << "Nombre :" << PersonalAdmin[i].getNombre() << "\n" ;
		cout << "Apellido :" << PersonalAdmin[i].getApellido() << "\n" ;
		cout << "Email: " << PersonalAdmin[i].getEmail() << "\n" ;
		cout << "Edad: " << PersonalAdmin[i].getEdad() << "\n" ;
		cout << "Cedula: " << PersonalAdmin[i].getCedula() << "\n" ;
		cout << "Telefono: " << PersonalAdmin[i].getTelefono() << "\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	}
}

void Laboratorio::getInformaciones() {
	system("cls") ;
	cout << "\n\tInformacion Disponible Del Laboratorio \n\n\n" ;
	for (int i=1 ; i<this->Informaciones.size() ; i++) { 
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << i << ". " << Informaciones[i].getNombreDeInfo() << ": \n" ;
		cout <<     Informaciones[i].getContenidoDeInfo() << "\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ; 
	}
}

void Laboratorio::getComputo() {
	system("cls") ;
	cout << "\n\tArticulos de computo disponibles \n\n\n" ; 
	for (int i=0 ; i<this->ArticulosComp.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\t Articulo #" << i+1 << "\n\n" ;
		cout << "1. Nombre: " << ArticulosComp[i].getIDNombre() << "\n" ;
		cout << "2. Marca: " << ArticulosComp[i].getIDMarca() << "\n" ;
		cout << "3. Cantidad: " << ArticulosComp[i].getCantidad() << "\n" ;
		cout << "4. Codigo: " << ArticulosComp[i].getCodigoArticulo() << "\n" ;
		cout << "4. Valor del Articulo: " << ArticulosComp[i].getValorArticuloInicial() << "\n" ; 
		cout << "5. Valor Actual: " << ArticulosComp[i].getValorActualArticulo() << "\n" ;
		cout << "6. Estado del Articulo: " << ArticulosComp[i].getEstadoArticuloDeActivo() << "\n" ;
		cout << "7. Disponibilidad: " << ArticulosComp[i].getEstadoDeLimiteDeArticulos() << "\n" ; // Este es para saber si aun hay articulos de este tipo
		cout << "8. Estado de Asigancion: " << ArticulosComp[i].getEstadoDeAsignadoAProfesor() << "\n" ;
		cout << "9. Valor de despreciacion: " << ArticulosComp[i].getDespreciacion() << "\n" ;
		cout << "10. Asignado al Profesor: " << ArticulosComp[i].getProfesor()->getNombre() << "\n" ;  
		cout << "    Codigo del Profesor: " << ArticulosComp[i].getProfesor()->getCodigo() << "\n" ;  
		cout << "11. Anio:" << ArticulosComp[i].getFecha()->tm_year << "\n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	}	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//
//void Laboratorio::getArticulosPrestamo() {
//	system("cls") ; 
//	cout << "\n\t Articulos de prestamo \n\n\n";
//	for(int i=0 ; i<this->ArticulosDisponibles.size() ; i++){
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
//		cout << "1. IDNombre: " << ArticulosDisponibles[i].getIDNombre() << "\n" ;
//		cout << "2. Codigo del articulo" << ArticulosDisponibles[i].getCodigoArticulo() << "\n" ;
//		cout << "3. Precio del articulo" << ArticulosDisponibles[i].getValorArticuloInicial() << "\n" ;
//		cout << "4. Precio actual del articulo" << ArticulosDisponibles[i].getValorActualArticulo() << "\n" ;
//		cout << "5. Estado del articulo activo" << ArticulosDisponibles[i].getEstadoArticuloDeActivo() << "\n" ;
//		cout << "6. Estado limite del articulo" << ArticulosDisponibles[i].getEstadoDeLimiteDeArticulos () << "\n" ;
//		cout << "7. Estado del articulo asignadoa un profesor" << ArticulosDisponibles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
//		cout << "8. ID de la marca" << ArticulosDisponibles[i].getIDMarca() << "\n" ;
//		cout << "9. Cantidad de tipo del articulo" << ArticulosDisponibles[i].getCantidadDeTipoDeArticulo() << "\n" ;
//		cout << "10. Valor despreciacion anual" << ArticulosDisponibles[i].getDespreciacion () << "\n" ;
//	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
//
//	}
//	
//	
//}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
void Laboratorio::getPrestamos() {
	system("cls") ;
	cout << ("\n\tArticulos De Prestamo \n\n\n") ;
	for (int i=0 ; i<this->ArticulosDisponibles.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\n\t Articulo #" << i+1 << "\n\n" ;
		cout << "1. Nombre: " << ArticulosDisponibles[i].getIDNombre() << "\n" ;
	 	cout << "2. Codigo: " << ArticulosDisponibles[i].getCodigoArticulo() << "\n" ;
	 	cout << "3. Marca: "  << ArticulosDisponibles[i].getIDMarca() << "\n" ;
	 	cout << "4. Cantidad: " << ArticulosDisponibles[i].getCantidadDeTipoDeArticulo() << "\n" ;
	 	cout << "5. Valor Articulo: " << ArticulosDisponibles[i].getValorArticuloInicial() << "\n" ;
	 	cout << "6. Valor Actual: " << ArticulosDisponibles[i].getValorActualArticulo() << "\n" ;
	 	cout << "7. Estado: " << ArticulosDisponibles[i].getEstadoArticuloDeActivo() << "\n" ;
	 	cout << "8. Estado Limite: " << ArticulosDisponibles[i].getEstadoDeLimiteDeArticulos() << "\n" ;
	 	cout << "9. Asignado al profesor: " << ArticulosDisponibles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
	 	cout << "10.Valor de despreciacion: " << ArticulosDisponibles[i].getDespreciacion() << "\n" ;
	 	cout << "11. Asignado al Profesor: " << ArticulosDisponibles[i].getProfesor()->getNombre() << "\n" ;  
		cout << "    Codigo del Profesor: " << ArticulosDisponibles[i].getProfesor()->getCodigo() << "\n" ;  
 		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	} 
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::getMuebles() {
	system("cls") ;
	cout << "\n\tArticulos de Mueble disponibles \n\n\n" ; 
	for (int i=0 ; i<this->ArticulosMuebles.size() ; i++) {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		cout << "\t Articulo #" << i+1 << "\n\n" ;
		cout << "1. Nombre: " << ArticulosMuebles[i].getIDNombre() << "\n" ;
		cout << "2. Material: " << ArticulosMuebles[i].getMaterial() << "\n" ;
		cout << "3. Cantidad: " << ArticulosMuebles[i].getCantidad() << "\n" ;
		cout << "4. Codigo: " << ArticulosMuebles[i].getCodigoArticulo() << "\n" ;
		cout << "4. Valor del Articulo: " << ArticulosMuebles[i].getValorArticuloInicial() << "\n" ; 
		cout << "5. Valor Actual: " << ArticulosMuebles[i].getValorActualArticulo() << "\n" ;
		cout << "6. Estado del Articulo: " << ArticulosMuebles[i].getEstadoArticuloDeActivo() << "\n" ;
		cout << "7. Disponibilidad: " << ArticulosMuebles[i].getEstadoDeLimiteDeArticulos() << "\n" ; // Este es para saber si aun hay articulos de este tipo
		cout << "8. Estado de Asigancion: " << ArticulosMuebles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
		cout << "9. Valor de despreciacion: " << ArticulosMuebles[i].getDespreciacion() << "\n" ;
		cout << "10. Asignado al Profesor: " << ArticulosMuebles[i].getProfesorAsignado()->getNombre() << "\n" ;  
		cout << "    Codigo del Profesor: " << ArticulosMuebles[i].getProfesorAsignado()->getCodigo() << "\n" ;  
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
// Cargar todos los archivos
void Laboratorio::CargarTodoslosArchivos() {
	ManejoDeArchivo CargarArchivos ;
	CargarArchivos.CargarArchivoEstudianteCSV(Estudiantes) ;
	CargarArchivos.CargarArchivoInformacionCSV(&Informaciones) ;
	CargarArchivos.CargarArchivoProfesorCSV(&Profesores) ; 
	CargarArchivos.CargarArchivoAdminisCSV(&PersonalAdmin) ;
	
	
	//////////////////////////////////////////////////////////////////////////////////
//	// Cargar y Asignarle los Profesores que tienen los articulos de Computo
//	vector <int> Tamanio ;  // Traspaso de codigos 
//	for (int i=0 ; i<CargarArchivos.CargarArchivoArticuloComputoCSV(&ArticulosComp).size() ; i++) {
//		Tamanio.push_back(CargarArchivos.CargarArchivoArticuloComputoCSV(&ArticulosComp)[i]) ;
//	}
//	
//	if(!this->ArticulosComp.empty()) {
//		cout << "Hola Hola Hola " << endl ; 
//		system("pause") ; 
//		for (int i=0 ; i<Tamanio.size() ;i+=2) {
//			int a = Tamanio[i] ;
//			int b = Tamanio[i+1] ; 
//			AccederProfesor(a, b) ;
//		}
//	}
//
//	CargarArchivos.CargarArticuloComputoCSV(this->ArticulosComp) ; 
//	system("pause") ; 
//	

	//////////////////////////////////////////////////////////////////////////////////
	// Cargar y Asignarle los Profesores que tienen los articulos de Mueble
	vector <int> TamanioMueble ;  // Traspaso de codigos 
	for (int i=0 ; i<CargarArchivos.CargarArchivoArticuloMuebleCSV(&ArticulosMuebles).size() ; i++) {
		TamanioMueble.push_back(CargarArchivos.CargarArchivoArticuloMuebleCSV(&ArticulosMuebles)[i]) ;
	}
//	cout << "Despues Muebles:" << this->ArticulosMuebles.size() << endl ;
//	system("pause") ; 
	if(!this->ArticulosMuebles.empty()) {
		for (int i=0 ; i<TamanioMueble.size() ;i+=2) {
			int a = TamanioMueble[i] ;
			int b = TamanioMueble[i+1] ; 
			AccederProfesorMueb(a, b) ;
		}
	}
	
	// Cargar y Asignarle los Profesores que tienen los articulos de Mueble
	vector <int> TamanioPrestamo ;  // Traspaso de codigos 
	for (int i=0 ; i<CargarArchivos.CargarArchivoArticuloDePrestamoCSV(&this->ArticulosDisponibles).size() ; i++) {
		TamanioPrestamo.push_back(CargarArchivos.CargarArchivoArticuloDePrestamoCSV(&this->ArticulosDisponibles)[i]) ;
	}

	if(!this->ArticulosDisponibles.empty()) {
		for (int i=0 ; i<TamanioPrestamo.size() ;i+=2) {
			int a = TamanioPrestamo[i] ;
			int b = TamanioPrestamo[i+1] ; 
			AccederProfesorArtPrestamo(a, b) ;
		}
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

int Laboratorio::MandarPosicionActual(int ClaseVector) { // ClaseVector = es el tipo de objeto que estamos trabajando
														 // si es 0 = vector de estudiantes, si es 1 = vector de profesores
														 // si es 2 = vector de informaciones, si es 3 = vector de administrativos 
														 // si es 4 = vector de computo , si es 5 = vector de muebles , si es 6 Articulos Prestamo
														 
											
	// Claves para los vectores
	map< string, int > Vectores ; 
	Vectores.insert(pair< string, int> ("Estudiantes", 0)) ; 
	Vectores.insert(pair< string, int> ("Profesores", 1)) ; 
	Vectores.insert(pair< string, int> ("Informaciones", 2)) ; 
	Vectores.insert(pair< string, int> ("Personal administrativo", 3)) ; 
	Vectores.insert(pair< string, int> ("Articulos de Computo", 4)) ; 
	Vectores.insert(pair< string, int> ("Articulos de Mueble", 5)) ; 
	Vectores.insert(pair< string, int> ("Articulos Prestamo", 6)) ;
	
	if (Vectores["Estudiantes"] == ClaseVector) {
		return this->Estudiantes.size() ; 
	}else if (Vectores["Profesores"] == ClaseVector) {
		return this->Profesores.size() ;
	}else if (Vectores["Informaciones"] == ClaseVector) {
		return this->Informaciones.size() ;
	}else if (Vectores["Personal administrativo"] == ClaseVector) {
		return this->PersonalAdmin.size() ;
	}else if (Vectores["Articulos de Computo"] == ClaseVector) {
		return this->ArticulosComp.size() ;
	}else if (Vectores["Articulos de Mueble"] == ClaseVector) {
		return this->ArticulosMuebles.size() ;
	}else if (Vectores["Articulos Prestamo"] == ClaseVector){
		return this->ArticulosDisponibles.size() ;
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// Crear objetos profesores y agregarlos al vector de profesores 
void Laboratorio::AgregarAlVectorProfesores(int Cantidad) {
	Profesor* ProfesoresParaCrear = new Profesor ;
	for (int i=0 ; i<Cantidad ; i++) {
		ProfesoresParaCrear->CrearDatosDeProfesor(ProfesoresParaCrear) ;
		this->Profesores.push_back(*ProfesoresParaCrear) ;
	}
	
	ManejoDeArchivo ParaProfesores ;
	ParaProfesores.CrearArchivoProfesorCSV(Profesores) ;
	
	delete ProfesoresParaCrear ;
}

// Funcion para crear estudiantes, agregar al vector de estudiantes y crear archivo
void Laboratorio::AgregarAlVectorEstudiantes(int Cantidad) {
	Estudiante* EstudiantesParaCrear = new Estudiante ;
	for (int i=0 ; i<Cantidad ; i++) {
		EstudiantesParaCrear->CrearDatosDeObjetoEstudiante(EstudiantesParaCrear, Cantidad) ;
		this->Estudiantes.push_back(*EstudiantesParaCrear) ;
	}
	
	ManejoDeArchivo ParaEstudiantes ;
	ParaEstudiantes.CrearArchivoEstudianteCSV(Estudiantes) ;
	if (this->Estudiantes.size() != 1) {
		ParaEstudiantes.ActualizarArchivoEstudianteCSV(Estudiantes) ; 	
	}
	
	delete EstudiantesParaCrear ;
}


// Crear objetos de informaciones y agregarlos al vector de informacion
void Laboratorio::AgregarAlVectorInformaciones(int Cantidad) {
	Informacion* InformacionParaCrear = new Informacion ;
	
	if (VerificarVectorInformaciones() == true ) {
		for (int i=0 ; i<Cantidad ; i++) {
			InformacionParaCrear->DatosIniciales(InformacionParaCrear, i) ;
			this->Informaciones.push_back(*InformacionParaCrear) ;
		}
	}else {
		for (int i=0 ; i<Cantidad ; i++) {
			InformacionParaCrear->CrearInformacionLabotatorio(InformacionParaCrear) ;
			this->Informaciones.push_back(*InformacionParaCrear) ;
		}
		cout << "\nRegistro exitoso \n\n" ; 
		system("pause") ;	
	}
	
	ManejoDeArchivo ManejoDeInformacion ;
	ManejoDeInformacion.CrearArchivoInformacionCSV(Informaciones)  ;
	
	delete InformacionParaCrear ;
}


// Crear objetos de personal administrativo y agregarlos al vector de personal
void Laboratorio::AgregarAlVectorPersonalAdmin(int Cantidad) {
	PersonalAdmi* PersonalParaCrear = new PersonalAdmi ;
	for (int i=0 ; i<Cantidad ; i++) {
		PersonalParaCrear->CrearPersonal(PersonalParaCrear) ;
		this->PersonalAdmin.push_back(*PersonalParaCrear) ;
	}
	
	ManejoDeArchivo ManejoAdministra ;
	cout << "Datos" << endl ;
	cout << this->PersonalAdmin[0].getNombre() << endl ;
	system("pause") ; 
	ManejoAdministra.CrearArchivoAdminisCSV(this->PersonalAdmin) ;
	 
	delete PersonalParaCrear ;
}
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AgregarAlVectorComputo(int Cantidad) {
	ArticuloComputo* ComputoACrear = new ArticuloComputo ;
	for (int i=0 ; i<Cantidad ; i++) {
		ComputoACrear->CrearComputo(ComputoACrear) ;
		this->ArticulosComp.push_back(*ComputoACrear) ;  // Agregar al vector
			
		AsignarProfesorArticulo(MandarPosicionActual(4)) ; // Funcion de asignar
	}
	cout << "Hola" << endl ; 
	ManejoDeArchivo ManejoDeComputo ;
	ManejoDeComputo.CrearArchivoArticuloComputoCSV(ArticulosComp) ; 
		
	delete ComputoACrear ; 
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AgregarAlVectorMueble(int Cantidad) {
	ArticuloMueble* MuebleCrear = new ArticuloMueble ;
	for (int i=0 ; i<Cantidad ; i++) {
		MuebleCrear->CrearMueble(MuebleCrear) ;
		this->ArticulosMuebles.push_back(*MuebleCrear) ;  // Agregar al vector
		
		AsignarProfeMueble(MandarPosicionActual(5)) ; // Funcion de asignar
	}

//	cout << this->ArticulosComp.size() << endl ;
//	cout << "-------------------" << endl ;
//	system("pause") ;
	ManejoDeArchivo ManejoDeMueble ;
	ManejoDeMueble.CrearArchivoArticuloMuebleCSV(this->ArticulosMuebles) ; 
//	cout << "-------------------" << endl ;
//	cout << this->ArticulosComp[1].getIDNombre() << endl ;
//	cout << this->ArticulosComp[1].getProfesor()->getNombre() << endl ;
//	system("pause") ;
	ManejoDeMueble.ActualizarMuebleCSV(this->ArticulosMuebles) ;
	
	
	delete MuebleCrear ; 
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AgregarAlVectorPrestamo(int Cantidad){
	ArticuloDePrestamo* PrestamoCrear = new ArticuloDePrestamo ;
	
	for (int i = 0; i<Cantidad ; i++){
		PrestamoCrear->CrearArticuloParaPrestamo(PrestamoCrear);
		this->ArticulosDisponibles.push_back(*PrestamoCrear);
		
		AsignarProfePrestamo(MandarPosicionActual(6)) ;
	}
	
	ManejoDeArchivo ManejoDePrestamo ;
	ManejoDePrestamo.CrearArchivoArticuloDePrestamoCSV(this->ArticulosDisponibles) ;		
	
	delete PrestamoCrear ;
		 
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AgregarFecha(int Posicion, int Dia, int Mes, int Anio) {
	this->Fechas.push_back(Posicion) ;
	this->Fechas.push_back(Dia) ; // 0=Dia
	this->Fechas.push_back(Mes) ; // 1=Mes
	this->Fechas.push_back(Anio) ; // 2=Anio
	
}
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AgregarAlVectorDisponibles(int Cantidad) {
	ArticuloDePrestamo* DiligenciarPrestamo = new ArticuloDePrestamo ;
	for (int i=0 ; i<Cantidad ; i++){
		DiligenciarPrestamo->CrearArticuloParaPrestamo(DiligenciarPrestamo);
		this->ArticulosDisponibles.push_back(*DiligenciarPrestamo) ; //Agregar Al Vector
		
		AsignarProfePrestamo(MandarPosicionActual(6)) ; //Funcion de asignacion
	}
	
	ManejoDeArchivo ManejoDePrestamo ;
	ManejoDePrestamo.CrearArchivoArticuloDePrestamoCSV(this->ArticulosDisponibles) ;
	
	delete DiligenciarPrestamo ;
}
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

// Modificar datos de informacion del Laboratorio
void Laboratorio::ModificarDatosDelVectorInformaciones() {

	getInformaciones() ;
	
	bool* Salir = new bool (false) ;
	bool* SalirAux = new bool (false) ;
	int Opcion, DecisionAux ;
	string DatoAuxiliar ; 
	
	Opcion = common::ValidarEntero("Ingrese el valor asignado a la informacion que desea modificar \n") ;
	
	for (int i=1 ; i<Informaciones.size() ; i++) { // Posicion 0 = Cabeceras			
		do {	
			if (Opcion == i) {
				system("cls") ;
				
				do { // Ciclo para repetir solo desde que desea cambiar por si introduce datos equivocados
					system("cls") ; 
					cout << "Por favor especifique que desea modificar de la informacion \n" ;
					cout << "1. " << Informaciones[i].getNombreDeInfo() << "\n" ;
					cout << "2. " << Informaciones[i].getContenidoDeInfo() << "\n" ;
				
					Opcion = common::ValidarEntero("\nIngrese el campo el desea modificar \n") ;
					
					if ((Opcion >=1) && (Opcion <=2)) { // Evaluar si esta en las opciones mostradas para evitar hacer un switch
						cout << "\nNota:  0=no ; 1=si \n" ;
						DecisionAux = common::ValidarEntero("Estas seguro que desea modificar esta informacion?? \n") ;
						
						if (DecisionAux == 1 ) {	
							switch (Opcion) {
								case 1 : { // Modificar nombre del dato correspondiente
									cout << "\nIngrese el nuevo nombre correspondiente: \n" ;
									cin  >>  DatoAuxiliar ;
									
									Informaciones[i].setNombreDeInfo(DatoAuxiliar) ;
									
									cout << "\n\nModificacion Exitosa !!! \n" ;
									system("pause") ;
									
									*Salir = true ;
									*SalirAux = true ;
									break;
								}
								
								case 2 : { // Modificar Contenido del dato correspondiente
									cout << "\nIngrese el nuevo contenido correspondiente: \n" ;
									cin  >>  DatoAuxiliar ;
									
									Informaciones[i].setContenidoDeInfo(DatoAuxiliar) ;
									
									cout << "\n\nModificacion Exitosa !!! \n\n" ;
									system("pause") ;
									
									*Salir = true ;
									*SalirAux = true ;
									break;
								}
								
								default : { // Opcion Incorrecta
									cout << "\nOpcion Incorrecta \n\n" ;
									system("pause") ;
									break;
								} 
							}
						}else if (DecisionAux == 0) { // Evalua si la opcion es 0 para mostrarle de nuevo las opciones permitidas
							cout << "\nA continuacion te dirigiremos de nuevo al proceso anterior \n" ;
							system("pause") ;
							*SalirAux = true ;
							*Salir = true ;
							ModificarDatosDelVectorInformaciones () ;	
						}else { // Opcion incorrecta de opciones 0 y 1 (es de si esta seguro o no de modificar algo)
							cout << "\nVuelve a intentarlo \n" ;
							cout << "Opcion Invalida \n\n" ;
							system("pause") ;
						}
					}else { // Opcion invalida
						cout << "\nOpcion Incorrecta \n" ;
						system("pause") ;
						system("cls") ;
					}
				}while(!*SalirAux) ;
				
			}else { // No encontro nada, entonces salir del bucle
				*Salir = true ; 
			}
		}while (!*Salir) ;
	}

	
	// Mostrar mensaje si no encontro nada
	if (*SalirAux == false) {
		system("cls") ;
		cout << "\nNo se encontro el dato \n" ;
		system("pause") ;
	}
	
	ManejoDeArchivo ManejoDeInformacion ;
	ManejoDeInformacion.CrearArchivoInformacionCSV(Informaciones)  ;
}

 
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


void Laboratorio::ModificarDatosBasicosProfe(int Posicion) {
	
	int Campo ;
	char NombreCampo[512] ;
	
	
	AccederProfesorPosicion(Posicion) ;
		
	cout << "////////A continuacion podras moficar campos basicos de tu informacion////////////////////////\n" ;
	cout << "////////Usted esta autorizado para modificar los siguientes datos : Email, Edad, Telefono/////\n\n" ;
	
		
	Campo = common::ValidarEntero("Elija el campo que desea modificar \n") ;
		
	switch(Campo) {
		case 3 : { // EMail
			cout << "A Continuacion ingrese el nuevo Email: \n" ;
			cin  >> NombreCampo ; 
			
			this->Profesores[Posicion-1].setEmail(NombreCampo) ;
			
			cout << "\nSe ha Modifcado Exitosamente \n\n" ;
			system("pause") ;
			 
			break;
		}
			
		case 4 : { // Edad
			cout << "A Continuacion ingrese la nueva edad: \n" ;
			cin  >> NombreCampo ;
			
			this->Profesores[Posicion-1].setEdad(atof(NombreCampo)) ;
 			
			cout << "\nSe ha Modifcado Exitosamente \n\n" ;
			system("pause") ;
			
			break;
		}
			
		case 6 :{ // Telefono
			cout << "A Continuacion ingrese el numero numero telefonico: \n" ;
			cin  >> NombreCampo ;
			
			this->Profesores[Posicion-1].setTelefono(atof(NombreCampo)) ;
			
			cout << "\nSe ha Modifcado Exitosamente \n\n" ;
			system("pause") ;
			
			break;
		}
			
		case 1 : { // Nombre
		}
			
		case 2 : { // Apellido 
		}
			
		case 5 : { // Cedula 
		}
			
		case 7 : { // Codigo
		}
			
		case 8 : { // Titulo Profesional
			
			cout << "\n\nUsted no esta Autorizado para modificar este campo \n" ;
			cout << "Por favor dirigase al personal administrativo para poder modificar estos datos \n\n" ;
			system("pause") ; 
				
			ModificarDatosBasicosProfe(Posicion) ;
				
			break;
		}
			
		default : { // Opcion Incorrecta
			cout << "\nHas elegido una campo incorrecto \n\n" ;
			system("pause") ;
			
			ModificarDatosBasicosProfe(Posicion) ;
				
			break;
		}
	}
	ManejoDeArchivo ActualizarCSV ;
	ActualizarCSV.ActualizarArchivoProfesorCSV(this->Profesores) ;
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::ModificarDatosProfe(int Posicion){
	
	
	char NombreOpcion[512] ;
	
	
	Posicion = common::ValidarEntero("Elija el campo que desea modificar: ") ;
		
	switch(Posicion) {
		
		case 1 : { // Nombre
			cout << "A continuacion ingrese el nuevo nombre: \n" ;
			cin >> NombreOpcion ;
		
			this->Profesores[Posicion-1].setNombre(NombreOpcion) ;
		
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
		
			break ;
		}
		
		case 2 : { // Apellido 
			cout << "A continuacion ingrese el nuevo apellido : \n" ;
			cin >> NombreOpcion ;
		
			this->Profesores[Posicion-1].setApellido(NombreOpcion) ;
		
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
		
			break ;
		}
		
		case 3 : { // EMail
			cout << "A Continuacion ingrese el nuevo Email: \n" ;
			cin  >> NombreOpcion ; 
			
			this->Profesores[Posicion-1].setEmail(NombreOpcion) ;
			
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			 
			break;
		}
			
		case 4 : { // Edad
			cout << "A Continuacion ingrese la nueva edad: \n" ;
			cin  >> NombreOpcion ;
			
			this->Profesores[Posicion-1].setEdad(atof(NombreOpcion)) ;
 			
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			
			break;
		}
		
		case 5 : { // Cedula 
			cout << "A continuacion ingrese un nuevo numero de cedula : \n" ;
			cin >> NombreOpcion ;
		
			this->Profesores[Posicion-1].setCedula(atof(NombreOpcion)) ;
		
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
 			break ;
		}
			
		case 6 :{ // Telefono
			cout << "A Continuacion ingrese el numero telefonico: \n" ;
			cin  >> NombreOpcion ;
			
			this->Profesores[Posicion-1].setTelefono(atof(NombreOpcion)) ;
			
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			
			break;
		}
			
			
		case 7 : { // Codigo
			cout << "A continuacion ingrese el nuevo codigo: \n" ;
			cin >> NombreOpcion ;
		
			this->Profesores[Posicion-1].setCodigo(atof(NombreOpcion)) ;
		
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
		
			break ;
		}
			
		case 8 : { // Titulo Profesional
			cout << "A continuacion ingrese el nuevo titulo profesional: \n" ;
			cin >> NombreOpcion ;
			
			this->Profesores[Posicion-1].setTituloProfesional(NombreOpcion) ;
			
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
				
			break;
		}
			
		default : { // Opcion Incorrecta
			cout << "\nHas elegido una campo incorrecto \n\n" ;
			system("pause") ;
			break;
		}
	}
	ManejoDeArchivo ActualizarCSV ;
	ActualizarCSV.ActualizarArchivoProfesorCSV(this->Profesores) ;
	
}


/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::ModificarDatosEstudiante(int Posicion){
	char NombreOpcion [512] ;
	int Campo ;
	cout << "La informacion es \n" ;
	AccederAUnEstudiante(Posicion) ;
	
	Campo = common::ValidarEntero("Elija un campo a modificar: \n") ;
	
	switch(Campo){
		case 1 : {
			cout << "A continuacion ingrese el nuevo nombre";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setNombre(NombreOpcion);
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 2 : {
			cout << "A continuacion ingrese el nuevo apellido";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setApellido(NombreOpcion);
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 3 : {
			cout << "A continuacion ingrese el nuevo email";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setEmail(NombreOpcion);
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 4 : {
			cout << "A continuacion ingrese la nueva edad";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setEdad(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 5 : {
			cout << "A continuacion ingrese la nueva cedula";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setCedula(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 6 : {
			cout << "A continuacion ingrese su nuevo numero de telefono";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setTelefono(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 7 : {
			cout << "A continuacion ingrese la nueva carrera";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setCarrera(NombreOpcion);
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 8 : {
			cout << "A continuacion ingrese su nuevo codigo";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setCodigo(atof(NombreOpcion));
			break;
		}
		case 9 :{
			cout << " A continuacion ingrese su nuevo semestre" ;
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setSemestre(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 10 : {
			cout << "A continuacion ingrese el valor de la multa a modificar";
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].CorrerValorMulta(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 11 : {
			cout << " A continuacion modifique el estado de multa del estudiante" ;
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setEstadoDeMulta(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}
		case 12 : {
			cout << "A continuacion modifique el estado del estudiante" ;
			cin>>NombreOpcion;
			this->Estudiantes[Posicion-1].setEstadoDeEstudiante(atof(NombreOpcion));
			cout << "\nACTUALIZACION EXITOSA \n\n" ;
			break;
		}	
		default : { // Opcion Incorrecta
			cout << "\nHas elegido una campo incorrecto \n\n" ;
			system("pause") ;
			break;
	
		}
	}
	ManejoDeArchivo ActualizarCSV ;
	ActualizarCSV.ActualizarArchivoEstudianteCSV(this->Estudiantes) ;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::ModificarDatosDelVectorComputo() {
	
	system("cls") ;
	int PosicionACambiar ;
	char Campo[512] ; 
	
	getComputo() ; 
		
	PosicionACambiar = common::ValidarEntero("Elija el articulo que desea modificar \n") ;
	
	cout << PosicionACambiar << endl ;
	for(int i=0 ; i<this->ArticulosComp.size() ; i++) {
		if (PosicionACambiar == i+1) {
			cout << "\n\tLos datos existentes del articulo son los siguientes \n" ;
			system("pause") ;
				
			AccederAComputo(PosicionACambiar) ;
			
			cout << "\nQue Campo de la informacion del articulo desea modificar \n\n" ;
				
			PosicionACambiar = common::ValidarEntero("Elija el campo que desea modificar \n") ;
				
			switch(PosicionACambiar) {
				case 1 : { // IDNombre
					cout << "\nIngrese el nuevo nombre del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setIDNombre(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
											
					break;
				}
					
				case 2 : { // Marca
					cout << "\nIngrese la nueva marca del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setIDMarca(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ; 
					break;
				}
					
				case 3 : { // Cantidad de articulos
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setCantidad(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 4 : { // Codigo
					cout << "\nIngrese el nuevo codigo del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setCodigoArticulo(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
				
				case 5 : { // Valor de Inicial Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setValorArticuloInicial(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 6 : { // Valor Actual del Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setValorActualArticulo(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 7 : { // Estado del Articulo
					cout << "\nIngrese el estado del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setEstadoArticuloDeActivo(atof(Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 8 : { // Estado de Disponibilidad
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setEstadoDeLimiteDeArticulos(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 9 : { // Estado de Asignacion
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosComp[i].setEstadoDeAsignadoAProfesor(atof(Campo)) ;
					
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfesorArticulo(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 10 : { // Valor de Despreciacion
					
					cout << "\n\nNo puedes modificar este campo \n" ;
					cout << "Esta opcion es manejada de acuerdo al tipo de articulo \n" ;
					system("pause") ; 
					
					break;
				}
					
				case 11 : { // Asignado
				
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
									
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfesorArticulo(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				default : { // Opcion Incorrecta
					cout << "\nHas elegido una campo incorrecto \n\n" ;
					system("pause") ;
	
					ModificarDatosDelVectorComputo() ; 
						
					break;
				}
			}
		}else {
			cout << "\n\n\tNo existe ese articulo por favor ingrese un valor valido \n\n" ;
			system("pause") ;
			
			ModificarDatosDelVectorComputo() ; 
		}
	}
	
	ManejoDeArchivo ActualizarComputo ;
	ActualizarComputo.ActualizarComputoCSV(ArticulosComp) ; 
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::ModificarDatosMueble(int Posicion) {
	
	system("cls") ;
	char Campo[512] ; 
	
	
	for(int i=0 ; i<this->ArticulosMuebles.size() ; i++) {
		if (Posicion == i+1) {
			cout << "\n\tLos datos existentes del articulo son los siguientes \n" ;
			system("pause") ;
				
			AccederAMueble(Posicion) ;
			
			cout << "\nQue Campo de la informacion del articulo desea modificar \n\n" ;
				
			Posicion = common::ValidarEntero("Elija el campo que desea modificar \n") ;
				
			switch(Posicion) {
				case 1 : { // IDNombre
					cout << "\nIngrese el nuevo nombre del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setIDNombre(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
											
					break;
				}
					
				case 2 : { // Material
					cout << "\nIngrese el nuevo nombre del material del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setMaterial(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ; 
					break;
				}
					
				case 3 : { // Cantidad de articulos
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setCantidad(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 4 : { // Codigo
					cout << "\nIngrese el nuevo codigo del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setCodigoArticulo(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
				
				case 5 : { // Valor de Inicial Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setValorArticuloInicial(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 6 : { // Valor Actual del Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setValorActualArticulo(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 7 : { // Estado del Articulo
					cout << "\nIngrese el estado del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setEstadoArticuloDeActivo(atof(Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 8 : { // Estado de Disponibilidad
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setEstadoDeLimiteDeArticulos(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 9 : { // Estado de Asignacion
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosMuebles[i].setEstadoDeAsignadoAProfesor(atof(Campo)) ;
					
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfeMueble(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 10 : { // Valor de Despreciacion
					
					cout << "\n\nNo puedes modificar este campo \n" ;
					cout << "Esta opcion es manejada de acuerdo al tipo de articulo \n" ;
					system("pause") ; 
					
					break;
				}
					
				case 11 : { // Asignado
				
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
									
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfeMueble(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				default : { // Opcion Incorrecta
					cout << "\nHas elegido una campo incorrecto \n\n" ;
					system("pause") ;
	
					ModificarDatosMueble(Posicion) ; 
						
					break;
				}
			}
		}else {
			cout << "\n\n\tNo existe ese articulo por favor ingrese un valor valido \n\n" ;
			system("pause") ;
			
			ModificarDatosMueble(Posicion) ; 
		}
	}
	
	ManejoDeArchivo ActualizarMueble ;
	ActualizarMueble.ActualizarMuebleCSV(this->ArticulosMuebles) ;
	
}

/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////


void Laboratorio::ModificarDatosArticulosPrestamos(int Posicion) {
	
	system("cls") ;
	char Campo[512] ; 
	bool Encontrado = false ;
	
	
	for(int i=0 ; i<this->ArticulosDisponibles.size() ; i++) {
		if (Posicion == i+1) {
			Encontrado = true ;
			cout << "\n\tLos datos existentes del articulo son los siguientes \n" ;
			system("pause") ;
				
			AccederArticulosPrestamo(Posicion) ;
			
			cout << "\nQue Campo de la informacion del articulo desea modificar \n\n" ;
				
			Posicion = common::ValidarEntero("Elija el campo que desea modificar \n") ;
				
			switch(Posicion) {
				case 1 : { // IDNombre
					cout << "\nIngrese el nuevo nombre del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setIDNombre(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
											
					break;
				}
					
				case 2 : { // Marca
					cout << "\nIngrese el nuevo nombre del material del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setIDMarca(Campo) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ; 
					break;
				}
					
				case 3 : { // Cantidad de articulos
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setCantidadDeTipoDeArticulo(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 4 : { // Codigo
					cout << "\nIngrese el nuevo codigo del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setCodigoArticulo(atof (Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
				
				case 5 : { // Valor de Inicial Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setValorArticuloInicial(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 6 : { // Valor Actual del Articulo
					cout << "\nIngrese la nueva cantidad disponible del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setValorActualArticulo(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 7 : { // Estado del Articulo
					cout << "\nIngrese el estado del articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setEstadoArticuloDeActivo(atof(Campo)) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 8 : { // Estado de Disponibilidad
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setEstadoDeLimiteDeArticulos(atof(Campo)) ;
					
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				case 9 : { // Estado de Asignacion
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
					this->ArticulosDisponibles[i].setEstadoDeAsignadoAProfesor(atof(Campo)) ;
					
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfePrestamo(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
						
					break;
				}
					
				case 10 : { // Valor de Despreciacion
					
					cout << "\n\nNo puedes modificar este campo \n" ;
					cout << "Esta opcion es manejada de acuerdo al tipo de articulo \n" ;
					system("pause") ; 
					
					break;
				}
					
				case 11 : { // Asignado
				
					cout << "\nIngrese el estado de disponibilidad articulo: \n" ;
					cin  >> Campo ;
									
					cout << "\nSe ha eliminado tambien la informacion de la asignacion \n" ; 
					cout << "Por favor asigne otro por favor \n" ; 
					system("pause") ;
					
					AsignarProfePrestamo(i) ;
						
					cout << "\n\nSe ha modificado con exito !!! \n\n" ;
					
					break;
				}
					
				default : { // Opcion Incorrecta
					cout << "\nHas elegido una campo incorrecto \n\n" ;
					system("pause") ;
	
					ModificarDatosArticulosPrestamos(Posicion) ; 
						
					break;
				}
			}
		}
	}
	
	if (Encontrado == false) {
		cout << "\n\n\tNo existe ese articulo por favor ingrese un valor valido \n\n" ;
		system("pause") ;
	}
	
	ManejoDeArchivo ActualizarArticuloPrestamo ;
	ActualizarArticuloPrestamo.ActualizarArchivoArticuloDePrestamoCSV(this->ArticulosDisponibles) ;	
}


/////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

// ELiminar datos de informacion
void Laboratorio::EliminarDatosDelVectorInformaciones() {
	int Opcion, Confirmar ;
	
	system("cls") ;
	
	getInformaciones() ;
	
	cout << "\n00. Atras \n" ;
	cout << "\nQue informacion desea eliminar ? \n" ;
	cout << "Solo puedes eliminar los puntos que existan del 3 en adelante \n\n" ;
	
	Opcion = common::ValidarEntero("Elije una opcion \n") ;
	
	if (Opcion > 2) {
		system("cls") ;
		cout << "\nLa Inforacion que desea eliminar es la siguiente \n" ;
		cout << Informaciones[Opcion].getNombreDeInfo() << ":" ;
		cout << Informaciones[Opcion].getContenidoDeInfo() << "\n\n" ; 
		
		Confirmar = common::ValidarEntero("Confirmar (0=no y 1=si)\n") ;
		
		if (Confirmar == 1) {
			system("cls") ;
			Informaciones.erase(Informaciones.begin()+Opcion, Informaciones.begin()+(Opcion+1)) ;
			cout << "\nInformacion Eliminada \n\n" ;
			system("pause") ;
			
		}else if (Confirmar == 0) {
			
			EliminarDatosDelVectorInformaciones() ;
			
		}else {
			cout << "\n\nOpcion incorrecta \n\n" ;
			system("pause") ;
		}
		
	}else if (Opcion == 00) {
		system("cls") ;
		cout << "Ya te estamos dirigiendo \n\n" ;
		system("pause") ;
		
	}else { // Opcion incorrecta
		cout << "\nRecuerda que no puedes eliminar esta informacion \n" ;
		cout << "Requiere mas autorizacion \n\n" ;
		system("pause") ;
	}
	
	ManejoDeArchivo ManejoDeInformacion ;
	ManejoDeInformacion.CrearArchivoInformacionCSV(Informaciones)  ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::EliminarDatosDelVectorProfesor(int Opcion){
	
	system("cls") ;
	
	int Confirmacion ;
	
	bool* Salir = new bool (false) ;
	
	cout << "1. Continuar Proceso \n" ;
	cout << "00. Atras \n\n" ;
	
	Confirmacion = common::ValidarEntero("Elije una opcion \n") ;
	
	
	do{
		switch(Confirmacion){
			case 1 :{ //Continuar Proceso..
				for(int i=0 ; i<this->Profesores.size() ; i++){
					if(Opcion == i+1){
						system("cls") ;
						Profesores.erase(Profesores.begin()+Opcion , Profesores.begin()+(Opcion+1)) ;
						cout <<"\nAccion Exitosa\n" ;
						*Salir = true ;
					}
				}
				break ;	
			}
			
			case 00 : {//Atras
				*Salir = true ;
				break;
			}
			
			default : {//Opcion incorrecta
				cout << "\n\nOPCION INCORRECTA \n\n" ;
				system("pause") ;
				break;
			}
		}
	}while(!*Salir) ;
	
	ManejoDeArchivo ManejoDeProfesores ;
	ManejoDeProfesores.ActualizarArchivoProfesorCSV(this->Profesores) ;
}
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::EliminarDatosDelVectorEstudiante(int Opcion){
	
	
	system("cls") ;
	
	int Confirmacion ;
	
	bool* Salir = new bool (false) ;
	
	cout << "1. Continuar Proceso \n" ;
	cout << "00. Atras \n\n" ;
	
	Confirmacion = common::ValidarEntero("Elije una opcion \n") ;
	
	
	do{
		switch(Confirmacion){
			case 1 :{ //Continuar Proceso..
				for(int i=0 ; i<this->Estudiantes.size() ; i++){
					if(Opcion == i+1){
						system("cls") ;
						Estudiantes.erase(Estudiantes.begin()+Opcion , Estudiantes.begin()+(Opcion+1)) ;
						cout <<"\nAccion Exitosa\n" ;
						*Salir = true ;
					}
				}
				break ;	
			}
			
			case 00 : {//Atras
				*Salir = true ;
				break;
			}
			
			default : {//Opcion incorrecta
				cout << "\n\nOPCION INCORRECTA \n\n" ;
				system("pause") ;
				break;
			}
		}
	}while(!*Salir) ;
	
	ManejoDeArchivo ManejoDeEstudiantes ;
	ManejoDeEstudiantes.ActualizarArchivoEstudianteCSV(this->Estudiantes) ;
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::EliminarDatosDelVectorComputo() {
	int Opcion, Confirmar ;
	
	system("cls") ;
	
	getComputo() ;
	
	cout << "\n00. Atras \n" ;
	cout << "\nQue informacion desea eliminar ? \n" ;
	
	Opcion = common::ValidarEntero("Elije una opcion \n") ;
	
	for (int i=0 ; i<this->ArticulosComp.size() ; i++) {
		if (Opcion == i+1) {
			cout << "\nEl articulo que desea eliminar se le mostrara a continuacion \n\n" ;
			system("pause") ;
			
			AccederAComputo(Opcion) ;
			
			this->ArticulosComp.erase(this->ArticulosComp.begin()+Opcion, this->ArticulosComp.begin()+(Opcion+1)) ;
			
			cout << "\n\nEsta informacion se ha elimando correctamente \n" ;
			cout << "Proceso Exitoso !!! \n\n" ;
		}
	}
	
	if (Opcion == 00) {
		cout << "\nEn este momento sera transladado al menu anterior \n\n" ;
	}
	
//	ManejoDeArchivo ActualizarComputo ;
//	ActualizarComputo.ActualizarComputoCSV(this->ArticulosComp) ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::EliminarDatosDelVectorMueble(){
	int Opcion, Confirmar ;
	
	system("cls") ;
	
	getMuebles() ;
	
	cout << "\n00. Atras \n" ;
	cout << "\nQue informacion desea eliminar ? \n" ;
	
	Opcion = common::ValidarEntero("Elije una opcion \n") ;
	
	for (int i=0 ; i<this->ArticulosMuebles.size() ; i++) {
		if (Opcion == i+1) {
			cout << "\nEl articulo que desea eliminar se le mostrara a continuacion \n\n" ;
			system("pause") ;
			
			AccederAMueble(Opcion) ;
			
			this->ArticulosMuebles.erase(this->ArticulosMuebles.begin()+Opcion, this->ArticulosMuebles.begin()+(Opcion+1)) ;
			
			cout << "\n\nEsta informacion se ha elimando correctamente \n" ;
			cout << "Proceso Exitoso !!! \n\n" ;
		}
	}
	
	if (Opcion == 00) {
		cout << "\nEn este momento sera transladado al menu anterior \n\n" ;
	}
	
	ManejoDeArchivo ActualizarMueble ;
	ActualizarMueble.ActualizarMuebleCSV(this->ArticulosMuebles) ;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////



void Laboratorio::EliminarDatosDelVectorArticuloPrestamos() {
	
	int Opcion, Confirmar ;
	
	system("cls") ;
	
	getPrestamos() ;
	
	cout << "\n00. Atras \n" ;
	cout << "\nQue informacion desea eliminar ? \n" ;
	
	Opcion = common::ValidarEntero("Elije una opcion \n") ;
	
	for (int i=0 ; i<this->ArticulosDisponibles.size() ; i++) {
		if (Opcion == i+1) {
			cout << "\nEl articulo que desea eliminar se le mostrara a continuacion \n\n" ;
			system("pause") ;
			
			AccederArticulosPrestamo(Opcion) ;
			
			this->ArticulosDisponibles.erase(this->ArticulosDisponibles.begin()+Opcion, this->ArticulosDisponibles.begin()+(Opcion+1)) ;
			
			cout << "\n\nEsta informacion se ha elimando correctamente \n" ;
			cout << "Proceso Exitoso !!! \n\n" ;
		}
	}
	
	if (Opcion == 00) {
		cout << "\nEn este momento sera transladado al menu anterior \n\n" ;
	}
	
	ManejoDeArchivo ActualizarArticuloPrestamo ;
	cout << this->ArticulosDisponibles.size() << endl ;
	ActualizarArticuloPrestamo.ActualizarArchivoArticuloDePrestamoCSV(this->ArticulosDisponibles) ;
	cout << this->ArticulosDisponibles.size() << endl ;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


void Laboratorio::AccederProfesorPosicion(int Posicion) {
	
	system("cls") ;
	Posicion-- ; 
	
	for (int i=0 ; i<this->Profesores.size() ; i++) {
		if (i == Posicion) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "\n\tSus datos Actuales: " << "\n\n" ;
			cout << "1. Nombre :" << Profesores[i].getNombre() << "\n" ;
			cout << "2. Apellido :" << Profesores[i].getApellido() << "\n" ;
			cout << "3. Email: " << Profesores[i].getEmail() << "\n" ;
			cout << "4. Edad: " << Profesores[i].getEdad() << "\n" ;
			cout << "5. Cedula: " << Profesores[i].getCedula() << "\n" ;
			cout << "6. Telefono: " << Profesores[i].getTelefono() << "\n" ;
			cout << "7. Codigo: " << Profesores[i].getCodigo() << "\n" ;
			cout << "8. Titulo Profesional: " << Profesores[i].getTituloProfesional() << "\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederArticulosProfe(int Posicion) {
	system("cls") ;
	Posicion-- ; 
	
	for (int i=0 ; i<this->ArticulosComp.size() ; i++) {
		if ((this->Profesores[Posicion].getCodigo())== (this->ArticulosComp[i].getProfesor()->getCodigo())) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "Articulo #" << i+1 << "\n\n" ;
			cout << "Nombre: " << ArticulosComp[i].getIDNombre() << "\n" ;
			cout << "Marca: " << ArticulosComp[i].getIDMarca() << "\n" ;
			cout << "Cantidad: " << ArticulosComp[i].getCantidad() << "\n" ;
			cout << "Codigo: " << ArticulosComp[i].getCodigoArticulo() << "\n" ;
			cout << "Valor del Articulo: " << ArticulosComp[i].getValorArticuloInicial() << "\n" ; 
			cout << "Valor Actual: " << ArticulosComp[i].getValorActualArticulo() << "\n" ;
			cout << "Estado del Articulo: " << ArticulosComp[i].getEstadoArticuloDeActivo() << "\n" ;
			cout << "Disponibilidad: " << ArticulosComp[i].getEstadoDeLimiteDeArticulos() << "\n" ; // Este es para saber si aun hay articulos de este tipo
			cout << "Estado de Asigancion: " << ArticulosComp[i].getEstadoDeAsignadoAProfesor() << "\n" ;
			cout << "Valor de despreciacion: " << ArticulosComp[i].getDespreciacion() << "\n" ;
			cout << "Asignado al Profesor: " << ArticulosComp[i].getProfesor()->getNombre() << "\n" ;  
			cout << "Codigo del Profesor: " << ArticulosComp[i].getProfesor()->getCodigo() << "\n" ;  
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederProfesor(int Codigo, int CodigoArticulo) {
	
	
	for (int i=0 ; i<this->Profesores.size() ; i++) {
		if (Codigo == this->Profesores[i].getCodigo()) {
			for (int j=0 ; j<this->ArticulosComp.size() ; j++) {
					if(CodigoArticulo == this->ArticulosComp[j].getCodigoArticulo()) {
					this->ArticulosComp[j].AsignarAlArticulo(&this->Profesores[i]) ;
				}
			}
		}
	}	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederProfesorMueb(int Codigo, int CodigoArticulo) {
	
	for (int i=0 ; i<this->Profesores.size() ; i++) {
		if (Codigo == this->Profesores[i].getCodigo()) {
			for (int j=0 ; j<this->ArticulosMuebles.size() ; j++) {
					if(CodigoArticulo == this->ArticulosMuebles[j].getCodigoArticulo()) {
					this->ArticulosMuebles[j].AsignarAlArticulo(&this->Profesores[i]) ;
				}
			}
		}
	}	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederProfesorArtPrestamo(int Codigo, int CodigoArticulo) {
	
	for (int i=0 ; i<this->Profesores.size() ; i++) {
		if (Codigo == this->Profesores[i].getCodigo()) {
			for (int j=0 ; j<this->ArticulosDisponibles.size() ; j++) {
					if(CodigoArticulo == this->ArticulosDisponibles[j].getCodigoArticulo()) {
					this->ArticulosDisponibles[j].AsignarAProfesor(&this->Profesores[i]) ;
				}
			}
		}
	}	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


void Laboratorio::AccederAUnEstudiante(int Posicion) {
	system("cls") ;
	Posicion-- ;
	for (int i=0 ; i<this->Estudiantes.size() ; i++) {
		if (i == Posicion) {
			cout << "\n\tSus datos Actuales: " << "\n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "1. Nombre :" << Estudiantes[i].getNombre() << "\n" ;
			cout << "2. Apellido :" << Estudiantes[i].getApellido() << "\n" ;
			cout << "3. Email: " << Estudiantes[i].getEmail() << "\n" ;
			cout << "4. Edad: " << Estudiantes[i].getEdad() << "\n" ;
			cout << "5. Cedula: " << Estudiantes[i].getCedula() << "\n" ;
			cout << "6. Telefono: " << Estudiantes[i].getTelefono() << "\n" ;
			cout << "7. Carrera: " << Estudiantes[i].getCarrera() << "\n" ;
			cout << "8. Codigo: " << Estudiantes[i].getCodigo() << "\n" ;
			cout << "9. Semestre: " << Estudiantes[i].getSemestre() << "\n" ;
			cout << "10. Valor la multa acomulada: " << Estudiantes[i].getValorMultaAcomulada() << "\n" ;
			cout << "11. Estado de multa :" << Estudiantes[i].getEstadoDeMulta()<< "\n" ;
			cout << "12. Estado de estudiante: " << Estudiantes[i].getEstadoDeEstudiante() << "\n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


void Laboratorio::AccederPersonalAdmi(int Posicion) {
	system("cls") ;
	Posicion-- ;
	for (int i=0 ; i<this->PersonalAdmin.size() ; i++) {
		if (i == Posicion) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "\n\tSus datos Actuales: " << "\n\n" ;
			cout << "Nombre :" << PersonalAdmin[i].getNombre() << "\n" ;
			cout << "Apellido :" << PersonalAdmin[i].getApellido() << "\n" ;
			cout << "Email: " << PersonalAdmin[i].getEmail() << "\n" ;
			cout << "Edad: " << PersonalAdmin[i].getEdad() << "\n" ;
			cout << "Cedula: " << PersonalAdmin[i].getCedula() << "\n" ;
			cout << "Telefono: " << PersonalAdmin[i].getTelefono() << "\n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederAComputo(int Posicion) {
	system("cls") ;
	Posicion-- ; 
	
	for (int i=0 ; i<this->ArticulosComp.size() ; i++) {
		if (Posicion == i) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "Articulo #" << i+1 << "\n\n" ;
			cout << "1. Nombre: " << ArticulosComp[i].getIDNombre() << "\n" ;
			cout << "2. Marca: " << ArticulosComp[i].getIDMarca() << "\n" ;
			cout << "3. Cantidad: " << ArticulosComp[i].getCantidad() << "\n" ;
			cout << "4. Codigo: " << ArticulosComp[i].getCodigoArticulo() << "\n" ;
			cout << "5. Valor del Articulo: " << ArticulosComp[i].getValorArticuloInicial() << "\n" ; 
			cout << "6. Valor Actual: " << ArticulosComp[i].getValorActualArticulo() << "\n" ;
			cout << "7. Estado del Articulo: " << ArticulosComp[i].getEstadoArticuloDeActivo() << "\n" ;
			cout << "8. Disponibilidad: " << ArticulosComp[i].getEstadoDeLimiteDeArticulos() << "\n" ; // Este es para saber si aun hay articulos de este tipo
			cout << "9. Estado de Asigancion: " << ArticulosComp[i].getEstadoDeAsignadoAProfesor() << "\n" ;
			cout << "10. Valor de despreciacion: " << ArticulosComp[i].getDespreciacion() << "\n" ;
			cout << "11. Asignado al Profesor: " << ArticulosComp[i].getProfesor()->getNombre() << "\n" ;  
			cout << "----Codigo del Profesor: " << ArticulosComp[i].getProfesor()->getCodigo() << "\n" ;  
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederAMueble(int Posicion) {
	system("cls") ;
	Posicion-- ; 
	
	for (int i=0 ; i<this->ArticulosMuebles.size() ; i++) {
		if (Posicion == i) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "Articulo #" << i+1 << "\n\n" ;
			cout << "1. Nombre: " << ArticulosMuebles[i].getIDNombre() << "\n" ;
			cout << "2. Material: " << ArticulosMuebles[i].getMaterial() << "\n" ;
			cout << "3. Cantidad: " << ArticulosMuebles[i].getCantidad() << "\n" ;
			cout << "4. Codigo: " << ArticulosMuebles[i].getCodigoArticulo() << "\n" ;
			cout << "5. Valor del Articulo: " << ArticulosMuebles[i].getValorArticuloInicial() << "\n" ; 
			cout << "6. Valor Actual: " << ArticulosMuebles[i].getValorActualArticulo() << "\n" ;
			cout << "7. Estado del Articulo: " << ArticulosMuebles[i].getEstadoArticuloDeActivo() << "\n" ;
			cout << "8. Disponibilidad: " << ArticulosMuebles[i].getEstadoDeLimiteDeArticulos() << "\n" ; // Este es para saber si aun hay articulos de este tipo
			cout << "9. Estado de Asigancion: " << ArticulosMuebles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
			cout << "10. Valor de despreciacion: " << ArticulosMuebles[i].getDespreciacion() << "\n" ;
			cout << "11. Asignado al Profesor: " << ArticulosMuebles[i].getProfesorAsignado()->getNombre() << "\n" ;  
			cout << "----Codigo del Profesor: " << ArticulosMuebles[i].getProfesorAsignado()->getCodigo() << "\n" ;  
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////




//void Laboratorio::AccederArticulosprestamo(int Posicion){
//	system("cls");
//	Posicion--;
//		for(int i=0 ; i<this->ArticulosDisponibles.size() ; i++){
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
//		cout << "1. IDNombre: " << ArticulosDisponibles[i].getIDNombre() << "\n" ;
//		cout << "2. Codigo del articulo" << ArticulosDisponibles[i].getCodigoArticulo( ) << "\n" ;
//		cout << "3. Precio del articulo" << ArticulosDisponibles[i].getValorArticuloInicial() << "\n" ;
//		cout << "4. Precio actual del articulo" << ArticulosDisponibles[i].getValorActualArticulo() << "\n" ;
//		cout << "5. Estado del articulo activo" << ArticulosDisponibles[i].getEstadoArticuloDeActivo() << "\n" ;
//		cout << "6. Estado limite del articulo" << ArticulosDisponibles[i].getEstadoDeLimiteDeArticulos () << "\n" ;
//		cout << "7. Estado del articulo asignadoa un profesor" << ArticulosDisponibles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
//		cout << "8. ID de la marca" << ArticulosDisponibles[i].getIDMarca() << "\n" ;
//		cout << "9. Cantidad de tipo del articulo" << ArticulosDisponibles[i].getCantidadDeTipoDeArticulo() << "\n" ;
//		cout << "10. Valor despreciacion anual" << ArticulosDisponibles[i].getDespreciacion () << "\n" ;
//	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
//
//	}
//	
//	
//}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederArticulosPrestamo(int Posicion){
	system("cls") ;
	Posicion-- ;
	cout << "\n\t\tLos datos existentes del articulo son los siguientes \n\n" ;
	for(int i=0 ; i<this->ArticulosDisponibles.size() ; i++) {
		if (Posicion == i) {
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
			cout << "\n\t Articulo #" << i+1 << "\n\n" ;
			cout << "1. Nombre: " << ArticulosDisponibles[i].getIDNombre() << "\n" ;
		 	cout << "2. Marca: "  << ArticulosDisponibles[i].getIDMarca() << "\n" ;
		 	cout << "3. Cantidad: " << ArticulosDisponibles[i].getCantidadDeTipoDeArticulo() << "\n" ;
		 	cout << "4. Codigo: " << ArticulosDisponibles[i].getCodigoArticulo() << "\n" ;
		 	cout << "5. Valor Articulo: " << ArticulosDisponibles[i].getValorArticuloInicial() << "\n" ;
		 	cout << "6. Valor Actual: " << ArticulosDisponibles[i].getValorActualArticulo() << "\n" ;
		 	cout << "7. Estado: " << ArticulosDisponibles[i].getEstadoArticuloDeActivo() << "\n" ;
		 	cout << "8. Estado Limite: " << ArticulosDisponibles[i].getEstadoDeLimiteDeArticulos() << "\n" ;
		 	cout << "9. Asignado al profesor: " << ArticulosDisponibles[i].getEstadoDeAsignadoAProfesor() << "\n" ;
		 	cout << "10.Valor de despreciacion: " << ArticulosDisponibles[i].getDespreciacion() << "\n" ;
		 	cout << "11. Asignado al Profesor: " << ArticulosDisponibles[i].getProfesor()->getNombre() << "\n" ;  
			cout << "    Codigo del Profesor: " << ArticulosDisponibles[i].getProfesor()->getCodigo() << "\n" ;  
	 		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n" ;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n" ;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AccederEStadoMultaEstudiante(int Posicion) {
	system ("cls") ;
	
	cout << "Su estado de multa es : " << this->Estudiantes[Posicion].getEstadoDeMulta() << "\n" ;
	
	
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AsignarProfesorArticulo(int Posicion) {//ArticuloComputo* ArticulosParaAsignar) { //int CantidadACrear, bool PrimerVez) { // true si es primera vez de ejecucion
	int Asignar ;
	
	if (VerificarVectorProfesores() == false) {
		// Mostrar todos los profesores para asignar
		getProfesores() ;
		
		Asignar = common::ValidarEntero("\nAsignele un profesor \n\n") ;
		
		// Asignarle el Articulo
		for (int i=0 ; i<this->ArticulosComp.size() ; i++) {
			if (Asignar == i+1) {
				this->ArticulosComp[Posicion-1].AsignarAlArticulo(&this->Profesores[Asignar-1]) ;
			
			//	cout << this->ArticulosComp[Posicion-1].getProfesor()->getNombre() << endl ;
	
				cout << "\nSe asigno correctamente \n\n" ;
				system("pause") ;
	
			}
		}
	}else {
		cout << "No existen datos \n\n" ;
		system("pause") ;
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AsignarProfeMueble(int Posicion) {
	int Asignar ;
	
	// Mostrar todos los profesores para asignar
	getProfesores() ;
	
	Asignar = common::ValidarEntero("\nAsignele un profesor \n\n") ;
	
	// Asignarle el Articulo
	for (int i=0 ; i<this->ArticulosMuebles.size() ; i++) {
		if (Asignar == i+1) {
			this->ArticulosMuebles[Posicion-1].AsignarAlArticulo(&this->Profesores[Asignar-1]) ;
		
		//	cout << this->ArticulosComp[Posicion-1].getProfesor()->getNombre() << endl ;

			cout << "\nSe asigno correctamente \n\n" ;
			system("pause") ;

		}
	}
	
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

//void Laboratorio::AsignarProfePrestamos(int Posicion) {
//	int Asignar ;
//	
//	// Mostrar todos los profesores para asignar
//	getProfesores() ;
//	
//	Asignar = common::ValidarEntero("\nAsignele un profesor \n\n") ;
//	
//	// Asignarle el Articulo
//	for (int i=0 ; i<this->ArticulosDisponibles.size() ; i++) {
//		if (Asignar == i+1) {
//			this->ArticulosDisponibles[Posicion-1].AsignarAProfesor(&this->Profesores[Asignar-1]) ;
//
//			cout << "\nSe asigno correctamente \n\n" ;
//			system("pause") ;
//
//		}
//	}
//	
//}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

void Laboratorio::AsignarProfePrestamo(int Posicion){
	int Asignar ;
	
	getProfesores();
	
	Asignar = common::ValidarEntero("\nAsignele un profesor al articulo \n\n") ;
	
	for(int i=0; i<this->ArticulosDisponibles.size(); i++) {
		if (Asignar == i+1){
			this->ArticulosDisponibles[Posicion-1].AsignarAProfesor(&this->Profesores[Asignar-1]) ;
			
			cout << " \nSe asigno correctamente \n\n" ;
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarVectorProfesores() {
	if (this->Profesores.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarVectorAdmin() {
	if (this->PersonalAdmin.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarVectorEstudiantes() {
	if (this->Estudiantes.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////


bool Laboratorio::VerificarVectorInformaciones() {
	if (this->Informaciones.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarArticulosCompu() {
	if(this->ArticulosComp.empty()) {
		return true ;
	}else return false ;
}


//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarArticulosMueble() {
	if (this->ArticulosMuebles.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

bool Laboratorio::VerificarArticulosPrestamo() {
	if (this->ArticulosDisponibles.empty()) {
		return true ;
	}else return false ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////

// DESTRUCTOR
Laboratorio::~Laboratorio(){
}
