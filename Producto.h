#pragma once
#include <iostream>
#include "Marca.h"
#include "CONEXIONEL.h"
using namespace std;
class Producto : Marca{

protected: string producto, descripcion, fecha_ingreso;
		 double precio_venta, precio_costo;
		 int existencia = 0;
		 //contructor
		 
		 Producto(string produc, string desc, int exist, double p_v,double p_c, string fn,string mar, int id_m) : Marca(id_marca,marca) {

			 id_marca = id_m;
			 marca = mar;
		 }
		 void setProducto(string produc) { producto = produc; }
		 void setId_Marca(int id_m) { id_marca = id_m; }
		 void setDescripcion(string desc) { descripcion = desc; }
		 void setPrecio_costo(double p_c) { precio_costo = p_c; }
		 void setPrecio_venta(double p_v) { precio_venta = p_v; }
		 void setExistencia(int exist) { existencia = exist; }
		 void setFecha_Ingreso(string fn) { fecha_ingreso = fn; }
		 void setMarca(string mar) { marca = mar; }
		 //get (mostrar)
		 string getProducto() { return producto; }
		 int getId_Marca() { return id_marca; }
		 string getDescripcion() { return descripcion; }
		 double getPrecio_costo() { return precio_costo; }
		 double getPrecio_venta() { return precio_venta; }
		 int getExistencia() { return existencia; }
		 string getFecha_Ingreso() { return fecha_ingreso; }
		 string getMarca() { return marca; }
		
};

