#pragma once

namespace SIVENALFERR2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ajustes
	/// </summary>
	public ref class Ajustes : public System::Windows::Forms::Form
	{
	public:
		Ajustes(void)
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
		~Ajustes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ modoOscuro;
	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->modoOscuro = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// modoOscuro
			// 
			this->modoOscuro->AutoSize = true;
			this->modoOscuro->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modoOscuro->Location = System::Drawing::Point(478, 32);
			this->modoOscuro->Name = L"modoOscuro";
			this->modoOscuro->Size = System::Drawing::Size(136, 23);
			this->modoOscuro->TabIndex = 0;
			this->modoOscuro->Text = L"Modo Oscuro";
			// 
			// Ajustes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(788, 437);
			this->Controls->Add(this->modoOscuro);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ajustes";
			this->Text = L"Ajustes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
