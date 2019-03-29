#pragma once
#include"En.h"
#include "ArregloEncuesta.h"
namespace FundaEntrada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormEncuesta
	/// </summary>
	public ref class FormEncuesta : public System::Windows::Forms::Form
	{
	private:
		Arrencuesta* arregloEncuesta;
		int auxcalcular1;
		int auxcalcular2;
		int auxcalcular3;
		int auxcalcular4;
		int personas;
		int auxorden;
		int auxedad;
	private: System::Windows::Forms::Button^  buttonCalcular;

	private: System::Windows::Forms::Label^  labelEdad;
	private: System::Windows::Forms::TextBox^  textEdad;
			 int aux;
	private: System::Windows::Forms::Label^  labelCalcular;
	private: System::Windows::Forms::Label^  labelca1;
	private: System::Windows::Forms::Label^  labelC1;


	private: System::Windows::Forms::Label^  labelca2;
	private: System::Windows::Forms::Label^  labelca3;
	private: System::Windows::Forms::Label^  labelC2;
	private: System::Windows::Forms::Label^  labelC3;




	private: System::Windows::Forms::Label^  labelca4;
	private: System::Windows::Forms::Label^  labelC4;


		
	public:
		FormEncuesta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			aux = 1;
			arregloEncuesta = new Arrencuesta();
			auxcalcular1=0;
			auxcalcular2=0;
			auxcalcular3=0;
			auxcalcular4=0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormEncuesta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelTitulo;
	protected:
	private: System::Windows::Forms::Label^  labelTitulo2;
	private: System::Windows::Forms::Label^  labelP1;
	private: System::Windows::Forms::Label^  label1de1;
	private: System::Windows::Forms::Label^  label2de1;
	private: System::Windows::Forms::Label^  label3de1;
	private: System::Windows::Forms::Label^  label4de1;
	private: System::Windows::Forms::Button^  button1de1;
	private: System::Windows::Forms::Button^  button2de1;
	private: System::Windows::Forms::Button^  button3de1;
	private: System::Windows::Forms::Button^  button4de1;
	private: System::Windows::Forms::Label^  labelanuncio;
	private: System::Windows::Forms::TextBox^  textBoxCantidad;
	private: System::Windows::Forms::Label^  labelP2;
	private: System::Windows::Forms::Label^  label1de2;
	private: System::Windows::Forms::Label^  label2de2;
	private: System::Windows::Forms::Label^  label3de2;
	private: System::Windows::Forms::Label^  label4de2;
	private: System::Windows::Forms::Button^  button1de2;
	private: System::Windows::Forms::Button^  button2de2;
	private: System::Windows::Forms::Button^  button3de2;
	private: System::Windows::Forms::Button^  button4de2;
	private: System::Windows::Forms::Button^  buttonComenzar;
	private: System::Windows::Forms::Label^  labelP3;
	private: System::Windows::Forms::Label^  label1de3;
	private: System::Windows::Forms::Label^  label2de3;
	private: System::Windows::Forms::Label^  label3de3;
	private: System::Windows::Forms::Label^  label4de3;
	private: System::Windows::Forms::Button^  buttonSiguiente;
	private: System::Windows::Forms::Button^  button1de3;
	private: System::Windows::Forms::Button^  button2de3;
	private: System::Windows::Forms::Button^  button3de3;
	private: System::Windows::Forms::Button^  button4de3;

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
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->labelTitulo2 = (gcnew System::Windows::Forms::Label());
			this->labelP1 = (gcnew System::Windows::Forms::Label());
			this->label1de1 = (gcnew System::Windows::Forms::Label());
			this->label2de1 = (gcnew System::Windows::Forms::Label());
			this->label3de1 = (gcnew System::Windows::Forms::Label());
			this->label4de1 = (gcnew System::Windows::Forms::Label());
			this->button1de1 = (gcnew System::Windows::Forms::Button());
			this->button2de1 = (gcnew System::Windows::Forms::Button());
			this->button3de1 = (gcnew System::Windows::Forms::Button());
			this->button4de1 = (gcnew System::Windows::Forms::Button());
			this->labelanuncio = (gcnew System::Windows::Forms::Label());
			this->textBoxCantidad = (gcnew System::Windows::Forms::TextBox());
			this->labelP2 = (gcnew System::Windows::Forms::Label());
			this->label1de2 = (gcnew System::Windows::Forms::Label());
			this->label2de2 = (gcnew System::Windows::Forms::Label());
			this->label3de2 = (gcnew System::Windows::Forms::Label());
			this->label4de2 = (gcnew System::Windows::Forms::Label());
			this->button1de2 = (gcnew System::Windows::Forms::Button());
			this->button2de2 = (gcnew System::Windows::Forms::Button());
			this->button3de2 = (gcnew System::Windows::Forms::Button());
			this->button4de2 = (gcnew System::Windows::Forms::Button());
			this->buttonComenzar = (gcnew System::Windows::Forms::Button());
			this->labelP3 = (gcnew System::Windows::Forms::Label());
			this->label1de3 = (gcnew System::Windows::Forms::Label());
			this->label2de3 = (gcnew System::Windows::Forms::Label());
			this->label3de3 = (gcnew System::Windows::Forms::Label());
			this->label4de3 = (gcnew System::Windows::Forms::Label());
			this->buttonSiguiente = (gcnew System::Windows::Forms::Button());
			this->button1de3 = (gcnew System::Windows::Forms::Button());
			this->button2de3 = (gcnew System::Windows::Forms::Button());
			this->button3de3 = (gcnew System::Windows::Forms::Button());
			this->button4de3 = (gcnew System::Windows::Forms::Button());
			this->buttonCalcular = (gcnew System::Windows::Forms::Button());
			this->labelEdad = (gcnew System::Windows::Forms::Label());
			this->textEdad = (gcnew System::Windows::Forms::TextBox());
			this->labelCalcular = (gcnew System::Windows::Forms::Label());
			this->labelca1 = (gcnew System::Windows::Forms::Label());
			this->labelC1 = (gcnew System::Windows::Forms::Label());
			this->labelca2 = (gcnew System::Windows::Forms::Label());
			this->labelca3 = (gcnew System::Windows::Forms::Label());
			this->labelC2 = (gcnew System::Windows::Forms::Label());
			this->labelC3 = (gcnew System::Windows::Forms::Label());
			this->labelca4 = (gcnew System::Windows::Forms::Label());
			this->labelC4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(169, 9);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(221, 34);
			this->labelTitulo->TabIndex = 1;
			this->labelTitulo->Text = L"ANONIMO N°";
			this->labelTitulo->Visible = false;
			// 
			// labelTitulo2
			// 
			this->labelTitulo2->AutoSize = true;
			this->labelTitulo2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->labelTitulo2->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo2->Location = System::Drawing::Point(390, 9);
			this->labelTitulo2->Name = L"labelTitulo2";
			this->labelTitulo2->Size = System::Drawing::Size(0, 34);
			this->labelTitulo2->TabIndex = 2;
			this->labelTitulo2->Visible = false;
			// 
			// labelP1
			// 
			this->labelP1->AutoSize = true;
			this->labelP1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP1->Location = System::Drawing::Point(22, 134);
			this->labelP1->Name = L"labelP1";
			this->labelP1->Size = System::Drawing::Size(359, 16);
			this->labelP1->TabIndex = 6;
			this->labelP1->Text = L"1. ¿Recibe el salario adecuado por su trabajo\?";
			this->labelP1->Visible = false;
			// 
			// label1de1
			// 
			this->label1de1->AutoSize = true;
			this->label1de1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1de1->Location = System::Drawing::Point(97, 161);
			this->label1de1->Name = L"label1de1";
			this->label1de1->Size = System::Drawing::Size(119, 17);
			this->label1de1->TabIndex = 7;
			this->label1de1->Text = L"Definitivamente sí";
			this->label1de1->Visible = false;
			// 
			// label2de1
			// 
			this->label2de1->AutoSize = true;
			this->label2de1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2de1->Location = System::Drawing::Point(97, 188);
			this->label2de1->Name = L"label2de1";
			this->label2de1->Size = System::Drawing::Size(20, 17);
			this->label2de1->TabIndex = 8;
			this->label2de1->Text = L"Sí";
			this->label2de1->Visible = false;
			// 
			// label3de1
			// 
			this->label3de1->AutoSize = true;
			this->label3de1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3de1->Location = System::Drawing::Point(97, 215);
			this->label3de1->Name = L"label3de1";
			this->label3de1->Size = System::Drawing::Size(26, 17);
			this->label3de1->TabIndex = 9;
			this->label3de1->Text = L"No";
			this->label3de1->Visible = false;
			// 
			// label4de1
			// 
			this->label4de1->AutoSize = true;
			this->label4de1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4de1->Location = System::Drawing::Point(97, 242);
			this->label4de1->Name = L"label4de1";
			this->label4de1->Size = System::Drawing::Size(125, 17);
			this->label4de1->TabIndex = 10;
			this->label4de1->Text = L"Definitivamente no";
			this->label4de1->Visible = false;
			// 
			// button1de1
			// 
			this->button1de1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1de1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button1de1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1de1->Location = System::Drawing::Point(64, 159);
			this->button1de1->Name = L"button1de1";
			this->button1de1->Size = System::Drawing::Size(27, 23);
			this->button1de1->TabIndex = 22;
			this->button1de1->Text = L"A";
			this->button1de1->UseVisualStyleBackColor = false;
			this->button1de1->Visible = false;
			this->button1de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de1_Click);
			// 
			// button2de1
			// 
			this->button2de1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2de1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button2de1->Location = System::Drawing::Point(64, 185);
			this->button2de1->Name = L"button2de1";
			this->button2de1->Size = System::Drawing::Size(27, 23);
			this->button2de1->TabIndex = 23;
			this->button2de1->Text = L"B";
			this->button2de1->UseVisualStyleBackColor = false;
			this->button2de1->Visible = false;
			this->button2de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button2de1_Click);
			// 
			// button3de1
			// 
			this->button3de1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3de1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button3de1->Location = System::Drawing::Point(64, 212);
			this->button3de1->Name = L"button3de1";
			this->button3de1->Size = System::Drawing::Size(27, 23);
			this->button3de1->TabIndex = 24;
			this->button3de1->Text = L"C";
			this->button3de1->UseVisualStyleBackColor = false;
			this->button3de1->Visible = false;
			this->button3de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button3de1_Click);
			// 
			// button4de1
			// 
			this->button4de1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4de1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button4de1->Location = System::Drawing::Point(64, 238);
			this->button4de1->Name = L"button4de1";
			this->button4de1->Size = System::Drawing::Size(27, 23);
			this->button4de1->TabIndex = 25;
			this->button4de1->Text = L"D";
			this->button4de1->UseVisualStyleBackColor = false;
			this->button4de1->Visible = false;
			this->button4de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button4de1_Click);
			// 
			// labelanuncio
			// 
			this->labelanuncio->AutoSize = true;
			this->labelanuncio->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->labelanuncio->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelanuncio->ForeColor = System::Drawing::Color::Red;
			this->labelanuncio->Location = System::Drawing::Point(126, 229);
			this->labelanuncio->Name = L"labelanuncio";
			this->labelanuncio->Size = System::Drawing::Size(172, 56);
			this->labelanuncio->TabIndex = 26;
			this->labelanuncio->Text = L"Ingrese la cantidad \r\nde personas\r\n";
			// 
			// textBoxCantidad
			// 
			this->textBoxCantidad->BackColor = System::Drawing::Color::SkyBlue;
			this->textBoxCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCantidad->Location = System::Drawing::Point(304, 249);
			this->textBoxCantidad->Name = L"textBoxCantidad";
			this->textBoxCantidad->Size = System::Drawing::Size(100, 26);
			this->textBoxCantidad->TabIndex = 27;
			// 
			// labelP2
			// 
			this->labelP2->AutoSize = true;
			this->labelP2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP2->Location = System::Drawing::Point(22, 288);
			this->labelP2->Name = L"labelP2";
			this->labelP2->Size = System::Drawing::Size(525, 16);
			this->labelP2->TabIndex = 28;
			this->labelP2->Text = L"2. ¿Las tareas asignadas ayudan a desarrollar su aspecto profesional\?";
			this->labelP2->Visible = false;
			// 
			// label1de2
			// 
			this->label1de2->AutoSize = true;
			this->label1de2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1de2->Location = System::Drawing::Point(97, 318);
			this->label1de2->Name = L"label1de2";
			this->label1de2->Size = System::Drawing::Size(101, 17);
			this->label1de2->TabIndex = 29;
			this->label1de2->Text = L"Muy a menudo";
			this->label1de2->Visible = false;
			// 
			// label2de2
			// 
			this->label2de2->AutoSize = true;
			this->label2de2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2de2->Location = System::Drawing::Point(97, 346);
			this->label2de2->Name = L"label2de2";
			this->label2de2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2de2->Size = System::Drawing::Size(72, 17);
			this->label2de2->TabIndex = 30;
			this->label2de2->Text = L"A menudo";
			this->label2de2->Visible = false;
			// 
			// label3de2
			// 
			this->label3de2->AutoSize = true;
			this->label3de2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3de2->Location = System::Drawing::Point(97, 371);
			this->label3de2->Name = L"label3de2";
			this->label3de2->Size = System::Drawing::Size(78, 17);
			this->label3de2->TabIndex = 31;
			this->label3de2->Text = L"Raramente";
			this->label3de2->Visible = false;
			// 
			// label4de2
			// 
			this->label4de2->AutoSize = true;
			this->label4de2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4de2->Location = System::Drawing::Point(97, 398);
			this->label4de2->Name = L"label4de2";
			this->label4de2->Size = System::Drawing::Size(49, 17);
			this->label4de2->TabIndex = 32;
			this->label4de2->Text = L"Nunca";
			this->label4de2->Visible = false;
			// 
			// button1de2
			// 
			this->button1de2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1de2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button1de2->Location = System::Drawing::Point(64, 315);
			this->button1de2->Name = L"button1de2";
			this->button1de2->Size = System::Drawing::Size(27, 23);
			this->button1de2->TabIndex = 33;
			this->button1de2->Text = L"A";
			this->button1de2->UseVisualStyleBackColor = false;
			this->button1de2->Visible = false;
			this->button1de2->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de2_Click);
			// 
			// button2de2
			// 
			this->button2de2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2de2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button2de2->Location = System::Drawing::Point(64, 343);
			this->button2de2->Name = L"button2de2";
			this->button2de2->Size = System::Drawing::Size(27, 23);
			this->button2de2->TabIndex = 34;
			this->button2de2->Text = L"B";
			this->button2de2->UseVisualStyleBackColor = false;
			this->button2de2->Visible = false;
			this->button2de2->Click += gcnew System::EventHandler(this, &FormEncuesta::button2de2_Click);
			// 
			// button3de2
			// 
			this->button3de2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3de2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button3de2->Location = System::Drawing::Point(64, 369);
			this->button3de2->Name = L"button3de2";
			this->button3de2->Size = System::Drawing::Size(27, 23);
			this->button3de2->TabIndex = 35;
			this->button3de2->Text = L"C";
			this->button3de2->UseVisualStyleBackColor = false;
			this->button3de2->Visible = false;
			this->button3de2->Click += gcnew System::EventHandler(this, &FormEncuesta::button3de2_Click);
			// 
			// button4de2
			// 
			this->button4de2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4de2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button4de2->Location = System::Drawing::Point(64, 396);
			this->button4de2->Name = L"button4de2";
			this->button4de2->Size = System::Drawing::Size(27, 23);
			this->button4de2->TabIndex = 36;
			this->button4de2->Text = L"D";
			this->button4de2->UseVisualStyleBackColor = false;
			this->button4de2->Visible = false;
			this->button4de2->Click += gcnew System::EventHandler(this, &FormEncuesta::button4de2_Click);
			// 
			// buttonComenzar
			// 
			this->buttonComenzar->BackColor = System::Drawing::Color::Red;
			this->buttonComenzar->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonComenzar->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonComenzar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->buttonComenzar->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonComenzar->ForeColor = System::Drawing::Color::White;
			this->buttonComenzar->Location = System::Drawing::Point(224, 366);
			this->buttonComenzar->Name = L"buttonComenzar";
			this->buttonComenzar->Size = System::Drawing::Size(125, 42);
			this->buttonComenzar->TabIndex = 37;
			this->buttonComenzar->Text = L"COMENZAR";
			this->buttonComenzar->UseVisualStyleBackColor = false;
			this->buttonComenzar->Click += gcnew System::EventHandler(this, &FormEncuesta::buttonComenzar_Click);
			// 
			// labelP3
			// 
			this->labelP3->AutoSize = true;
			this->labelP3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP3->Location = System::Drawing::Point(22, 426);
			this->labelP3->Name = L"labelP3";
			this->labelP3->Size = System::Drawing::Size(276, 16);
			this->labelP3->TabIndex = 38;
			this->labelP3->Text = L"3. ¿Está satisfecho con su empleo\?";
			this->labelP3->Visible = false;
			// 
			// label1de3
			// 
			this->label1de3->AutoSize = true;
			this->label1de3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1de3->Location = System::Drawing::Point(97, 456);
			this->label1de3->Name = L"label1de3";
			this->label1de3->Size = System::Drawing::Size(70, 17);
			this->label1de3->TabIndex = 39;
			this->label1de3->Text = L"Sí, mucho";
			this->label1de3->Visible = false;
			// 
			// label2de3
			// 
			this->label2de3->AutoSize = true;
			this->label2de3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2de3->Location = System::Drawing::Point(97, 482);
			this->label2de3->Name = L"label2de3";
			this->label2de3->Size = System::Drawing::Size(20, 17);
			this->label2de3->TabIndex = 40;
			this->label2de3->Text = L"Sí";
			this->label2de3->Visible = false;
			// 
			// label3de3
			// 
			this->label3de3->AutoSize = true;
			this->label3de3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3de3->Location = System::Drawing::Point(97, 508);
			this->label3de3->Name = L"label3de3";
			this->label3de3->Size = System::Drawing::Size(26, 17);
			this->label3de3->TabIndex = 41;
			this->label3de3->Text = L"No";
			this->label3de3->Visible = false;
			// 
			// label4de3
			// 
			this->label4de3->AutoSize = true;
			this->label4de3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4de3->Location = System::Drawing::Point(98, 538);
			this->label4de3->Name = L"label4de3";
			this->label4de3->Size = System::Drawing::Size(108, 17);
			this->label4de3->TabIndex = 42;
			this->label4de3->Text = L"No, en absoluto";
			this->label4de3->Visible = false;
			// 
			// buttonSiguiente
			// 
			this->buttonSiguiente->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSiguiente->Location = System::Drawing::Point(200, 569);
			this->buttonSiguiente->Name = L"buttonSiguiente";
			this->buttonSiguiente->Size = System::Drawing::Size(125, 36);
			this->buttonSiguiente->TabIndex = 43;
			this->buttonSiguiente->Text = L"SIGUIENTE";
			this->buttonSiguiente->UseVisualStyleBackColor = true;
			this->buttonSiguiente->Visible = false;
			this->buttonSiguiente->Click += gcnew System::EventHandler(this, &FormEncuesta::buttonSiguiente_Click);
			// 
			// button1de3
			// 
			this->button1de3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button1de3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button1de3->Location = System::Drawing::Point(64, 453);
			this->button1de3->Name = L"button1de3";
			this->button1de3->Size = System::Drawing::Size(27, 23);
			this->button1de3->TabIndex = 44;
			this->button1de3->Text = L"A";
			this->button1de3->UseVisualStyleBackColor = false;
			this->button1de3->Visible = false;
			this->button1de3->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de3_Click);
			// 
			// button2de3
			// 
			this->button2de3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2de3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button2de3->Location = System::Drawing::Point(64, 479);
			this->button2de3->Name = L"button2de3";
			this->button2de3->Size = System::Drawing::Size(27, 23);
			this->button2de3->TabIndex = 45;
			this->button2de3->Text = L"B";
			this->button2de3->UseVisualStyleBackColor = false;
			this->button2de3->Visible = false;
			this->button2de3->Click += gcnew System::EventHandler(this, &FormEncuesta::button2de3_Click);
			// 
			// button3de3
			// 
			this->button3de3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3de3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button3de3->Location = System::Drawing::Point(64, 505);
			this->button3de3->Name = L"button3de3";
			this->button3de3->Size = System::Drawing::Size(27, 23);
			this->button3de3->TabIndex = 46;
			this->button3de3->Text = L"C";
			this->button3de3->UseVisualStyleBackColor = false;
			this->button3de3->Visible = false;
			this->button3de3->Click += gcnew System::EventHandler(this, &FormEncuesta::button3de3_Click);
			// 
			// button4de3
			// 
			this->button4de3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4de3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button4de3->Location = System::Drawing::Point(64, 534);
			this->button4de3->Name = L"button4de3";
			this->button4de3->Size = System::Drawing::Size(27, 23);
			this->button4de3->TabIndex = 47;
			this->button4de3->Text = L"D";
			this->button4de3->UseVisualStyleBackColor = false;
			this->button4de3->Visible = false;
			this->button4de3->Click += gcnew System::EventHandler(this, &FormEncuesta::button4de3_Click);
			// 
			// buttonCalcular
			// 
			this->buttonCalcular->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCalcular->Location = System::Drawing::Point(200, 569);
			this->buttonCalcular->Name = L"buttonCalcular";
			this->buttonCalcular->Size = System::Drawing::Size(125, 36);
			this->buttonCalcular->TabIndex = 48;
			this->buttonCalcular->Text = L"CALCULAR";
			this->buttonCalcular->UseVisualStyleBackColor = true;
			this->buttonCalcular->Visible = false;
			this->buttonCalcular->Click += gcnew System::EventHandler(this, &FormEncuesta::buttonRegreso_Click);
			// 
			// labelEdad
			// 
			this->labelEdad->AutoSize = true;
			this->labelEdad->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelEdad->Location = System::Drawing::Point(46, 76);
			this->labelEdad->Name = L"labelEdad";
			this->labelEdad->Size = System::Drawing::Size(185, 26);
			this->labelEdad->TabIndex = 49;
			this->labelEdad->Text = L"Ingrese su edad :";
			this->labelEdad->Visible = false;
			// 
			// textEdad
			// 
			this->textEdad->BackColor = System::Drawing::Color::SkyBlue;
			this->textEdad->Location = System::Drawing::Point(277, 81);
			this->textEdad->Name = L"textEdad";
			this->textEdad->Size = System::Drawing::Size(147, 20);
			this->textEdad->TabIndex = 50;
			this->textEdad->Visible = false;
			// 
			// labelCalcular
			// 
			this->labelCalcular->AutoSize = true;
			this->labelCalcular->BackColor = System::Drawing::Color::GreenYellow;
			this->labelCalcular->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCalcular->Location = System::Drawing::Point(198, 27);
			this->labelCalcular->Name = L"labelCalcular";
			this->labelCalcular->Size = System::Drawing::Size(186, 34);
			this->labelCalcular->TabIndex = 51;
			this->labelCalcular->Text = L"CALCULAR";
			this->labelCalcular->Visible = false;
			// 
			// labelca1
			// 
			this->labelca1->AutoSize = true;
			this->labelca1->BackColor = System::Drawing::Color::Khaki;
			this->labelca1->Location = System::Drawing::Point(168, 86);
			this->labelca1->Name = L"labelca1";
			this->labelca1->Size = System::Drawing::Size(256, 26);
			this->labelca1->TabIndex = 52;
			this->labelca1->Text = L"Total de empleados que indican que definitivamente \r\nno reciben un salario adecua"
				L"do";
			this->labelca1->Visible = false;
			this->labelca1->Click += gcnew System::EventHandler(this, &FormEncuesta::labelca1_Click);
			// 
			// labelC1
			// 
			this->labelC1->AutoSize = true;
			this->labelC1->BackColor = System::Drawing::Color::Thistle;
			this->labelC1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelC1->Location = System::Drawing::Point(273, 130);
			this->labelC1->Name = L"labelC1";
			this->labelC1->Size = System::Drawing::Size(0, 22);
			this->labelC1->TabIndex = 53;
			this->labelC1->Visible = false;
			// 
			// labelca2
			// 
			this->labelca2->AutoSize = true;
			this->labelca2->BackColor = System::Drawing::Color::Khaki;
			this->labelca2->Location = System::Drawing::Point(153, 182);
			this->labelca2->Name = L"labelca2";
			this->labelca2->Size = System::Drawing::Size(290, 26);
			this->labelca2->TabIndex = 54;
			this->labelca2->Text = L"Porcentaje de empleados que señalan las tareas asignadas \r\nayudan a desarrollar s"
				L"u aspecto profesional";
			this->labelca2->Visible = false;
			this->labelca2->Click += gcnew System::EventHandler(this, &FormEncuesta::labelca2_Click);
			// 
			// labelca3
			// 
			this->labelca3->AutoSize = true;
			this->labelca3->BackColor = System::Drawing::Color::Khaki;
			this->labelca3->Location = System::Drawing::Point(174, 292);
			this->labelca3->Name = L"labelca3";
			this->labelca3->Size = System::Drawing::Size(230, 26);
			this->labelca3->TabIndex = 55;
			this->labelca3->Text = L"Total de empleados que si reciben un salario \r\nadecuado y si están satisfechos co"
				L"n su empleo";
			this->labelca3->Visible = false;
			this->labelca3->Click += gcnew System::EventHandler(this, &FormEncuesta::labelca3_Click);
			// 
			// labelC2
			// 
			this->labelC2->AutoSize = true;
			this->labelC2->BackColor = System::Drawing::Color::Thistle;
			this->labelC2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelC2->Location = System::Drawing::Point(282, 232);
			this->labelC2->Name = L"labelC2";
			this->labelC2->Size = System::Drawing::Size(0, 22);
			this->labelC2->TabIndex = 56;
			this->labelC2->Visible = false;
			// 
			// labelC3
			// 
			this->labelC3->AutoSize = true;
			this->labelC3->BackColor = System::Drawing::Color::Thistle;
			this->labelC3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelC3->Location = System::Drawing::Point(273, 341);
			this->labelC3->Name = L"labelC3";
			this->labelC3->Size = System::Drawing::Size(0, 22);
			this->labelC3->TabIndex = 57;
			this->labelC3->Visible = false;
			// 
			// labelca4
			// 
			this->labelca4->AutoSize = true;
			this->labelca4->BackColor = System::Drawing::Color::Khaki;
			this->labelca4->Location = System::Drawing::Point(185, 416);
			this->labelca4->Name = L"labelca4";
			this->labelca4->Size = System::Drawing::Size(196, 26);
			this->labelca4->TabIndex = 58;
			this->labelca4->Text = L"Listado de los empelados encuestados \r\nordenado ascendentemente por la edad";
			this->labelca4->Visible = false;
			this->labelca4->Click += gcnew System::EventHandler(this, &FormEncuesta::labelca4_Click);
			// 
			// labelC4
			// 
			this->labelC4->AutoSize = true;
			this->labelC4->BackColor = System::Drawing::Color::Thistle;
			this->labelC4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelC4->Location = System::Drawing::Point(282, 451);
			this->labelC4->Name = L"labelC4";
			this->labelC4->Size = System::Drawing::Size(0, 22);
			this->labelC4->TabIndex = 59;
			this->labelC4->Visible = false;
			// 
			// FormEncuesta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 641);
			this->Controls->Add(this->labelC4);
			this->Controls->Add(this->labelca4);
			this->Controls->Add(this->labelC3);
			this->Controls->Add(this->labelC2);
			this->Controls->Add(this->labelca3);
			this->Controls->Add(this->labelca2);
			this->Controls->Add(this->labelC1);
			this->Controls->Add(this->labelca1);
			this->Controls->Add(this->labelCalcular);
			this->Controls->Add(this->textEdad);
			this->Controls->Add(this->labelEdad);
			this->Controls->Add(this->buttonCalcular);
			this->Controls->Add(this->button4de3);
			this->Controls->Add(this->button3de3);
			this->Controls->Add(this->button2de3);
			this->Controls->Add(this->button1de3);
			this->Controls->Add(this->buttonSiguiente);
			this->Controls->Add(this->label4de3);
			this->Controls->Add(this->label3de3);
			this->Controls->Add(this->label2de3);
			this->Controls->Add(this->label1de3);
			this->Controls->Add(this->labelP3);
			this->Controls->Add(this->buttonComenzar);
			this->Controls->Add(this->button4de2);
			this->Controls->Add(this->button3de2);
			this->Controls->Add(this->button2de2);
			this->Controls->Add(this->button1de2);
			this->Controls->Add(this->label4de2);
			this->Controls->Add(this->label3de2);
			this->Controls->Add(this->label2de2);
			this->Controls->Add(this->label1de2);
			this->Controls->Add(this->labelP2);
			this->Controls->Add(this->textBoxCantidad);
			this->Controls->Add(this->labelanuncio);
			this->Controls->Add(this->button4de1);
			this->Controls->Add(this->button3de1);
			this->Controls->Add(this->button2de1);
			this->Controls->Add(this->button1de1);
			this->Controls->Add(this->label4de1);
			this->Controls->Add(this->label3de1);
			this->Controls->Add(this->label2de1);
			this->Controls->Add(this->label1de1);
			this->Controls->Add(this->labelP1);
			this->Controls->Add(this->labelTitulo2);
			this->Controls->Add(this->labelTitulo);
			this->Name = L"FormEncuesta";
			this->Text = L"FormEncuesta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void buttonComenzar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	personas = Convert::ToInt32(textBoxCantidad->Text);
	for (int i=0;i<personas;i++)
	{
		encuesta* obj1 = new encuesta();
		arregloEncuesta->agregar(obj1);
	}
	auxedad= Convert::ToInt32(textBoxCantidad->Text);
	arregloEncuesta->obtener(aux - 1)->setedad(auxedad);
	labelanuncio->Visible = false;
	textBoxCantidad->Visible = false;
	buttonComenzar->Visible = false;
	labelEdad->Visible = true;
	textEdad->Visible = true;
	//titulo
	labelTitulo->Visible = true;
	labelTitulo2->Visible = true;
	labelTitulo2->Text = aux.ToString();
	//pregunta1
	labelP1->Visible = true;
	label1de1->Visible = true;
	label2de1->Visible = true;
	label3de1->Visible = true;
	label4de1->Visible = true;
	button1de1->Visible = true;
	button2de1->Visible = true;
	button3de1->Visible = true;
	button4de1->Visible = true;
	//pregunta2
	labelP2->Visible = true;
	label1de2->Visible = true;
	label2de2->Visible = true;
	label3de2->Visible = true;
	label4de2->Visible = true;
	button1de2->Visible = true;
	button2de2->Visible = true;
	button3de2->Visible = true;
	button4de2->Visible = true;
	//pregunta3
	labelP3->Visible = true;
	label1de3->Visible = true;
	label2de3->Visible = true;
	label3de3->Visible = true;
	label4de3->Visible = true;
	button1de3->Visible = true;
	button2de3->Visible = true;
	button3de3->Visible = true;
	button4de3->Visible = true;
	buttonSiguiente->Visible = true;


}

