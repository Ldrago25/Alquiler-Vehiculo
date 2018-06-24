#include <iostream>
#include "Vehiculo.h"
#include "Transporte.h"
#include "Coche.h"
#include "Microbus.h"
#include "Carga.h"
#include "Furgoneta.h"
#include "Camion.h"
#include <vector>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/**
A) Agregar Vehículo.
    1. el empleado selecciona la opción
	2. la aplicación muestra una pantalla que permite introducir los datos del nuevo vehículo     
	3. el empleado introduce los datos y pulsa aceptar     
	4. la aplicación añade el vehículo a la lista de vehículos de la empresa     
	5. se retorna al menú de opciones 
B) Obtener precio de alquiler     
	1. el empleado selecciona la opción "Obtener precio alquiler" 
    2. la aplicación muestra una pantalla que permite introducir la matrícula del vehículo y los días que ha durado en alquiler     
	3. el empleado introduce los datos y pulsa enter     
	4. si no existe ningún coche con la matricula se notifica y finaliza el caso de uso     
	5. la aplicación muestra el precio de alquiler     
	6. se retorna al menú de opciones 
 
 
*/
vector <Vehiculo*> vector_vechiculos;
void opcionA()
{
	int op;
	char placa[20];
	
	cout<<endl<<"Introduzca la placa del vehiculo: "<<endl;
	cin.sync();
	cin.getline(placa,20);
	
	cout<<endl<<"Tipo de vehiculo que quiere alquilar."<<endl;
	cout<<endl<<"Opcion 1. Transporte"<<endl;
	cout<<endl<<"Opcion 2. Coche"<<endl;
	cout<<endl<<"Opcion 3. Microbus"<<endl;
	cout<<endl<<"Opcion 4. Carga"<<endl;
	cout<<endl<<"Opcion 5. Furgoneta"<<endl;
	cout<<endl<<"Opcion 6. Camion"<<endl;
	cout<<endl<<"Tu opcion: "<<endl;
	cin>>op;
	
	switch(op)
	{
		case 1:
		{
			Transporte *transporte=new Transporte(placa);
			vector_vechiculos.push_back(transporte);	
			break;
		}
		case 2:
		{
			Coche *coche=new Coche(placa);
			vector_vechiculos.push_back(coche);
			break;
		}
		case 3:
		{
			Microbus *microbus=new Microbus(placa);
			vector_vechiculos.push_back(microbus);
			break;
		}
		case 4:
		{
			Carga *carga=new Carga(placa);
			vector_vechiculos.push_back(carga);	
			break;
		}	
		case 5:
		{
			Furgoneta *furgoneta=new Furgoneta(placa);
			vector_vechiculos.push_back(furgoneta);
			break;
		}
		case 6:
		{
			Camion *camion=new Camion(placa);
			vector_vechiculos.push_back(camion);
			break;
		}
	}
}

void opcionB()
{
	char placa2[20];
	int dias;
	
	if(vector_vechiculos.size()==0)
	{
		cout<<endl<<"No hay ningun vehiculo :c"<<endl;
	}else
	{
		for(int i=0; i<vector_vechiculos.size(); i++)
		{
			cout<<endl<<"Introduzca la matricula del vehiculo que desea buscar: "<<endl;
			cin.sync();
			cin.getline(placa2,20);
			if(strcmpi(vector_vechiculos.at(i)->getM(),placa2)==0)
			{
				cout<<endl<<"La encontre: "<<vector_vechiculos.at(i)->getM()<<endl;
				cout<<endl<<"Introduzca los dias que quiere alquilar este carro: "<<endl;
				cin>>dias;
				cout<<endl<<"Su precio es: "<<vector_vechiculos.at(i)->calcularPrecio(dias)<<endl;
			}
		}
	}	
}

void menuPrincipal() 
{
	char tecla = ' ';
	do
	{
	system("CLS");
	cout << "A) Agregar Vechiculo" << endl;
	cout << "B) Obtener precio de alquiler" << endl;
	cout << "c) Salir" << endl;
	cout << "Seleccione.";
	
	tecla = tolower(getch());	
	system("cls");
	switch(tecla)
	{
		case 'a': {
			opcionA();
			cout << "Agregado con exito! :) Vehiculos: "<<vector_vechiculos.size()<<endl;
			break;
		}
		case 'b': {
			opcionB();
			break;
		}
		case 'c': {
			return;					
		}
	}
	cin.sync();
	
	cout<<endl<<"Desea agregar otro vehiculo? S/N "<<endl;
	cin.sync();
	tecla=toupper(getch());
	
	}while(tecla!='N');
	
}

int main(int argc, char** argv) {

	vector <Vehiculo*> vector_vechiculos;
	
	menuPrincipal();
	
	
 	
		
	
	return 0;
}


