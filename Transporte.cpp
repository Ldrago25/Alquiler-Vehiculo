#include "Transporte.h"

Transporte::Transporte()
{
}

	Transporte::Transporte(char matricula[]):Vehiculo(matricula){
	}
	
	float Transporte::calcularPrecio(int dias){
		return (float)dias *(PRECIO_BASEXDIA+PRECIO_ADICIONAL );
		
	}
