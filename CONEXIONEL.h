#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class CONEXIONEL
{
private: MYSQL* conectar;
public: void abrir_conexion() {
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "usr_tienda_electronica", "Electric@123*", "electronica", 3306, NULL, 0);

}
	  MYSQL* getConectar() {
		  return conectar;
	  }
	  void cerrar_conexion() {
		  mysql_close(conectar);
	  }
};

