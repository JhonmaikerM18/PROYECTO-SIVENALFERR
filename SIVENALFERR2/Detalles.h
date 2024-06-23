#pragma once

namespace SIVENALFERR2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Detalles
	/// </summary>
	public ref class Detalles : public System::Windows::Forms::Form
	{
	public:
		Detalles(void)
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
		~Detalles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Jerarquia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Trabajadores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Jerarquia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Trabajadores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			//
			// dataGridView1
			//
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID, this->Jerarquia,
					this->Trabajadores, this->Nombre, this->Apellido
			});
			this->dataGridView1->Location = System::Drawing::Point(42, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(492, 349);
			this->dataGridView1->TabIndex = 0;
			//
			// ID
			//
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			//
			// Jerarquia
			//
			this->Jerarquia->HeaderText = L"Jerarquia";
			this->Jerarquia->Name = L"Jerarquia";
			//
			// Trabajadores
			//
			this->Trabajadores->HeaderText = L"Trabajadores";
			this->Trabajadores->Name = L"Trabajadores";
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
			// Detalles
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 437);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Detalles";
			this->Text = L"Detalles";

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
		}
#pragma endregion
	};
}
