#pragma once
#include "Supervisores.h"
#include "Solicitando.h"

namespace SIVENALFERR2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Solicitud
	/// </summary>
	public ref class Solicitud : public System::Windows::Forms::Form
	{
	public:
		Solicitud()
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
		~Solicitud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ txt_titulo;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_iniciar;
	private: System::Windows::Forms::TextBox^ txt_contraseña;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_Name;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Area;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vegetariano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Regular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dieta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::Label^ lbl_contraseña;









	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_titulo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_iniciar = (gcnew System::Windows::Forms::Button());
			this->txt_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbl_contraseña = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Area = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vegetariano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Regular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dieta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_titulo
			// 
			this->txt_titulo->AutoSize = true;
			this->txt_titulo->BackColor = System::Drawing::Color::Transparent;
			this->txt_titulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_titulo->ForeColor = System::Drawing::Color::White;
			this->txt_titulo->Location = System::Drawing::Point(31, 391);
			this->txt_titulo->Name = L"txt_titulo";
			this->txt_titulo->Size = System::Drawing::Size(290, 32);
			this->txt_titulo->TabIndex = 0;
			this->txt_titulo->Text = L"Solicitud de Comidas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 32);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Acceso de solicitud";
			// 
			// btn_cancelar
			// 
			this->btn_cancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btn_cancelar->FlatAppearance->BorderSize = 0;
			this->btn_cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancelar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancelar->ForeColor = System::Drawing::Color::White;
			this->btn_cancelar->Location = System::Drawing::Point(193, 299);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(82, 29);
			this->btn_cancelar->TabIndex = 42;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Solicitud::btn_cancelar_Click);
			// 
			// btn_iniciar
			// 
			this->btn_iniciar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->btn_iniciar->FlatAppearance->BorderSize = 0;
			this->btn_iniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_iniciar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_iniciar->ForeColor = System::Drawing::Color::White;
			this->btn_iniciar->Location = System::Drawing::Point(31, 299);
			this->btn_iniciar->Name = L"btn_iniciar";
			this->btn_iniciar->Size = System::Drawing::Size(93, 29);
			this->btn_iniciar->TabIndex = 41;
			this->btn_iniciar->Text = L"Continuar";
			this->btn_iniciar->UseVisualStyleBackColor = false;
			this->btn_iniciar->Click += gcnew System::EventHandler(this, &Solicitud::btn_iniciar_Click);
			// 
			// txt_contraseña
			// 
			this->txt_contraseña->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contraseña->ForeColor = System::Drawing::Color::Gray;
			this->txt_contraseña->Location = System::Drawing::Point(89, 189);
			this->txt_contraseña->Name = L"txt_contraseña";
			this->txt_contraseña->Size = System::Drawing::Size(145, 26);
			this->txt_contraseña->TabIndex = 40;
			this->txt_contraseña->Text = L"*****";
			this->txt_contraseña->Enter += gcnew System::EventHandler(this, &Solicitud::txt_contraseña_Enter);
			this->txt_contraseña->Leave += gcnew System::EventHandler(this, &Solicitud::txt_contraseña_Leave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(139, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 22);
			this->label8->TabIndex = 39;
			this->label8->Text = L"ID:";
			// 
			// txt_Name
			// 
			this->txt_Name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Name->ForeColor = System::Drawing::Color::Gray;
			this->txt_Name->Location = System::Drawing::Point(88, 104);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(145, 26);
			this->txt_Name->TabIndex = 38;
			this->txt_Name->Text = L"Jose";
			this->txt_Name->Enter += gcnew System::EventHandler(this, &Solicitud::txt_Name_Enter);
			this->txt_Name->Leave += gcnew System::EventHandler(this, &Solicitud::txt_Name_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(108, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 24);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Nombre:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->panel1->Controls->Add(this->lbl_contraseña);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_cancelar);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->btn_iniciar);
			this->panel1->Controls->Add(this->txt_Name);
			this->panel1->Controls->Add(this->txt_contraseña);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(12, 41);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 343);
			this->panel1->TabIndex = 44;
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->ForeColor = System::Drawing::Color::White;
			this->lbl_contraseña->Location = System::Drawing::Point(33, 246);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(74, 24);
			this->lbl_contraseña->TabIndex = 44;
			this->lbl_contraseña->Text = L"label2";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Nombre,
					this->Apellido, this->Area, this->Vegetariano, this->Regular, this->Dieta, this->Total, this->Fecha
			});
			this->dataGridView1->Location = System::Drawing::Point(373, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(419, 343);
			this->dataGridView1->TabIndex = 45;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->Name = L"Apellido";
			// 
			// Area
			// 
			this->Area->HeaderText = L"Area de Trabajo";
			this->Area->Name = L"Area";
			// 
			// Vegetariano
			// 
			this->Vegetariano->HeaderText = L"Vegetariano";
			this->Vegetariano->Name = L"Vegetariano";
			// 
			// Regular
			// 
			this->Regular->HeaderText = L"Regular";
			this->Regular->Name = L"Regular";
			// 
			// Dieta
			// 
			this->Dieta->HeaderText = L"Dieta";
			this->Dieta->Name = L"Dieta";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total de menus";
			this->Total->Name = L"Total";
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			// 
			// Solicitud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(804, 476);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txt_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Solicitud";
			this->Text = L"Solicitud";
			this->Load += gcnew System::EventHandler(this, &Solicitud::Solicitud_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		Supervisores^ temp = gcnew Supervisores();

		String^ id = this->txt_contraseña->Text;
		String^ Name = this->txt_Name->Text;

		MessageBox::Show(Name, id);
		if (Name->Length == 0 || id->Length == 0) {
			//MessageBox::Show("Llene todo correctamente", "Advertencia");
			lbl_contraseña->Text = "Llene todo correctamente";
		}
		else if (txt_Name->Text == "0" || txt_contraseña->Text == "") {
			Solicitando^ temporal = gcnew Solicitando();
			temporal->ShowDialog();
		}
		else {
			bool Verificador = temp->verificar_inicio_sesion(id, Name);
			if (Verificador) {
				Solicitando^ temporal = gcnew Solicitando();
				temporal->ShowDialog();
			}
			else {
				lbl_contraseña->Text = "ID o Nombre Incorrecto";
			}
		}
	}
	private: System::Void btn_cancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Solicitud_Load(System::Object^ sender, System::EventArgs^ e) {
		Supervisores^ temp = gcnew Supervisores();
		temp->fichero_leer();
	}
	private: System::Void txt_Name_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txt_Name->Text == "Jose") {
			txt_Name->Text = "";
			txt_Name->ForeColor = Color::Black;
		}
	}
	private: System::Void txt_Name_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txt_Name->Text == "") {
			txt_Name->Text = "Jose";
			txt_Name->ForeColor = Color::Gray;
		}
	}
	private: System::Void txt_contraseña_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txt_contraseña->Text == "*****") {
			txt_contraseña->Text = "";
			txt_contraseña->ForeColor = Color::Black;
		}
	}
	private: System::Void txt_contraseña_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txt_contraseña->Text == "") {
			txt_contraseña->Text = "*****";
			txt_contraseña->ForeColor = Color::Gray;
		}
	}
	};
}
