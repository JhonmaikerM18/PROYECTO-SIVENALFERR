#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

ref class user_Supervisor
{
public:
	//Datos NO Modificable
	int SupervisorID;
	//Datos Personales
	String^ Nombre;
	String^ Apellido;
	int Edad;
	String^ Sexo;
	//Datos de trabaajo
	String^ AreaTrabajo;
	int NivelJerarquico;
	int CantidadTrabajadores;

};
