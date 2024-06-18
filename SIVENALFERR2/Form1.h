#pragma once
#include "Inicio.h"

namespace SIVENALFERR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ Menu;

	private: System::Windows::Forms::Button^ btn_inicio;
	private: System::Windows::Forms::Button^ btn_solicitud;

	private: System::Windows::Forms::Button^ btn_detalles;

	private: System::Windows::Forms::Button^ btn_ajustes;

	private: System::Windows::Forms::Button^ btn_cerrar;



	private: System::Windows::Forms::Timer^ animacion_menu;
	private: System::Windows::Forms::PictureBox^ click_menu;
	private: System::Windows::Forms::Timer^ Tiempo_menu;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: System::Windows::Forms::Panel^ panelSuperior;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ text_superior;
	private: System::Windows::Forms::PictureBox^ ctrolMax;
	private: System::Windows::Forms::PictureBox^ ctrolRestaurar;
	private: System::Windows::Forms::PictureBox^ ctrolClose;
	private: System::Windows::Forms::PictureBox^ ctrolMin;











	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Menu = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_inicio = (gcnew System::Windows::Forms::Button());
			this->btn_solicitud = (gcnew System::Windows::Forms::Button());
			this->btn_detalles = (gcnew System::Windows::Forms::Button());
			this->btn_ajustes = (gcnew System::Windows::Forms::Button());
			this->btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->click_menu = (gcnew System::Windows::Forms::PictureBox());
			this->Tiempo_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->panelSuperior = (gcnew System::Windows::Forms::Panel());
			this->text_superior = (gcnew System::Windows::Forms::Label());
			this->ctrolClose = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolMax = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolMin = (gcnew System::Windows::Forms::PictureBox());
			this->ctrolRestaurar = (gcnew System::Windows::Forms::PictureBox());
			this->Menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->click_menu))->BeginInit();
			this->panelSuperior->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolRestaurar))->BeginInit();
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->Menu->Controls->Add(this->btn_inicio);
			this->Menu->Controls->Add(this->btn_solicitud);
			this->Menu->Controls->Add(this->btn_detalles);
			this->Menu->Controls->Add(this->btn_ajustes);
			this->Menu->Controls->Add(this->btn_cerrar);
			this->Menu->Controls->Add(this->pictureBox1);
			this->Menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->Menu->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->MaximumSize = System::Drawing::Size(155, 1000);
			this->Menu->MinimumSize = System::Drawing::Size(40, 440);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(155, 440);
			this->Menu->TabIndex = 0;
			// 
			// btn_inicio
			// 
			this->btn_inicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_inicio->FlatAppearance->BorderSize = 0;
			this->btn_inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_inicio->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inicio->ForeColor = System::Drawing::Color::White;
			this->btn_inicio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_inicio.Image")));
			this->btn_inicio->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_inicio->Location = System::Drawing::Point(3, 30);
			this->btn_inicio->Margin = System::Windows::Forms::Padding(3, 30, 3, 3);
			this->btn_inicio->Name = L"btn_inicio";
			this->btn_inicio->Size = System::Drawing::Size(150, 41);
			this->btn_inicio->TabIndex = 2;
			this->btn_inicio->Text = L"Inicio";
			this->btn_inicio->UseVisualStyleBackColor = true;
			this->btn_inicio->Click += gcnew System::EventHandler(this, &Form1::btn_inicio_Click);
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
			this->btn_solicitud->Location = System::Drawing::Point(3, 77);
			this->btn_solicitud->Name = L"btn_solicitud";
			this->btn_solicitud->Size = System::Drawing::Size(150, 41);
			this->btn_solicitud->TabIndex = 3;
			this->btn_solicitud->Text = L"Solicitud";
			this->btn_solicitud->UseVisualStyleBackColor = true;
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
			this->btn_detalles->Location = System::Drawing::Point(3, 124);
			this->btn_detalles->Name = L"btn_detalles";
			this->btn_detalles->Size = System::Drawing::Size(150, 41);
			this->btn_detalles->TabIndex = 4;
			this->btn_detalles->Text = L"Detalles";
			this->btn_detalles->UseVisualStyleBackColor = true;
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
			this->btn_ajustes->Location = System::Drawing::Point(3, 171);
			this->btn_ajustes->Name = L"btn_ajustes";
			this->btn_ajustes->Size = System::Drawing::Size(150, 41);
			this->btn_ajustes->TabIndex = 5;
			this->btn_ajustes->Text = L"Ajustes";
			this->btn_ajustes->UseVisualStyleBackColor = true;
			// 
			// btn_cerrar
			// 
			this->btn_cerrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cerrar->FlatAppearance->BorderSize = 0;
			this->btn_cerrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cerrar->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cerrar->ForeColor = System::Drawing::Color::White;
			this->btn_cerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cerrar.Image")));
			this->btn_cerrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_cerrar->Location = System::Drawing::Point(3, 218);
			this->btn_cerrar->Name = L"btn_cerrar";
			this->btn_cerrar->Size = System::Drawing::Size(150, 41);
			this->btn_cerrar->TabIndex = 6;
			this->btn_cerrar->Text = L"Cerrar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 272);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// click_menu
			// 
			this->click_menu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->click_menu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"click_menu.Image")));
			this->click_menu->Location = System::Drawing::Point(6, 1);
			this->click_menu->Name = L"click_menu";
			this->click_menu->Size = System::Drawing::Size(21, 23);
			this->click_menu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->click_menu->TabIndex = 2;
			this->click_menu->TabStop = false;
			this->click_menu->Click += gcnew System::EventHandler(this, &Form1::click_menu_Click);
			// 
			// Tiempo_menu
			// 
			this->Tiempo_menu->Interval = 10;
			this->Tiempo_menu->Tick += gcnew System::EventHandler(this, &Form1::Tiempo_menu_tick);
			// 
			// panelContenedor
			// 
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(155, 0);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(523, 428);
			this->panelContenedor->TabIndex = 1;
			// 
			// panelSuperior
			// 
			this->panelSuperior->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->panelSuperior->Controls->Add(this->ctrolMax);
			this->panelSuperior->Controls->Add(this->text_superior);
			this->panelSuperior->Controls->Add(this->ctrolRestaurar);
			this->panelSuperior->Controls->Add(this->click_menu);
			this->panelSuperior->Controls->Add(this->ctrolClose);
			this->panelSuperior->Controls->Add(this->ctrolMin);
			this->panelSuperior->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelSuperior->Location = System::Drawing::Point(155, 0);
			this->panelSuperior->Name = L"panelSuperior";
			this->panelSuperior->Size = System::Drawing::Size(523, 26);
			this->panelSuperior->TabIndex = 2;
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
			// ctrolClose
			// 
			this->ctrolClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ctrolClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolClose.Image")));
			this->ctrolClose->Location = System::Drawing::Point(490, 3);
			this->ctrolClose->Name = L"ctrolClose";
			this->ctrolClose->Size = System::Drawing::Size(30, 20);
			this->ctrolClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolClose->TabIndex = 0;
			this->ctrolClose->TabStop = false;
			this->ctrolClose->Click += gcnew System::EventHandler(this, &Form1::ctrolClose_Click);
			// 
			// ctrolMax
			// 
			this->ctrolMax->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ctrolMax->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolMax->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolMax.Image")));
			this->ctrolMax->Location = System::Drawing::Point(463, 3);
			this->ctrolMax->Name = L"ctrolMax";
			this->ctrolMax->Size = System::Drawing::Size(30, 20);
			this->ctrolMax->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolMax->TabIndex = 1;
			this->ctrolMax->TabStop = false;
			this->ctrolMax->Click += gcnew System::EventHandler(this, &Form1::ctrolMax_Click);
			// 
			// ctrolMin
			// 
			this->ctrolMin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ctrolMin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolMin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolMin.Image")));
			this->ctrolMin->Location = System::Drawing::Point(433, 3);
			this->ctrolMin->Name = L"ctrolMin";
			this->ctrolMin->Size = System::Drawing::Size(30, 20);
			this->ctrolMin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolMin->TabIndex = 2;
			this->ctrolMin->TabStop = false;
			this->ctrolMin->Click += gcnew System::EventHandler(this, &Form1::ctrolMin_Click);
			// 
			// ctrolRestaurar
			// 
			this->ctrolRestaurar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ctrolRestaurar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ctrolRestaurar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ctrolRestaurar.Image")));
			this->ctrolRestaurar->Location = System::Drawing::Point(463, 3);
			this->ctrolRestaurar->Name = L"ctrolRestaurar";
			this->ctrolRestaurar->Size = System::Drawing::Size(30, 20);
			this->ctrolRestaurar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ctrolRestaurar->TabIndex = 3;
			this->ctrolRestaurar->TabStop = false;
			this->ctrolRestaurar->Visible = false;
			this->ctrolRestaurar->Click += gcnew System::EventHandler(this, &Form1::ctrolRestaurar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(678, 428);
			this->Controls->Add(this->panelSuperior);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->Menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Opacity = 0.98;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SIVENALFERR";
			this->Menu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->click_menu))->EndInit();
			this->panelSuperior->ResumeLayout(false);
			this->panelSuperior->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ctrolRestaurar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool MenuExpandible;
