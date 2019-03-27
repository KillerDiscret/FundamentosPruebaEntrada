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
		int personas;
		int aux;
	public:
		FormEncuesta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			aux = 1;
			arregloEncuesta = new Arrencuesta();
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
			this->labelP1->Location = System::Drawing::Point(22, 55);
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
			this->label1de1->Location = System::Drawing::Point(97, 82);
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
			this->label2de1->Location = System::Drawing::Point(97, 109);
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
			this->label3de1->Location = System::Drawing::Point(97, 136);
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
			this->label4de1->Location = System::Drawing::Point(97, 163);
			this->label4de1->Name = L"label4de1";
			this->label4de1->Size = System::Drawing::Size(125, 17);
			this->label4de1->TabIndex = 10;
			this->label4de1->Text = L"Definitivamente no";
			this->label4de1->Visible = false;
			// 
			// button1de1
			// 
			this->button1de1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1de1->Location = System::Drawing::Point(64, 80);
			this->button1de1->Name = L"button1de1";
			this->button1de1->Size = System::Drawing::Size(27, 23);
			this->button1de1->TabIndex = 22;
			this->button1de1->Text = L"A";
			this->button1de1->UseVisualStyleBackColor = true;
			this->button1de1->Visible = false;
			this->button1de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de1_Click);
			// 
			// button2de1
			// 
			this->button2de1->Location = System::Drawing::Point(64, 106);
			this->button2de1->Name = L"button2de1";
			this->button2de1->Size = System::Drawing::Size(27, 23);
			this->button2de1->TabIndex = 23;
			this->button2de1->Text = L"B";
			this->button2de1->UseVisualStyleBackColor = true;
			this->button2de1->Visible = false;
			this->button2de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button2de1_Click);
			// 
			// button3de1
			// 
			this->button3de1->Location = System::Drawing::Point(64, 133);
			this->button3de1->Name = L"button3de1";
			this->button3de1->Size = System::Drawing::Size(27, 23);
			this->button3de1->TabIndex = 24;
			this->button3de1->Text = L"C";
			this->button3de1->UseVisualStyleBackColor = true;
			this->button3de1->Visible = false;
			this->button3de1->Click += gcnew System::EventHandler(this, &FormEncuesta::button3de1_Click);
			// 
			// button4de1
			// 
			this->button4de1->Location = System::Drawing::Point(64, 159);
			this->button4de1->Name = L"button4de1";
			this->button4de1->Size = System::Drawing::Size(27, 23);
			this->button4de1->TabIndex = 25;
			this->button4de1->Text = L"E";
			this->button4de1->UseVisualStyleBackColor = true;
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
			this->labelanuncio->Location = System::Drawing::Point(110, 153);
			this->labelanuncio->Name = L"labelanuncio";
			this->labelanuncio->Size = System::Drawing::Size(172, 56);
			this->labelanuncio->TabIndex = 26;
			this->labelanuncio->Text = L"Ingrese la cantidad \r\nde personas\r\n";
			// 
			// textBoxCantidad
			// 
			this->textBoxCantidad->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCantidad->Location = System::Drawing::Point(304, 170);
			this->textBoxCantidad->Name = L"textBoxCantidad";
			this->textBoxCantidad->Size = System::Drawing::Size(100, 26);
			this->textBoxCantidad->TabIndex = 27;
			// 
			// labelP2
			// 
			this->labelP2->AutoSize = true;
			this->labelP2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP2->Location = System::Drawing::Point(22, 209);
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
			this->label1de2->Location = System::Drawing::Point(97, 239);
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
			this->label2de2->Location = System::Drawing::Point(97, 267);
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
			this->label3de2->Location = System::Drawing::Point(97, 292);
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
			this->label4de2->Location = System::Drawing::Point(97, 319);
			this->label4de2->Name = L"label4de2";
			this->label4de2->Size = System::Drawing::Size(49, 17);
			this->label4de2->TabIndex = 32;
			this->label4de2->Text = L"Nunca";
			this->label4de2->Visible = false;
			// 
			// button1de2
			// 
			this->button1de2->Location = System::Drawing::Point(64, 236);
			this->button1de2->Name = L"button1de2";
			this->button1de2->Size = System::Drawing::Size(27, 23);
			this->button1de2->TabIndex = 33;
			this->button1de2->Text = L"A";
			this->button1de2->UseVisualStyleBackColor = true;
			this->button1de2->Visible = false;
			this->button1de2->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de2_Click);
			// 
			// button2de2
			// 
			this->button2de2->Location = System::Drawing::Point(64, 264);
			this->button2de2->Name = L"button2de2";
			this->button2de2->Size = System::Drawing::Size(27, 23);
			this->button2de2->TabIndex = 34;
			this->button2de2->Text = L"B";
			this->button2de2->UseVisualStyleBackColor = true;
			this->button2de2->Visible = false;
			// 
			// button3de2
			// 
			this->button3de2->Location = System::Drawing::Point(64, 290);
			this->button3de2->Name = L"button3de2";
			this->button3de2->Size = System::Drawing::Size(27, 23);
			this->button3de2->TabIndex = 35;
			this->button3de2->Text = L"C";
			this->button3de2->UseVisualStyleBackColor = true;
			this->button3de2->Visible = false;
			// 
			// button4de2
			// 
			this->button4de2->Location = System::Drawing::Point(64, 317);
			this->button4de2->Name = L"button4de2";
			this->button4de2->Size = System::Drawing::Size(27, 23);
			this->button4de2->TabIndex = 36;
			this->button4de2->Text = L"E";
			this->button4de2->UseVisualStyleBackColor = true;
			this->button4de2->Visible = false;
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
			this->buttonComenzar->Location = System::Drawing::Point(228, 264);
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
			this->labelP3->Location = System::Drawing::Point(22, 347);
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
			this->label1de3->Location = System::Drawing::Point(97, 377);
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
			this->label2de3->Location = System::Drawing::Point(97, 403);
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
			this->label3de3->Location = System::Drawing::Point(97, 429);
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
			this->label4de3->Location = System::Drawing::Point(98, 459);
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
			this->buttonSiguiente->Location = System::Drawing::Point(200, 490);
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
			this->button1de3->Location = System::Drawing::Point(64, 374);
			this->button1de3->Name = L"button1de3";
			this->button1de3->Size = System::Drawing::Size(27, 23);
			this->button1de3->TabIndex = 44;
			this->button1de3->Text = L"A";
			this->button1de3->UseVisualStyleBackColor = true;
			this->button1de3->Visible = false;
			this->button1de3->Click += gcnew System::EventHandler(this, &FormEncuesta::button1de3_Click);
			// 
			// button2de3
			// 
			this->button2de3->Location = System::Drawing::Point(64, 400);
			this->button2de3->Name = L"button2de3";
			this->button2de3->Size = System::Drawing::Size(27, 23);
			this->button2de3->TabIndex = 45;
			this->button2de3->Text = L"B";
			this->button2de3->UseVisualStyleBackColor = true;
			this->button2de3->Visible = false;
			// 
			// button3de3
			// 
			this->button3de3->Location = System::Drawing::Point(64, 426);
			this->button3de3->Name = L"button3de3";
			this->button3de3->Size = System::Drawing::Size(27, 23);
			this->button3de3->TabIndex = 46;
			this->button3de3->Text = L"C";
			this->button3de3->UseVisualStyleBackColor = true;
			this->button3de3->Visible = false;
			// 
			// button4de3
			// 
			this->button4de3->Location = System::Drawing::Point(64, 455);
			this->button4de3->Name = L"button4de3";
			this->button4de3->Size = System::Drawing::Size(27, 23);
			this->button4de3->TabIndex = 47;
			this->button4de3->Text = L"E";
			this->button4de3->UseVisualStyleBackColor = true;
			this->button4de3->Visible = false;
			// 
			// FormEncuesta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 550);
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
	labelanuncio->Visible = false;
	textBoxCantidad->Visible = false;
	buttonComenzar->Visible = false;
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

