#ifndef CARGA_H
#define CARGA_H

#include "Vehiculo.h"

class Carga : public Vehiculo
{
	int pc;
	public:
	
		const static float PRECIO_ADICIONALXCARGA = 20;
		Carga(char matricula[]);
		Carga();
		virtual float calcularPrecio(int dias);
	protected:
};

#endif
