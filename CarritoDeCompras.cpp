#include "CarritoDeCompras.h"

CarritoDeCompras::CarritoDeCompras() { vec = NULL; }

CarritoDeCompras::CarritoDeCompras(int tam)
{
	vec[tam++] = new Compra();
}

CarritoDeCompras::CarritoDeCompras(CarritoDeCompras & carritoPtr)
{
	delete[] vec;
	for (int i = 0; i < sizeof(carritoPtr); i++) {
		vec[i] = carritoPtr.vec[i];
	}
}

CarritoDeCompras::~CarritoDeCompras()
{
	delete[] vec;
}

bool CarritoDeCompras::eliminarCompra()
{
	return false;
}

Compra * CarritoDeCompras::getCompra(int)
{
	return nullptr;
}

float CarritoDeCompras::calculaTotal()
{
	return 0.0;
}

void CarritoDeCompras::pago(InterfazDePago *)
{
}
