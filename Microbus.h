#ifndef MICROBUS_H
#define MICROBUS_H

#include "Transporte.h"

class Microbus : public Transporte
{
	public:
		const  static float  PRECIO_A = 2;
		Microbus(char matricula[]);
		Microbus();
		float calculaPrecio(int dias);
	protected:
};

#endif
