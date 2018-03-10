#pragma once
#include <iostream>
#include <string>
#include "Compra.h"
#include "InterfazDePago.h"
using namespace std;
class CarritoDeCompras {
private:
	Compra ** vec;
public:
	CarritoDeCompras();
	CarritoDeCompras(int);
	CarritoDeCompras(CarritoDeCompras &);
	~CarritoDeCompras();
	bool eliminarCompra();
	Compra * getCompra(int);
	float calculaTotal();
	void pago(InterfazDePago *);
};