private: System::Void button1de1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button1de1->BackColor = System::Drawing::Color::Blue;
	label2de1->Visible = false;
	label3de1->Visible = false;
	label4de1->Visible = false;
	button2de1->Visible = false;
	button3de1->Visible = false;
	button4de1->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp1('A');
}
private: System::Void button2de1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button2de1->BackColor = System::Drawing::Color::Blue;
	label1de1->Visible = false;
	label3de1->Visible = false;
	label4de1->Visible = false;
	button1de1->Visible = false;
	button3de1->Visible = false;
	button4de1->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp1('B');
}
private: System::Void button3de1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button3de1->BackColor = System::Drawing::Color::Blue;
	label1de1->Visible = false;
	label2de1->Visible = false;
	label4de1->Visible = false;
	button1de1->Visible =false;
	button2de1->Visible =false;
	button4de1->Visible =false;
	arregloEncuesta->obtener(aux - 1)->setp1('C');
}

private: System::Void button4de1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button4de1->BackColor = System::Drawing::Color::Blue;
	label1de1->Visible = false;
	label2de1->Visible = false;
	label3de1->Visible = false;
	button1de1->Visible =false;
	button2de1->Visible =false;
	button3de1->Visible =false;
	arregloEncuesta->obtener(aux - 1)->setp1('D');
}

