#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
class Marca {
protected: int id_marca;
		string marca;
	Marca(int id_m,string mar){
		id_marca = id_m;
		marca = mar;

	}
};
    
