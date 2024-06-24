#pragma once
#include "Inicio.h"
#include "SupervisorClass.h"
namespace SIVENALFERR2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_cancelar;
	private: System::Windows::Forms::Button^ btn_iniciar;
	private: System::Windows::Forms::TextBox^ txt_contraseña;

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_Name;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->btn_cancelar = (gcnew System::Windows::Forms::Button());
			this->btn_iniciar = (gcnew System::Windows::Forms::Button());
			this->txt_contraseña = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_contraseña = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->btn_cancelar->Location = System::Drawing::Point(541, 331);
			this->btn_cancelar->Name = L"btn_cancelar";
			this->btn_cancelar->Size = System::Drawing::Size(82, 29);
			this->btn_cancelar->TabIndex = 34;
			this->btn_cancelar->Text = L"Cancelar";
			this->btn_cancelar->UseVisualStyleBackColor = false;
			this->btn_cancelar->Click += gcnew System::EventHandler(this, &Login::btn_cerrar_Click);
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
			this->btn_iniciar->Location = System::Drawing::Point(397, 331);
			this->btn_iniciar->Name = L"btn_iniciar";
			this->btn_iniciar->Size = System::Drawing::Size(82, 29);
			this->btn_iniciar->TabIndex = 33;
			this->btn_iniciar->Text = L"Iniciar";
			this->btn_iniciar->UseVisualStyleBackColor = false;
			this->btn_iniciar->Click += gcnew System::EventHandler(this, &Login::btn_iniciar_Click);
			// 
			// txt_contraseña
			// 
			this->txt_contraseña->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contraseña->Location = System::Drawing::Point(450, 228);
			this->txt_contraseña->Name = L"txt_contraseña";
			this->txt_contraseña->Size = System::Drawing::Size(145, 26);
			this->txt_contraseña->TabIndex = 32;
			this->txt_contraseña->UseSystemPasswordChar = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(459, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 22);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Contraseña:";
			// 
			// txt_Name
			// 
			this->txt_Name->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Name->Location = System::Drawing::Point(450, 146);
			this->txt_Name->Name = L"txt_Name";
			this->txt_Name->Size = System::Drawing::Size(145, 26);
			this->txt_Name->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(470, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 24);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nombre:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 390);
			this->panel1->TabIndex = 18;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(90, 85);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-60, -58);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(491, 478);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(385, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 32);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Acceso de usuario";
			// 
			// lbl_contraseña
			// 
			this->lbl_contraseña->AutoSize = true;
			this->lbl_contraseña->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_contraseña->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->lbl_contraseña->Location = System::Drawing::Point(420, 279);
			this->lbl_contraseña->Name = L"lbl_contraseña";
			this->lbl_contraseña->Size = System::Drawing::Size(0, 19);
			this->lbl_contraseña->TabIndex = 36;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->ClientSize = System::Drawing::Size(652, 386);
			this->Controls->Add(this->lbl_contraseña);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_cancelar);
			this->Controls->Add(this->btn_iniciar);
			this->Controls->Add(this->txt_contraseña);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_Name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Login::Login_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variable global de usuario
	public: SupervisorClass^ Usuario = nullptr;
	private: System::Void btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_iniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Name = this->txt_ID->Text;
		String^ password = this->txt_contraseña->Text;
		if (Name->Length == 0 || password->Length == 0) {
			//MessageBox::Show("Llene todo correctamente", "Advertencia");
			lbl_contraseña->Text = "Llene todo correctamente";
		}
		else {
			try {
				String^ string_Conexion = "Data Source=ADMINISTRADOR\\SQLEXPRESS;Initial Catalog=DB_SIVENALFERR;Integrated Security=True;Encrypt=False";
				SqlConnection SQL_Open(string_Conexion);
				SQL_Open.Open();
				String^ SQL_login = "SELECT * FROM Supervisores WHERE Nombre=@name AND Password=@pwd";
				SqlCommand comandos(SQL_login, % SQL_Open);
				comandos.Parameters->AddWithValue("@name", Name);
				comandos.Parameters->AddWithValue("@pwd", password);

				SqlDataReader^ reader = comandos.ExecuteReader();
				if (reader->Read()) {
					// Crear una objeto Usuario para asignar valores desde la base de datos
					Usuario = gcnew SupervisorClass;
					Usuario->SupervisorID = reader->GetInt32(0);
					Usuario->Nombre = reader->GetString(1);
					Usuario->Apellido = reader->GetString(2);
					Usuario->AreaTrabajo = reader->GetString(3);
					Usuario->NivelJerarquico = reader->GetInt32(4);
					Usuario->CantidadTrabajadores = reader->GetInt32(5);
					Usuario->Password = reader->GetString(6);
					// Limpiar los campos de texto en el formulario de inicio
					txt_ID->Text = "";
					lbl_contraseña->Text = "";
					txt_contraseña->Text = "";
					//Enviando al inicio 
					Inicio^ temporal = gcnew Inicio(Usuario);
					temporal->Show();
				}
				else
					lbl_contraseña->Text = "ID o Contraseña Incorrecta";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al conectar con la base de datos: " + ex->Message, "Error de conexión");
			}
		}
	}
	private: System::Void Login_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->Show();
	}
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