private: System::Void button1de2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button1de2->BackColor = System::Drawing::Color::Blue;
	label2de2->Visible = false;
	label3de2->Visible = false;
	label4de2->Visible = false;
	button2de2->Visible =false;
	button3de2->Visible =false;
	button4de2->Visible =false;
	arregloEncuesta->obtener(aux - 1)->setp2('A');
}

private: System::Void button2de2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button2de2->BackColor = System::Drawing::Color::Blue;
	label1de2->Visible =  false;
	label3de2->Visible =  false;
	label4de2->Visible =  false;
	button1de2->Visible = false;
	button3de2->Visible = false;
	button4de2->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp2('B');
}
private: System::Void button3de2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button3de2->BackColor = System::Drawing::Color::Blue;
	label1de2->Visible =  false;
	label2de2->Visible =  false;
	label4de2->Visible =  false;
	button1de2->Visible = false;
	button2de2->Visible = false;
	button4de2->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp2('C');
}
private: System::Void button4de2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button4de2->BackColor = System::Drawing::Color::Blue;
	label1de2->Visible =  false;
	label2de2->Visible =  false;
	label3de2->Visible =  false;
	button1de2->Visible = false;
	button2de2->Visible = false;
	button3de2->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp2('D');
}
private: System::Void button1de3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button1de3->BackColor = System::Drawing::Color::Blue;
	label2de3->Visible = false;
	label3de3->Visible = false;
	label4de3->Visible = false;
	button2de3->Visible = false;
	button3de3->Visible = false;
	button4de3->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp3('A');
}
private: System::Void button2de3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button2de3->BackColor = System::Drawing::Color::Blue;
	label1de3->Visible =  false;
	label3de3->Visible =  false;
	label4de3->Visible =  false;
	button1de3->Visible = false;
	button3de3->Visible = false;
	button4de3->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp3('B');


}
private: System::Void button3de3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button3de3->BackColor = System::Drawing::Color::Blue;
	label1de3->Visible =  false;
	label2de3->Visible =  false;
	label4de3->Visible =  false;
	button1de3->Visible = false;
	button2de3->Visible = false;
	button4de3->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp3('C');

}
private: System::Void button4de3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	button4de3->BackColor = System::Drawing::Color::Blue;
	label1de3->Visible =  false;
	label2de3->Visible =  false;
	label3de3->Visible =  false;
	button1de3->Visible = false;
	button2de3->Visible = false;
	button3de3->Visible = false;
	arregloEncuesta->obtener(aux - 1)->setp3('D');
}



