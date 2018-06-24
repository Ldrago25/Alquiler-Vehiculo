#include "Microbus.h"

Microbus::Microbus()
{
}
	Microbus::Microbus(char matricula[]):Transporte(matricula){
	}
	
	float Microbus::calculaPrecio(int dias){
		return PRECIO_A + Transporte::calcularPrecio(dias);
		
		
	}
