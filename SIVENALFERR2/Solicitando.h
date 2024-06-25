#pragma once
#include <Windows.h>
#define TIEMPO_MAX_SEGUNDOS 120
namespace SIVENALFERR2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Solicitando
	/// </summary>
	public ref class Solicitando : public System::Windows::Forms::Form
	{
	public:
		Solicitando(void)
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
		~Solicitando()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panelVegetariano;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_solicitar;
	private: System::Windows::Forms::Label^ lbl_temporizador;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblFechaA;
	private: System::Windows::Forms::Label^ lbl_trabajadores;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lbl_menusSelecionados;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::TextBox^ txt_vegetariano;
	private: System::Windows::Forms::TextBox^ txt_regular;
	private: System::Windows::Forms::TextBox^ txt_dieta;
	private: System::Windows::Forms::Button^ btn_verificar;
	private: System::Windows::Forms::Timer^ Temporizador;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Solicitando::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panelVegetariano = (gcnew System::Windows::Forms::Panel());
			this->txt_vegetariano = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_verificar = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbl_trabajadores = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lbl_temporizador = (gcnew System::Windows::Forms::Label());
			this->lbl_menusSelecionados = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_solicitar = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txt_regular = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_dieta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblFechaA = (gcnew System::Windows::Forms::Label());
			this->Temporizador = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panelVegetariano->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(103, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Regular";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(4, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(69, 64);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(117, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Dieta";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 63);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panelVegetariano
			// 
			this->panelVegetariano->Controls->Add(this->txt_vegetariano);
			this->panelVegetariano->Controls->Add(this->pictureBox1);
			this->panelVegetariano->Controls->Add(this->label3);
			this->panelVegetariano->Location = System::Drawing::Point(6, 26);
			this->panelVegetariano->Name = L"panelVegetariano";
			this->panelVegetariano->Size = System::Drawing::Size(222, 69);
			this->panelVegetariano->TabIndex = 0;
			// 
			// txt_vegetariano
			// 
			this->txt_vegetariano->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_vegetariano->Location = System::Drawing::Point(91, 34);
			this->txt_vegetariano->Name = L"txt_vegetariano";
			this->txt_vegetariano->Size = System::Drawing::Size(100, 27);
			this->txt_vegetariano->TabIndex = 2;
			this->txt_vegetariano->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solicitando::txt_vegetariano_KeyPress);
			this->txt_vegetariano->Leave += gcnew System::EventHandler(this, &Solicitando::txt_vegetariano_Leave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(5, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(83, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Vegetariano";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_verificar);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->lbl_trabajadores);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->lbl_temporizador);
			this->groupBox1->Controls->Add(this->lbl_menusSelecionados);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->btn_solicitar);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Controls->Add(this->panel2);
			this->groupBox1->Controls->Add(this->panelVegetariano);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 76);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(560, 283);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menú de opciones";
			// 
			// btn_verificar
			// 
			this->btn_verificar->BackColor = System::Drawing::Color::Coral;
			this->btn_verificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_verificar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_verificar->ForeColor = System::Drawing::Color::White;
			this->btn_verificar->Location = System::Drawing::Point(284, 221);
			this->btn_verificar->Name = L"btn_verificar";
			this->btn_verificar->Size = System::Drawing::Size(101, 41);
			this->btn_verificar->TabIndex = 12;
			this->btn_verificar->Text = L"Verificar";
			this->btn_verificar->UseVisualStyleBackColor = false;
			this->btn_verificar->Click += gcnew System::EventHandler(this, &Solicitando::btn_verificar_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(281, 94);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(197, 18);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Tiempo restante de solicitud:";
			// 
			// lbl_trabajadores
			// 
			this->lbl_trabajadores->AutoSize = true;
			this->lbl_trabajadores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_trabajadores->Location = System::Drawing::Point(492, 58);
			this->lbl_trabajadores->Name = L"lbl_trabajadores";
			this->lbl_trabajadores->Size = System::Drawing::Size(36, 20);
			this->lbl_trabajadores->TabIndex = 10;
			this->lbl_trabajadores->Text = L"115";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(280, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(173, 18);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Trabajadores a su cargo:";
			// 
			// lbl_temporizador
			// 
			this->lbl_temporizador->AutoSize = true;
			this->lbl_temporizador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_temporizador->ForeColor = System::Drawing::Color::Red;
			this->lbl_temporizador->Location = System::Drawing::Point(337, 128);
			this->lbl_temporizador->Name = L"lbl_temporizador";
			this->lbl_temporizador->Size = System::Drawing::Size(71, 25);
			this->lbl_temporizador->TabIndex = 10;
			this->lbl_temporizador->Text = L"tempo";
			// 
			// lbl_menusSelecionados
			// 
			this->lbl_menusSelecionados->AutoSize = true;
			this->lbl_menusSelecionados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_menusSelecionados->Location = System::Drawing::Point(492, 23);
			this->lbl_menusSelecionados->Name = L"lbl_menusSelecionados";
			this->lbl_menusSelecionados->Size = System::Drawing::Size(0, 20);
			this->lbl_menusSelecionados->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(280, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Comida solicitadas:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Coral;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(440, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 41);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Solicitando::button2_Click);
			// 
			// btn_solicitar
			// 
			this->btn_solicitar->BackColor = System::Drawing::Color::Coral;
			this->btn_solicitar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_solicitar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_solicitar->ForeColor = System::Drawing::Color::White;
			this->btn_solicitar->Location = System::Drawing::Point(283, 222);
			this->btn_solicitar->Name = L"btn_solicitar";
			this->btn_solicitar->Size = System::Drawing::Size(101, 41);
			this->btn_solicitar->TabIndex = 5;
			this->btn_solicitar->Text = L"Solicitar";
			this->btn_solicitar->UseVisualStyleBackColor = false;
			this->btn_solicitar->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->txt_regular);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(6, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(222, 71);
			this->panel3->TabIndex = 4;
			// 
			// txt_regular
			// 
			this->txt_regular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_regular->Location = System::Drawing::Point(91, 34);
			this->txt_regular->Name = L"txt_regular";
			this->txt_regular->Size = System::Drawing::Size(100, 27);
			this->txt_regular->TabIndex = 3;
			this->txt_regular->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solicitando::txt_regular_KeyPress);
			this->txt_regular->Leave += gcnew System::EventHandler(this, &Solicitando::txt_regular_Leave);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txt_dieta);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(6, 197);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(222, 69);
			this->panel2->TabIndex = 2;
			// 
			// txt_dieta
			// 
			this->txt_dieta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_dieta->Location = System::Drawing::Point(91, 31);
			this->txt_dieta->Name = L"txt_dieta";
			this->txt_dieta->Size = System::Drawing::Size(100, 27);
			this->txt_dieta->TabIndex = 4;
			this->txt_dieta->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Solicitando::txt_dieta_KeyPress);
			this->txt_dieta->Leave += gcnew System::EventHandler(this, &Solicitando::txt_dieta_Leave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(208, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Área de Solicitud";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(388, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Fecha Actual:";
			// 
			// lblFechaA
			// 
			this->lblFechaA->AutoSize = true;
			this->lblFechaA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaA->Location = System::Drawing::Point(482, 57);
			this->lblFechaA->Name = L"lblFechaA";
			this->lblFechaA->Size = System::Drawing::Size(71, 16);
			this->lblFechaA->TabIndex = 13;
			this->lblFechaA->Text = L"12/02/2022";
			// 
			// Temporizador
			// 
			this->Temporizador->Interval = 1000;
			this->Temporizador->Tick += gcnew System::EventHandler(this, &Solicitando::Temporizador_Tick);
			// 
			// Solicitando
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(584, 371);
			this->Controls->Add(this->lblFechaA);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Solicitando";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Solicitando";
			this->Load += gcnew System::EventHandler(this, &Solicitando::Solicitando_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panelVegetariano->ResumeLayout(false);
			this->panelVegetariano->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int menu_vegetariano = 0;
		int menu_regular = 0;
		int menu_dieta = 0;

		void calcularResultado() {
			String^ temp1 = this->txt_vegetariano->Text;
			String^ temp2 = this->txt_regular->Text;
			String^ temp3 = this->txt_dieta->Text;
			// Obtén los valores de los campos de texto

			//Se verifica que los campos no estén vacios y se convierten.
			if (temp1->Length != 0)
				menu_vegetariano = Convert::ToInt32(txt_vegetariano->Text);
			if (temp2->Length != 0)
				menu_regular = Convert::ToInt32(txt_regular->Text);
			if (temp3->Length != 0)
				menu_dieta = Convert::ToInt32(txt_dieta->Text);

			// Calcula la suma
			int total_menus = menu_vegetariano + menu_regular + menu_dieta;

			// Muestra el resultado en el Label
			lbl_menusSelecionados->Text = total_menus.ToString();
		}

	private: System::Void txt_vegetariano_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= 48) && (e->KeyChar <= 57) || (Char::IsControl(e->KeyChar))) {
			calcularResultado();
			btn_solicitar->Visible = false;
			btn_verificar->Visible = true;
			e->Handled = false;
		}
		else {
			e->Handled = true;
			return;
		}
	}
	private: System::Void txt_regular_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= 48) && (e->KeyChar <= 57) || (Char::IsControl(e->KeyChar))) {
			calcularResultado();
			btn_solicitar->Visible = false;
			btn_verificar->Visible = true;
			e->Handled = false;
		}
		else {
			//MessageBox::Show("Ingrese solamente números", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			e->Handled = true;
			return;
		}
	}
	private: System::Void txt_dieta_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= 48) && (e->KeyChar <= 57) || (Char::IsControl(e->KeyChar))) {
			calcularResultado();
			btn_solicitar->Visible = false;
			btn_verificar->Visible = true;
			e->Handled = false;
		}
		else {
			//MessageBox::Show("Ingrese solamente números", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			e->Handled = true;
			return;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void txt_vegetariano_Leave(System::Object^ sender, System::EventArgs^ e) {
		calcularResultado();
	}
	private: System::Void txt_regular_Leave(System::Object^ sender, System::EventArgs^ e) {
		calcularResultado();
	}
	private: System::Void txt_dieta_Leave(System::Object^ sender, System::EventArgs^ e) {
		calcularResultado();
	}
	private: System::Void btn_verificar_Click(System::Object^ sender, System::EventArgs^ e) {
		calcularResultado();
		btn_solicitar->Visible = true;
		btn_verificar->Visible = false;
	}
	private: System::Void Solicitando_Load(System::Object^ sender, System::EventArgs^ e) {
		Temporizador->Start();
	}
		   int timeLeft = TIEMPO_MAX_SEGUNDOS; // Constante con valor por defecto 120 segundos
	private: System::Void Temporizador_Tick(System::Object^ sender, System::EventArgs^ e) {
		timeLeft--; // Restar 1 segundo
		int minutos = timeLeft / 60;
		int segundos = timeLeft % 60;
		if (segundos >= 0 && segundos <= 9)
			this->lbl_temporizador->Text = String::Format(L"{0}:0{1}", minutos, segundos);
		else
			this->lbl_temporizador->Text = String::Format(L"{0}:{1}", minutos, segundos);
		if (timeLeft == 0) {
			// El tiempo ha expirado
			MessageBox::Show("El tiempo de solicitud acabo", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Temporizador->Stop(); // Detener el temporizador
		}

	}
	};
}