private: System::Void buttonSiguiente_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (aux<personas)
	{
		aux = aux + 1;
		labelTitulo2->Text = aux.ToString();
		auxedad = Convert::ToInt32(textBoxCantidad->Text);
		arregloEncuesta->obtener(aux - 1)->setedad(auxedad);
		//pregunta1

		label1de1->Visible = true;
		label2de1->Visible = true;
		label3de1->Visible = true;
		label4de1->Visible = true;
		button1de1->Visible = true;
		button2de1->Visible = true;
		button3de1->Visible = true;
		button4de1->Visible = true;
		button1de1->BackColor = System::Drawing::SystemColors::ControlDark;
		button2de1->BackColor = System::Drawing::SystemColors::ControlDark;
		button3de1->BackColor = System::Drawing::SystemColors::ControlDark;
		button4de1->BackColor = System::Drawing::SystemColors::ControlDark;
		//pregunta2

		label1de2->Visible = true;
		label2de2->Visible = true;
		label3de2->Visible = true;
		label4de2->Visible = true;
		button1de2->Visible = true;
		button2de2->Visible = true;
		button3de2->Visible = true;
		button4de2->Visible = true;
		button1de2->BackColor = System::Drawing::SystemColors::ControlDark;
		button2de2->BackColor = System::Drawing::SystemColors::ControlDark;
		button3de2->BackColor = System::Drawing::SystemColors::ControlDark;
		button4de2->BackColor = System::Drawing::SystemColors::ControlDark;
		//pregunta3
		label1de3->Visible = true;
		label2de3->Visible = true;
		label3de3->Visible = true;
		label4de3->Visible = true;
		button1de3->Visible = true;
		button2de3->Visible = true;
		button3de3->Visible = true;
		button4de3->Visible = true;
		//button1de3->BackColor = System::Drawing::SystemColors::ControlDark;
		button1de3->BackColor = System::Drawing::SystemColors::ControlDark;
		button2de3->BackColor = System::Drawing::SystemColors::ControlDark;
		button3de3->BackColor = System::Drawing::SystemColors::ControlDark;
		button4de3->BackColor = System::Drawing::SystemColors::ControlDark;
	}
	else
	{
		buttonCalcular->Visible = true;
		buttonSiguiente->Visible = false;
	}

	
}
private: System::Void buttonRegreso_Click(System::Object^  sender, System::EventArgs^  e) 
{
	labelCalcular->Visible = true;
	labelca1->Visible = true;
	labelC1->Visible = true;
	labelca2->Visible = true;
	labelC2->Visible = true;
	labelca3->Visible = true;
	labelC3->Visible = true;
	labelca4->Visible = true;
	labelC4->Visible = true;

	labelanuncio->Visible = false;
	textBoxCantidad->Visible = false;
	buttonComenzar->Visible = false;
	labelEdad->Visible = false;
	textEdad->Visible = false;
	//titulo
	labelTitulo->Visible = false;
	labelTitulo2->Visible = false;
	labelTitulo2->Text = aux.ToString();
	//pregunta1
	labelP1->Visible = false;
	label1de1->Visible = false;
	label2de1->Visible = false;
	label3de1->Visible = false;
	label4de1->Visible = false;
	button1de1->Visible = false;
	button2de1->Visible = false;
	button3de1->Visible = false;
	button4de1->Visible = false;
	//pregunta2
	labelP2->Visible = false;
	label1de2->Visible =  false;
	label2de2->Visible =  false;
	label3de2->Visible =  false;
	label4de2->Visible =  false;
	button1de2->Visible = false;
	button2de2->Visible = false;
	button3de2->Visible = false;
	button4de2->Visible = false;
	//pregunta3
	labelP3->Visible =    false;
	label1de3->Visible =  false;
	label2de3->Visible =  false;
	label3de3->Visible =  false;
	label4de3->Visible =  false;
	button1de3->Visible = false;
	button2de3->Visible = false;
	button3de3->Visible = false;
	button4de3->Visible = false;
	buttonSiguiente->Visible = false;
	buttonCalcular->Visible = false;
}
private: System::Void labelca1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	for (int i=0;i<arregloEncuesta->get_N();i++)
	{
		if (arregloEncuesta->obtener(i)->getp1()=='D')
		{
			auxcalcular1 = auxcalcular1 + 1;
		}
	}
	labelC1->Text = auxcalcular1.ToString()+" empleados";
}

