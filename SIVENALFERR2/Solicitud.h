#pragma once
#include "Solicitando.h"
#include "SupervisorClass.h"
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
		Solicitud(SupervisorClass^ Usuario)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			if (Usuario) {
				txt_titulo->Text = "Hola " + Usuario->Apellido;
			}
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













	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;










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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_titulo
			// 
			this->txt_titulo->AutoSize = true;
			this->txt_titulo->BackColor = System::Drawing::Color::Transparent;
			this->txt_titulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_titulo->ForeColor = System::Drawing::Color::Black;
			this->txt_titulo->Location = System::Drawing::Point(239, 25);
			this->txt_titulo->Name = L"txt_titulo";
			this->txt_titulo->Size = System::Drawing::Size(290, 32);
			this->txt_titulo->TabIndex = 0;
			this->txt_titulo->Text = L"Solicitud de Comidas";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(609, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Si";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Solicitud::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 87);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(442, 313);
			this->dataGridView1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(548, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"¿Desea solicitar menus\?";
			// 
			// Solicitud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(804, 476);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_titulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Solicitud";
			this->Text = L"Solicitud";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Solicitando^ temporal = gcnew Solicitando();
		temporal->ShowDialog();
	}
	};
}
