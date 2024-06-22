#pragma once
#include "Solicitud.h"
#include "Ajustes.h"
#include "Detalles.h"
#include "Acerca.h"

namespace SIVENALFERR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Runtime::InteropServices; //Libreria para poder arrastar el programa.


	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	private:

	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ Menu;

	private: System::Windows::Forms::Button^ btn_solicitud;
	private: System::Windows::Forms::Button^ btn_detalles;
	private: System::Windows::Forms::Button^ btn_ajustes;
	private: System::Windows::Forms::Button^ btn_usuario;


	private: System::Windows::Forms::Timer^ animacion_menu;
	private: System::Windows::Forms::PictureBox^ click_menu;
	private: System::Windows::Forms::Timer^ Tiempo_menu;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: System::Windows::Forms::Panel^ panelSuperior;


	private: System::Windows::Forms::Label^ text_superior;
	private: System::Windows::Forms::PictureBox^ ctrolMax;
	private: System::Windows::Forms::PictureBox^ ctrolRestaurar;
	private: System::Windows::Forms::PictureBox^ ctrolClose;
	private: System::Windows::Forms::PictureBox^ ctrolMin;


	private: System::Windows::Forms::Label^ arrastrarVentanaL1;

	private: System::Windows::Forms::Panel^ arrastrarVentanaMenu;
	private: System::Windows::Forms::Label^ arrastrarVentanaL2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::Timer^ Hora;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panelControlSuperior;
	private: System::Windows::Forms::Button^ btn_acerca;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->Menu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->arrastrarVentanaMenu = (gcnew System::Windows::Forms::Panel());
			this->arrastrarVentanaL2 = (gcnew System::Windows::Forms::Label());
			this->btn_solicitud = (gcnew System::Windows::Forms::Button());
			this->btn_detalles = (gcnew System::Windows::Forms::Button());
			this->btn_usuario = (gcnew System::Windows::Forms::Button());
			this->btn_ajustes = (gcnew System::Windows::Forms::Button());
			this->btn_acerca = (gcnew System::Windows::Forms::Button());
			this->click_menu = (gcnew System::Windows::Forms::PictureBox());
			this->Tiempo_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->panelSuperior = (gcnew System::Windows::Forms::Panel());
			this->panelControlSuperior = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolClose = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolMax = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolMin = (gcnew System::Windows::Forms::PictureBox());
			this->arrastrarVentanaL1 = (gcnew System::Windows::Forms::Label());
			this->text_superior = (gcnew System::Windows::Forms::Label());
			this->ctrolRestaurar = (gcnew System::Windows::Forms::PictureBox());
			this->Hora = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Menu->SuspendLayout();
			this->arrastrarVentanaMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->click_menu))->BeginInit();
			this->panelContenedor->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panelSuperior->SuspendLayout();
			this->panelControlSuperior->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolRestaurar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->Menu->Controls->Add(this->arrastrarVentanaMenu);
			this->Menu->Controls->Add(this->btn_solicitud);
			this->Menu->Controls->Add(this->btn_detalles);
			this->Menu->Controls->Add(this->btn_usuario);
			this->Menu->Controls->Add(this->btn_ajustes);
			this->Menu->Controls->Add(this->btn_acerca);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->MaximumSize = System::Drawing::Size(155, 1000);
			this->Menu->MinimumSize = System::Drawing::Size(45, 440);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(155, 515);
			this->Menu->TabIndex = 0;
			// 
			// arrastrarVentanaMenu
			// 
			this->arrastrarVentanaMenu->Controls->Add(this->arrastrarVentanaL2);
			this->arrastrarVentanaMenu->Location = System::Drawing::Point(3, 3);
			this->arrastrarVentanaMenu->Name = L"arrastrarVentanaMenu";
			this->arrastrarVentanaMenu->Size = System::Drawing::Size(152, 41);
			this->arrastrarVentanaMenu->TabIndex = 8;
			this->arrastrarVentanaMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Inicio::arrastrarVentana2);
			// 
			// arrastrarVentanaL2
			// 
			this->arrastrarVentanaL2->AutoSize = true;
			this->arrastrarVentanaL2->Location = System::Drawing::Point(64, 6);
			this->arrastrarVentanaL2->Name = L"arrastrarVentanaL2";
			this->arrastrarVentanaL2->Size = System::Drawing::Size(0, 13);
			this->arrastrarVentanaL2->TabIndex = 0;
			// 
			// btn_solicitud
			// 
			this->btn_solicitud->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_solicitud->FlatAppearance->BorderSize = 0;
			this->btn_solicitud->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_solicitud->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_solicitud->ForeColor = System::Drawing::Color::White;
			this->btn_solicitud->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_solicitud.Image")));
			this->btn_solicitud->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_solicitud->Location = System::Drawing::Point(3, 50);
			this->btn_solicitud->Name = L"btn_solicitud";
			this->btn_solicitud->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_solicitud->Size = System::Drawing::Size(146, 41);
			this->btn_solicitud->TabIndex = 3;
			this->btn_solicitud->Text = L"   Solicitud";
			this->btn_solicitud->UseVisualStyleBackColor = true;
			this->btn_solicitud->Click += gcnew System::EventHandler(this, &Inicio::btn_solicitud_Click);
			// 
			// btn_detalles
			// 
			this->btn_detalles->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_detalles->FlatAppearance->BorderSize = 0;
			this->btn_detalles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_detalles->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_detalles->ForeColor = System::Drawing::Color::White;
			this->btn_detalles->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_detalles.Image")));
			this->btn_detalles->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_detalles->Location = System::Drawing::Point(3, 97);
			this->btn_detalles->Name = L"btn_detalles";
			this->btn_detalles->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_detalles->Size = System::Drawing::Size(146, 41);
			this->btn_detalles->TabIndex = 4;
			this->btn_detalles->Text = L"   Detalles";
			this->btn_detalles->UseVisualStyleBackColor = true;
			this->btn_detalles->Click += gcnew System::EventHandler(this, &Inicio::btn_detalles_Click);
			// 
			// btn_usuario
			// 
			this->btn_usuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_usuario->FlatAppearance->BorderSize = 0;
			this->btn_usuario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_usuario->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_usuario->ForeColor = System::Drawing::Color::White;
			this->btn_usuario->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_usuario.Image")));
			this->btn_usuario->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_usuario->Location = System::Drawing::Point(3, 144);
			this->btn_usuario->Name = L"btn_usuario";
			this->btn_usuario->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_usuario->Size = System::Drawing::Size(146, 41);
			this->btn_usuario->TabIndex = 6;
			this->btn_usuario->Text = L"   Usuario";
			// 
			// btn_ajustes
			// 
			this->btn_ajustes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_ajustes->FlatAppearance->BorderSize = 0;
			this->btn_ajustes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ajustes->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ajustes->ForeColor = System::Drawing::Color::White;
			this->btn_ajustes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_ajustes.Image")));
			this->btn_ajustes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_ajustes->Location = System::Drawing::Point(3, 191);
			this->btn_ajustes->Name = L"btn_ajustes";
			this->btn_ajustes->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_ajustes->Size = System::Drawing::Size(146, 41);
			this->btn_ajustes->TabIndex = 5;
			this->btn_ajustes->Text = L"   Ajustes";
			this->btn_ajustes->UseVisualStyleBackColor = true;
			this->btn_ajustes->Click += gcnew System::EventHandler(this, &Inicio::btn_ajustes_Click);
			// 
			// btn_acerca
			// 
			this->btn_acerca->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_acerca->FlatAppearance->BorderSize = 0;
			this->btn_acerca->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_acerca->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_acerca->ForeColor = System::Drawing::Color::White;
			this->btn_acerca->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_acerca.Image")));
			this->btn_acerca->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_acerca->Location = System::Drawing::Point(3, 238);
			this->btn_acerca->Name = L"btn_acerca";
			this->btn_acerca->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->btn_acerca->Size = System::Drawing::Size(146, 41);
			this->btn_acerca->TabIndex = 9;
			this->btn_acerca->Text = L"   Acerca";
			this->btn_acerca->UseVisualStyleBackColor = true;
			this->btn_acerca->Click += gcnew System::EventHandler(this, &Inicio::btn_acerca_Click);
			// 
			// click_menu
			// 
			this->click_menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->click_menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->click_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"click_menu.Image")));
			this->click_menu->Location = System::Drawing::Point(0, 0);
			this->click_menu->Name = L"click_menu";
			this->click_menu->Size = System::Drawing::Size(21, 26);
			this->click_menu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->click_menu->TabIndex = 2;
			this->click_menu->TabStop = false;
			this->click_menu->Click += gcnew System::EventHandler(this, &Inicio::click_menu_Click);
			// 
			// Tiempo_menu
			// 
			this->Tiempo_menu->Interval = 10;
			this->Tiempo_menu->Tick += gcnew System::EventHandler(this, &Inicio::Tiempo_menu_tick);
			// 
			// panelContenedor
			// 
			this->panelContenedor->BackColor = System::Drawing::Color::Transparent;
			this->panelContenedor->Controls->Add(this->pictureBox1);
			this->panelContenedor->Controls->Add(this->panel1);
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(155, 0);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(665, 515);
			this->panelContenedor->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel1->Controls->Add(this->lblFecha);
			this->panel1->Controls->Add(this->lblHora);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 478);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(665, 37);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Inicio::panel1_Paint_1);
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblFecha->Location = System::Drawing::Point(425, 4);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(106, 29);
			this->lblFecha->TabIndex = 1;
			this->lblFecha->Text = L"lblFecha";
			// 
			// lblHora
			// 
			this->lblHora->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblHora->AutoSize = true;
			this->lblHora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHora->ForeColor = System::Drawing::Color::Blue;
			this->lblHora->Location = System::Drawing::Point(187, 4);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(91, 29);
			this->lblHora->TabIndex = 0;
			this->lblHora->Text = L"lblHora";
			// 
			// panelSuperior
			// 
			this->panelSuperior->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panelSuperior->Controls->Add(this->panelControlSuperior);
			this->panelSuperior->Controls->Add(this->arrastrarVentanaL1);
			this->panelSuperior->Controls->Add(this->click_menu);
			this->panelSuperior->Controls->Add(this->text_superior);
			this->panelSuperior->Controls->Add(this->ctrolRestaurar);
			this->panelSuperior->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSuperior->Location = System::Drawing::Point(155, 0);
			this->panelSuperior->Name = L"panelSuperior";
			this->panelSuperior->Size = System::Drawing::Size(665, 26);
			this->panelSuperior->TabIndex = 2;
			this->panelSuperior->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Inicio::arrastrarVentana1);
			// 
			// panelControlSuperior
			// 
			this->panelControlSuperior->Controls->Add(this->pictureBox2);
			this->panelControlSuperior->Controls->Add(this->ctrolClose);
			this->panelControlSuperior->Controls->Add(this->ctrolMax);
			this->panelControlSuperior->Controls->Add(this->ctrolMin);
			this->panelControlSuperior->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelControlSuperior->Location = System::Drawing::Point(573, 0);
			this->panelControlSuperior->Name = L"panelControlSuperior";
			this->panelControlSuperior->Size = System::Drawing::Size(92, 26);
			this->panelControlSuperior->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(50, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(10, 14);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// ctrolClose
			// 
			this->ctrolClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ctrolClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolClose.Image")));
			this->ctrolClose->Location = System::Drawing::Point(64, 0);
			this->ctrolClose->Name = L"ctrolClose";
			this->ctrolClose->Size = System::Drawing::Size(23, 25);
			this->ctrolClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolClose->TabIndex = 0;
			this->ctrolClose->TabStop = false;
			this->ctrolClose->Click += gcnew System::EventHandler(this, &Inicio::ctrolClose_Click);
			// 
			// ctrolMax
			// 
			this->ctrolMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ctrolMax->Cursor = System::Windows::Forms::Cursors::No;
			this->ctrolMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolMax.Image")));
			this->ctrolMax->Location = System::Drawing::Point(30, 0);
			this->ctrolMax->Name = L"ctrolMax";
			this->ctrolMax->Size = System::Drawing::Size(31, 26);
			this->ctrolMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolMax->TabIndex = 1;
			this->ctrolMax->TabStop = false;
			this->ctrolMax->Click += gcnew System::EventHandler(this, &Inicio::ctrolMax_Click);
			// 
			// ctrolMin
			// 
			this->ctrolMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ctrolMin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolMin.Image")));
			this->ctrolMin->Location = System::Drawing::Point(1, 3);
			this->ctrolMin->Name = L"ctrolMin";
			this->ctrolMin->Size = System::Drawing::Size(29, 21);
			this->ctrolMin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ctrolMin->TabIndex = 2;
			this->ctrolMin->TabStop = false;
			this->ctrolMin->Click += gcnew System::EventHandler(this, &Inicio::ctrolMin_Click);
			// 
			// arrastrarVentanaL1
			// 
			this->arrastrarVentanaL1->AutoSize = true;
			this->arrastrarVentanaL1->Location = System::Drawing::Point(332, 4);
			this->arrastrarVentanaL1->Name = L"arrastrarVentanaL1";
			this->arrastrarVentanaL1->Size = System::Drawing::Size(0, 13);
			this->arrastrarVentanaL1->TabIndex = 4;
			// 
			// text_superior
			// 
			this->text_superior->AutoSize = true;
			this->text_superior->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->text_superior->ForeColor = System::Drawing::Color::White;
			this->text_superior->Location = System::Drawing::Point(46, 3);
			this->text_superior->Name = L"text_superior";
			this->text_superior->Size = System::Drawing::Size(205, 21);
			this->text_superior->TabIndex = 3;
			this->text_superior->Text = L"SIVENALFERR | COMEDOR";
			// 
			// ctrolRestaurar
			// 
			this->ctrolRestaurar->Location = System::Drawing::Point(0, 0);
			this->ctrolRestaurar->Name = L"ctrolRestaurar";
			this->ctrolRestaurar->Size = System::Drawing::Size(100, 50);
			this->ctrolRestaurar->TabIndex = 5;
			this->ctrolRestaurar->TabStop = false;
			// 
			// Hora
			// 
			this->Hora->Enabled = true;
			this->Hora->Tick += gcnew System::EventHandler(this, &Inicio::Hora_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(164, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(422, 429);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(820, 515);
			this->Controls->Add(this->panelSuperior);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->Menu);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->Opacity = 0.98;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SIVENALFERR";
			this->Menu->ResumeLayout(false);
			this->arrastrarVentanaMenu->ResumeLayout(false);
			this->arrastrarVentanaMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->click_menu))->EndInit();
			this->panelContenedor->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panelSuperior->ResumeLayout(false);
			this->panelSuperior->PerformLayout();
			this->panelControlSuperior->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolRestaurar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