private: System::Void Tiempo_menu_tick(System::Object^ sender, System::EventArgs^ e) {
	//Este es para cuando el menu se hace peque�o o minimiza.
	if (MenuExpandible) {
		Menu->Width -= 10;
		if (Menu->Width == Menu->MinimumSize.Width) {
			MenuExpandible = false;
			Tiempo_menu->Stop();
		}
	}
	//Este es para cuando el menu se maximiza.
	else {
		Menu->Width += 10;
		if (Menu->Width == Menu->MaximumSize.Width) {
			MenuExpandible = true;
			Tiempo_menu->Stop();
		}
	}
}
	template<class t>
	void AbrirFormDelPanel(t fh)
	{
		   if (this->panelContenedor->Controls->Count > 0)
			   this->panelContenedor->Controls->RemoveAt(0);
		   fh->TopLevel = false;
		   fh->Dock = DockStyle::Fill;
		   this->panelContenedor->Controls->Add(fh);
		   this->panelContenedor->Tag = fh;
		   fh->Show();
	}

private: System::Void click_menu_Click(System::Object^ sender, System::EventArgs^ e) {
	Tiempo_menu->Start();
}
private: System::Void btn_inicio_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirFormDelPanel(gcnew SIVENALFERR2::Inicio);
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void ctrolClose_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void ctrolMax_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Maximized;
	ctrolRestaurar->Visible = true;
	ctrolMax->Visible = false;
}
private: System::Void ctrolRestaurar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Normal;
	ctrolRestaurar->Visible = false;
	ctrolMax->Visible = true;
}
private: System::Void ctrolMin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
};
}
