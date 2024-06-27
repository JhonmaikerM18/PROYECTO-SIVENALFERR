#pragma once
#include "UsuarioSupervisor.h"

namespace SIVENALFERR2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Supervisores : public System::Windows::Forms::Form
	{
	public:
		Supervisores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		bool edit = false;
		int id = 1;
		int rows = 0;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_n;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Jerarquia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Area;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Trabajadores;

	public:

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Supervisores()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public: System::Windows::Forms::TextBox^ txt_Nombre;

	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ txt_Edad;

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ txt_Apellido;

	private: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::TextBox^ txt_Jerarquia;

	private: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::TextBox^ txt_AreaTrabajo;

	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::TextBox^ txt_Trabajadores;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Button^ btn_Nuevo;
	private: System::Windows::Forms::Button^ btn_Cancelar;

	private: System::Windows::Forms::Label^ lbl_sexo;
	private: System::Windows::Forms::ComboBox^ cmb_Sexo;

	private: System::Windows::Forms::GroupBox^ group_controles;
	private: System::Windows::Forms::Button^ btn_Eliminar;

	private: System::Windows::Forms::Button^ btn_Modificar;

	private: System::Windows::Forms::Button^ btn_Guardar;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ DGV_Supervisores;

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
			this->txt_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_Apellido = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_Jerarquia = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_AreaTrabajo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_Trabajadores = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_Nuevo = (gcnew System::Windows::Forms::Button());
			this->btn_Cancelar = (gcnew System::Windows::Forms::Button());
			this->lbl_sexo = (gcnew System::Windows::Forms::Label());
			this->cmb_Sexo = (gcnew System::Windows::Forms::ComboBox());
			this->group_controles = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Eliminar = (gcnew System::Windows::Forms::Button());
			this->btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->btn_Guardar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Edad = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->DGV_Supervisores = (gcnew System::Windows::Forms::DataGridView());
			this->id_n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Jerarquia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Area = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Trabajadores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->group_controles->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Supervisores))->BeginInit();
			this->SuspendLayout();
			//
			// txt_Nombre
			//
			this->txt_Nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Nombre->Location = System::Drawing::Point(11, 61);
			this->txt_Nombre->Name = L"txt_Nombre";
			this->txt_Nombre->Size = System::Drawing::Size(145, 29);
			this->txt_Nombre->TabIndex = 4;
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nombre:";
			//
			// txt_Apellido
			//
			this->txt_Apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Apellido->Location = System::Drawing::Point(187, 61);
			this->txt_Apellido->Name = L"txt_Apellido";
			this->txt_Apellido->Size = System::Drawing::Size(145, 29);
			this->txt_Apellido->TabIndex = 6;
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(214, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Apellido:";
			//
			// txt_Jerarquia
			//
			this->txt_Jerarquia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Jerarquia->Location = System::Drawing::Point(185, 63);
			this->txt_Jerarquia->Name = L"txt_Jerarquia";
			this->txt_Jerarquia->Size = System::Drawing::Size(145, 29);
			this->txt_Jerarquia->TabIndex = 8;
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(214, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 24);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Jerarquia:";
			//
			// txt_AreaTrabajo
			//
			this->txt_AreaTrabajo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_AreaTrabajo->Location = System::Drawing::Point(10, 65);
			this->txt_AreaTrabajo->Name = L"txt_AreaTrabajo";
			this->txt_AreaTrabajo->Size = System::Drawing::Size(145, 29);
			this->txt_AreaTrabajo->TabIndex = 10;
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 24);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Área de trabajo:";
			//
			// txt_Trabajadores
			//
			this->txt_Trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_Trabajadores->Location = System::Drawing::Point(86, 159);
			this->txt_Trabajadores->Name = L"txt_Trabajadores";
			this->txt_Trabajadores->Size = System::Drawing::Size(145, 29);
			this->txt_Trabajadores->TabIndex = 12;
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(91, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 24);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Trabajadores:";
			//
			// btn_Nuevo
			//
			this->btn_Nuevo->BackColor = System::Drawing::Color::Navy;
			this->btn_Nuevo->Enabled = false;
			this->btn_Nuevo->FlatAppearance->BorderSize = 0;
			this->btn_Nuevo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Nuevo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Nuevo->ForeColor = System::Drawing::Color::White;
			this->btn_Nuevo->Location = System::Drawing::Point(28, 19);
			this->btn_Nuevo->Name = L"btn_Nuevo";
			this->btn_Nuevo->Size = System::Drawing::Size(82, 29);
			this->btn_Nuevo->TabIndex = 15;
			this->btn_Nuevo->Text = L"Nuevo";
			this->btn_Nuevo->UseVisualStyleBackColor = false;
			this->btn_Nuevo->Click += gcnew System::EventHandler(this, &Supervisores::btn_Nuevo_Click);
			//
			// btn_Cancelar
			//
			this->btn_Cancelar->BackColor = System::Drawing::Color::Navy;
			this->btn_Cancelar->FlatAppearance->BorderSize = 0;
			this->btn_Cancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cancelar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Cancelar->ForeColor = System::Drawing::Color::White;
			this->btn_Cancelar->Location = System::Drawing::Point(268, 38);
			this->btn_Cancelar->Name = L"btn_Cancelar";
			this->btn_Cancelar->Size = System::Drawing::Size(82, 29);
			this->btn_Cancelar->TabIndex = 16;
			this->btn_Cancelar->Text = L"Cancelar";
			this->btn_Cancelar->UseVisualStyleBackColor = false;
			//
			// lbl_sexo
			//
			this->lbl_sexo->AutoSize = true;
			this->lbl_sexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_sexo->Location = System::Drawing::Point(42, 127);
			this->lbl_sexo->Name = L"lbl_sexo";
			this->lbl_sexo->Size = System::Drawing::Size(59, 24);
			this->lbl_sexo->TabIndex = 18;
			this->lbl_sexo->Text = L"Sexo:";
			//
			// cmb_Sexo
			//
			this->cmb_Sexo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_Sexo->FormattingEnabled = true;
			this->cmb_Sexo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cmb_Sexo->Location = System::Drawing::Point(13, 162);
			this->cmb_Sexo->Name = L"cmb_Sexo";
			this->cmb_Sexo->Size = System::Drawing::Size(142, 32);
			this->cmb_Sexo->TabIndex = 19;
			//
			// group_controles
			//
			this->group_controles->Controls->Add(this->btn_Eliminar);
			this->group_controles->Controls->Add(this->btn_Modificar);
			this->group_controles->Controls->Add(this->btn_Guardar);
			this->group_controles->Controls->Add(this->btn_Cancelar);
			this->group_controles->Controls->Add(this->btn_Nuevo);
			this->group_controles->Location = System::Drawing::Point(385, 35);
			this->group_controles->Name = L"group_controles";
			this->group_controles->Size = System::Drawing::Size(369, 130);
			this->group_controles->TabIndex = 20;
			this->group_controles->TabStop = false;
			//
			// btn_Eliminar
			//
			this->btn_Eliminar->BackColor = System::Drawing::Color::Navy;
			this->btn_Eliminar->FlatAppearance->BorderSize = 0;
			this->btn_Eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Eliminar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Eliminar->ForeColor = System::Drawing::Color::White;
			this->btn_Eliminar->Location = System::Drawing::Point(148, 72);
			this->btn_Eliminar->Name = L"btn_Eliminar";
			this->btn_Eliminar->Size = System::Drawing::Size(82, 29);
			this->btn_Eliminar->TabIndex = 19;
			this->btn_Eliminar->Text = L"Eliminar";
			this->btn_Eliminar->UseVisualStyleBackColor = false;
			this->btn_Eliminar->Click += gcnew System::EventHandler(this, &Supervisores::btn_Eliminar_Click);
			//
			// btn_Modificar
			//
			this->btn_Modificar->BackColor = System::Drawing::Color::Navy;
			this->btn_Modificar->FlatAppearance->BorderSize = 0;
			this->btn_Modificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Modificar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Modificar->ForeColor = System::Drawing::Color::White;
			this->btn_Modificar->Location = System::Drawing::Point(148, 19);
			this->btn_Modificar->Name = L"btn_Modificar";
			this->btn_Modificar->Size = System::Drawing::Size(82, 29);
			this->btn_Modificar->TabIndex = 18;
			this->btn_Modificar->Text = L"Modificar";
			this->btn_Modificar->UseVisualStyleBackColor = false;
			this->btn_Modificar->Click += gcnew System::EventHandler(this, &Supervisores::btn_Modificar_Click);
			//
			// btn_Guardar
			//
			this->btn_Guardar->BackColor = System::Drawing::Color::Navy;
			this->btn_Guardar->FlatAppearance->BorderSize = 0;
			this->btn_Guardar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Guardar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Guardar->ForeColor = System::Drawing::Color::White;
			this->btn_Guardar->Location = System::Drawing::Point(28, 72);
			this->btn_Guardar->Name = L"btn_Guardar";
			this->btn_Guardar->Size = System::Drawing::Size(82, 29);
			this->btn_Guardar->TabIndex = 17;
			this->btn_Guardar->Text = L"Guardar";
			this->btn_Guardar->UseVisualStyleBackColor = false;
			this->btn_Guardar->Click += gcnew System::EventHandler(this, &Supervisores::btn_Guardar_Click);
			//
			// groupBox1
			//
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txt_Edad);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txt_Nombre);
			this->groupBox1->Controls->Add(this->cmb_Sexo);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->lbl_sexo);
			this->groupBox1->Controls->Add(this->txt_Apellido);
			this->groupBox1->Location = System::Drawing::Point(12, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 214);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Personales";
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Edad:";
			//
			// txt_Edad
			//
			this->txt_Edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Edad->Location = System::Drawing::Point(187, 164);
			this->txt_Edad->Name = L"txt_Edad";
			this->txt_Edad->Size = System::Drawing::Size(145, 29);
			this->txt_Edad->TabIndex = 21;
			//
			// groupBox2
			//
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->txt_AreaTrabajo);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txt_Jerarquia);
			this->groupBox2->Controls->Add(this->txt_Trabajadores);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(12, 255);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(350, 204);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de trabajo";
			//
			// DGV_Supervisores
			//
			this->DGV_Supervisores->AllowUserToAddRows = false;
			this->DGV_Supervisores->AllowUserToDeleteRows = false;
			this->DGV_Supervisores->AllowUserToResizeColumns = false;
			this->DGV_Supervisores->AllowUserToResizeRows = false;
			this->DGV_Supervisores->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DGV_Supervisores->BackgroundColor = System::Drawing::Color::White;
			this->DGV_Supervisores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGV_Supervisores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->id_n,
					this->Nombre, this->Apellido, this->Edad, this->Sexo, this->Jerarquia, this->Area, this->Trabajadores
			});
			this->DGV_Supervisores->Location = System::Drawing::Point(385, 176);
			this->DGV_Supervisores->Name = L"DGV_Supervisores";
			this->DGV_Supervisores->Size = System::Drawing::Size(407, 288);
			this->DGV_Supervisores->TabIndex = 23;
			//
			// id_n
			//
			this->id_n->HeaderText = L"ID";
			this->id_n->Name = L"id_n";
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
			// Edad
			//
			this->Edad->HeaderText = L"Edad";
			this->Edad->Name = L"Edad";
			//
			// Sexo
			//
			this->Sexo->HeaderText = L"Sexo";
			this->Sexo->Name = L"Sexo";
			this->Sexo->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Sexo->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			//
			// Jerarquia
			//
			this->Jerarquia->HeaderText = L"Jerarquia";
			this->Jerarquia->Name = L"Jerarquia";
			//
			// Area
			//
			this->Area->HeaderText = L"Área de trabajo";
			this->Area->Name = L"Area";
			//
			// Trabajadores
			//
			this->Trabajadores->HeaderText = L"Trabajadores";
			this->Trabajadores->Name = L"Trabajadores";
			//
			// Supervisores
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(804, 476);
			this->Controls->Add(this->DGV_Supervisores);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->group_controles);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Supervisores";
			this->Text = L"ingresarDatos";
			this->Load += gcnew System::EventHandler(this, &Supervisores::registroSupervisor_Load);
			this->group_controles->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGV_Supervisores))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void btn_Nuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		edit = false;
		btn_Guardar->Enabled = true;
		btn_Guardar->BackColor = Color::Navy;
		btn_Guardar->ForeColor = Color::White;
		//
		btn_Nuevo->Enabled = false;
		btn_Nuevo->BackColor = Color::Navy;
		btn_Nuevo->ForeColor = Color::White;
	}
	private: System::Void registroSupervisor_Load(System::Object^ sender, System::EventArgs^ e) {
		btn_Nuevo->Enabled = false;
	}
	private: void ClearTextBox() {
		txt_Nombre->Text = "";
		txt_Apellido->Text = "";
		txt_Edad->Text = "";
		txt_Jerarquia->Text = "";
		txt_Trabajadores->Text = "";
		txt_AreaTrabajo->Text = "";
	}

	private: System::Void btn_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!edit) {
			user_Supervisor^ user = gcnew user_Supervisor();
			//Cuando se esta creando un usuario
			int x = DGV_Supervisores->Rows->Add();
			//
			user->SupervisorID = id;
			//Datos Personales
			user->Nombre = txt_Nombre->Text;
			user->Apellido = txt_Apellido->Text;
			user->Edad = Convert::ToInt32(txt_Edad->Text);
			user->Sexo = cmb_Sexo->SelectedItem->ToString();
			//Datos de Trabajo
			user->AreaTrabajo = txt_AreaTrabajo->Text;
			user->NivelJerarquico = Convert::ToInt32(txt_Jerarquia->Text);
			user->CantidadTrabajadores = Convert::ToInt32(txt_Trabajadores->Text);

			//Asignación al DataGridView
			DGV_Supervisores->Rows[x]->Cells[0]->Value = user->SupervisorID;
			DGV_Supervisores->Rows[x]->Cells[1]->Value = user->Nombre;
			DGV_Supervisores->Rows[x]->Cells[2]->Value = user->Apellido;
			DGV_Supervisores->Rows[x]->Cells[3]->Value = user->Edad;
			DGV_Supervisores->Rows[x]->Cells[4]->Value = user->Sexo;
			DGV_Supervisores->Rows[x]->Cells[5]->Value = user->NivelJerarquico;
			DGV_Supervisores->Rows[x]->Cells[6]->Value = user->AreaTrabajo;
			DGV_Supervisores->Rows[x]->Cells[7]->Value = user->CantidadTrabajadores;

			ClearTextBox();
			id++;
			btn_Nuevo->Enabled = true;
			btn_Guardar->Enabled = false;
		}
		else {
			if (DGV_Supervisores->Rows->Count > 0) {
				user_Supervisor^ user = gcnew user_Supervisor();

				user->Nombre = txt_Nombre->Text;
				user->Apellido = txt_Apellido->Text;
				user->Edad = Convert::ToInt32(txt_Edad->Text);
				user->Sexo = cmb_Sexo->SelectedItem->ToString();
				//Datos de Trabajo
				user->AreaTrabajo = txt_AreaTrabajo->Text;
				user->NivelJerarquico = Convert::ToInt32(txt_Jerarquia->Text);
				user->CantidadTrabajadores = Convert::ToInt32(txt_Trabajadores->Text);
				//Asignación al DataGridView
				DGV_Supervisores->Rows[rows]->Cells[1]->Value = user->Nombre;
				DGV_Supervisores->Rows[rows]->Cells[2]->Value = user->Apellido;
				DGV_Supervisores->Rows[rows]->Cells[3]->Value = user->Edad;
				DGV_Supervisores->Rows[rows]->Cells[4]->Value = user->Sexo;
				DGV_Supervisores->Rows[rows]->Cells[5]->Value = user->NivelJerarquico;
				DGV_Supervisores->Rows[rows]->Cells[6]->Value = user->AreaTrabajo;
				DGV_Supervisores->Rows[rows]->Cells[7]->Value = user->CantidadTrabajadores;
				//
				rows = 0;

				ClearTextBox();
				edit = false;
			}
		}
	}
	private: System::Void btn_Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DGV_Supervisores->SelectedRows->Count > 0) {
			edit = true;
			rows = DGV_Supervisores->SelectedRows[0]->Index;
			txt_Nombre->Text = DGV_Supervisores->CurrentRow->Cells[1]->Value->ToString();
			txt_Apellido->Text = DGV_Supervisores->CurrentRow->Cells[2]->Value->ToString();
			txt_Edad->Text = DGV_Supervisores->CurrentRow->Cells[3]->Value->ToString();
			cmb_Sexo->Text = DGV_Supervisores->CurrentRow->Cells[4]->Value->ToString();
			txt_Jerarquia->Text = DGV_Supervisores->CurrentRow->Cells[6]->Value->ToString();
			txt_AreaTrabajo->Text = DGV_Supervisores->CurrentRow->Cells[5]->Value->ToString();
			txt_Trabajadores->Text = DGV_Supervisores->CurrentRow->Cells[7]->Value->ToString();
			btn_Guardar->Enabled = true;
		}
	}

	private: System::Void btn_Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (DGV_Supervisores->SelectedRows->Count > 0) {
			int r = DGV_Supervisores->SelectedRows[0]->Index;
			DGV_Supervisores->Rows->RemoveAt(r);
		}
	}

	};
}