//Es la parte encargada de la animación del menú
bool MenuExpandido = true;
private: System::Void Tiempo_menu_tick(System::Object^ sender, System::EventArgs^ e) {
	int cambio = MenuExpandido ? -10 : 10;
	Menu->Width += cambio;

	if (Menu->Width == Menu->MinimumSize.Width || Menu->Width == Menu->MaximumSize.Width) {
		MenuExpandido = !MenuExpandido;
		Tiempo_menu->Stop();
	}
}

	// Función para abrir un formulario
 template <typename MiForm>
 void AbrirFormulario(Control^ panelFormularios) {
	 Form^ formulario = gcnew MiForm();
	 formulario->TopLevel = false;
	 formulario->Dock = DockStyle::Fill;
	 panelFormularios->Controls->Add(formulario);
	 panelFormularios->Tag = formulario;

	 if (MenuExpandido) {
		 Menu->Width -= 10;
		 Tiempo_menu->Start();
		 if (Menu->Width == Menu->MinimumSize.Width) {
			 MenuExpandido = false;
			 Tiempo_menu->Stop();
		 }
	 }

	 formulario->Show();
	 formulario->BringToFront();
 }


private: System::Void click_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	Tiempo_menu->Start();
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void ctrolClose_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Si cierra el programa se puede perder toda la información no guardada", "Advertencia", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		//Se cerrará el programa
		Application::Exit();
	}
	else {
		//Se cierra el cuadro de dialogo
	}
}	

	//int lx, ly;
