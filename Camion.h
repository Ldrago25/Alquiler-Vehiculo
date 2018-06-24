#ifndef CAMION_H
#define CAMION_H

#include "Carga.h"

class Camion : public Carga
{
	float carga;
	public:
		const static float PRECIO_ADXC = 40;
		Camion(char matricula[]);
		Camion();
		float calcularPrecio(int dias);
	protected:
};

#endif
