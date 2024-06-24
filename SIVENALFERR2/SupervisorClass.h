#pragma once
using namespace System;

public ref class SupervisorClass
{
public:
	int SupervisorID;
	String^ Nombre;
	String^ Apellido;
	String^ AreaTrabajo;
	int NivelJerarquico;
	int CantidadTrabajadores;
	String^ Password;
	//Administrador
	String^ Nombre_Admin = "0";
};