private: System::Void labelca2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	double cal;

	for (int i = 0; i<arregloEncuesta->get_N(); i++)
	{
		if (arregloEncuesta->obtener(i)->getp2() == 'B')
		{
			auxcalcular2 = auxcalcular2 + 1;
		}
	}
	cal = (auxcalcular2 / (aux*1.0)) * 100;
	labelC2->Text = cal.ToString()+"%";
}
private: System::Void labelca3_Click(System::Object^  sender, System::EventArgs^  e)
{
	for (int i = 0; i<arregloEncuesta->get_N(); i++)
	{
		if ((arregloEncuesta->obtener(i)->getp1() == 'A'|| arregloEncuesta->obtener(i)->getp1() == 'B')&&(arregloEncuesta->obtener(i)->getp3() == 'A' || arregloEncuesta->obtener(i)->getp3() == 'B'))
		{
			auxcalcular3 = auxcalcular3 + 1;
		}
	}
	labelC3->Text = auxcalcular3.ToString()+" empleados";


}
private: System::Void labelca4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	/*
	int extra;
	for (int i = 0; i<arregloEncuesta->get_N()-1; i++)
	{
		
		for (int j=1;j<arregloEncuesta->get_N();j++)
		{
			if (arregloEncuesta->obtener(i)->getedad()<arregloEncuesta->obtener(j)->getedad())
			{
				auxorden = arregloEncuesta->obtener(j)->getedad();
				arregloEncuesta->obtener(j)->setedad(arregloEncuesta->obtener(i)->getedad());
				arregloEncuesta->obtener(i)->setedad(auxorden);
			}
		}
	}
	for (int i=0;i<=arregloEncuesta->get_N();i++)
	{
		extra= arregloEncuesta->obtener(i)->getedad();
		labelC4->Text = extra.ToString();
		
	}
	*/
	/*int extra;
	extra = arregloEncuesta->obtener(aux-1)->getedad();
	labelC4->Text = extra.ToString();
	*/
}
};
}
