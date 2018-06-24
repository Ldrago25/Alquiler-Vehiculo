#include "Carga.h"

Carga::Carga()
{
}
	Carga::Carga(char matricula[]):Vehiculo(matricula){

	}
	
	
	float Carga::calcularPrecio(int dias){
		return (float) dias *(PRECIO_BASEXDIA+PRECIO_ADICIONALXCARGA);
	}
