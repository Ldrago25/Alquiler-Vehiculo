#include "Vehiculo.h"

Vehiculo::Vehiculo()
{
	strcpy(this->matricula,"ABDC");
	
}
	Vehiculo::Vehiculo(char matricula[]){
		strcpy(this->matricula,matricula);
		
		
	}
	
	void Vehiculo::setM(char matricula[]){
		strcpy(this->matricula,matricula);
	}
	
	char* Vehiculo::getM(){
		return matricula;
	}
	
	
	float Vehiculo::calcularPrecio(int dias){
		return dias *PRECIO_BASEXDIA;
	}
	