private: System::Void buttonSiguiente_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (aux<personas)
	{
		aux = aux + 1;
		labelTitulo2->Text = aux.ToString();
	}
	//pregunta1

	label1de1->Visible = true;
	label2de1->Visible = true;
	label3de1->Visible = true;
	label4de1->Visible = true;
	button1de1->Visible = true;
	button2de1->Visible = true;
	button3de1->Visible = true;
	button4de1->Visible = true;
	button1de1->BackColor = System::Drawing::SystemColors::ButtonFace;
	button2de1->BackColor = System::Drawing::SystemColors::ButtonFace;
	button3de1->BackColor = System::Drawing::SystemColors::ButtonFace;
	button4de1->BackColor = System::Drawing::SystemColors::ButtonFace;
	//pregunta2

	label1de2->Visible = true;
	label2de2->Visible = true;
	label3de2->Visible = true;
	label4de2->Visible = true;
	button1de2->Visible = true;
	button2de2->Visible = true;
	button3de2->Visible = true;
	button4de2->Visible = true;
	button1de2->BackColor = System::Drawing::SystemColors::ButtonFace;
	//pregunta3
	label1de3->Visible = true;
	label2de3->Visible = true;
	label3de3->Visible = true;
	label4de3->Visible = true;
	button1de3->Visible = true;
	button2de3->Visible = true;
	button3de3->Visible = true;
	button4de3->Visible = true;
	button1de3->BackColor = System::Drawing::SystemColors::ButtonFace;

}


};
}
