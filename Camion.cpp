#include "Camion.h"

Camion::Camion()
{
}
	Camion::Camion(char matricula[]):Carga(matricula){
	}
	
	
	float Camion::calcularPrecio(int dias){
		
		return dias * PRECIO_ADXC + Carga::calcularPrecio(dias);
	}