private: System::Void ctrolMax_Click(System::Object^ sender, System::EventArgs^ e) {

	/*lx = this->Location.X;
	ly = this->Location.Y;
	//this->WindowState = FormWindowState::Maximized;
	this->Size = System::Windows::Forms::Screen::PrimaryScreen->WorkingArea.Size;
	this->Location = System::Windows::Forms::Screen::PrimaryScreen->WorkingArea.Location;
	ctrolRestaurar->Visible = true;
	ctrolMax->Visible = false;*/
}
	/*private: System::Void ctrolRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	 //this->WindowState = FormWindowState::Normal;
	this->Location = System::Drawing::Point(lx, ly);
	this->Size = System::Drawing::Size(820, 515);
	ctrolRestaurar->Visible = false;
	ctrolMax->Visible = true;
}*/
private: System::Void ctrolMin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}

private: System::Void btn_solicitud_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormulario<Solicitud>(panelContenedor);
}
private: System::Void btn_ajustes_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btn_detalles_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void arrastrarVentana1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Size = System::Drawing::Size(804, 476);
		ctrolRestaurar->Visible = false;
		ctrolMax->Visible = true;
		this->Location = System::Drawing::Point(this->Location.X + e->X - arrastrarVentanaL1->Left, this->Location.Y + e->Y - arrastrarVentanaL1->Top);
	}
}

private: System::Void arrastrarVentana2(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Size = System::Drawing::Size(804, 476);
		ctrolRestaurar->Visible = false;
		ctrolMax->Visible = true;
		this->Location = System::Drawing::Point(this->Location.X + e->X - arrastrarVentanaL2->Left, this->Location.Y + e->Y - arrastrarVentanaL2->Top);
	}
}

private: System::Void Hora_Tick(System::Object^ sender, System::EventArgs^ e) {
	lblHora->Text = System::DateTime::Now.ToLongTimeString();
	lblFecha->Text = System::DateTime::Now.ToShortDateString();
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void btn_acerca_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormulario<Acerca>(panelContenedor);
}
};
}
