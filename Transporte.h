#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include "Vehiculo.h"

class Transporte : public Vehiculo
{
	
	public:
		const static float PRECIO_ADICIONAL = 1.5;
		
		Transporte(char matricula[]);
		Transporte();
		virtual float calcularPrecio(int dias);
		
	protected:
};

#endif
