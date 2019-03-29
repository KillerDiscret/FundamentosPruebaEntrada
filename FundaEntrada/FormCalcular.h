#pragma once
#include "En.h"
#include "ArregloEncuesta.h"
namespace FundaEntrada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormCalcular
	/// </summary>
	public ref class FormCalcular : public System::Windows::Forms::Form
	{


	private:
		int auxcalcular1;
		int auxcalcular2;
		int auxcalcular3;
		int auxcalcular4;
	public:
		FormCalcular(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			auxcalcular1 = 0;
			auxcalcular2 = 0;
			auxcalcular3 = 0;
			auxcalcular4 = 0;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormCalcular()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelCalcular;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  labelCal1;
	private: System::Windows::Forms::Label^  labelCal2;
	private: System::Windows::Forms::Label^  labelCal3;
	private: System::Windows::Forms::Label^  labelCal4;





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
			this->labelCalcular = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelCal1 = (gcnew System::Windows::Forms::Label());
			this->labelCal2 = (gcnew System::Windows::Forms::Label());
			this->labelCal3 = (gcnew System::Windows::Forms::Label());
			this->labelCal4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelCalcular
			// 
			this->labelCalcular->AutoSize = true;
			this->labelCalcular->BackColor = System::Drawing::Color::GreenYellow;
			this->labelCalcular->Font = (gcnew System::Drawing::Font(L"SketchFlow Print", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCalcular->Location = System::Drawing::Point(107, 9);
			this->labelCalcular->Name = L"labelCalcular";
			this->labelCalcular->Size = System::Drawing::Size(186, 34);
			this->labelCalcular->TabIndex = 0;
			this->labelCalcular->Text = L"CALCULAR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Khaki;
			this->label1->Location = System::Drawing::Point(60, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Total de empleados que indican que definitivamente \r\nno reciben un salario adecua"
				L"do";
			this->label1->Click += gcnew System::EventHandler(this, &FormCalcular::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Khaki;
			this->label2->Location = System::Drawing::Point(45, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(290, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Porcentaje de empleados que señalan las tareas asignadas \r\nayudan a desarrollar s"
				L"u aspecto profesional";
			this->label2->Click += gcnew System::EventHandler(this, &FormCalcular::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Khaki;
			this->label3->Location = System::Drawing::Point(73, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Total de empleados que si reciben un salario \r\nadecuado y si están satisfechos co"
				L"n su empleo";
			this->label3->Click += gcnew System::EventHandler(this, &FormCalcular::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Khaki;
			this->label4->Location = System::Drawing::Point(86, 352);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Listado de los empelados encuestados \r\nordenado ascendentemente por la edad";
			this->label4->Click += gcnew System::EventHandler(this, &FormCalcular::label4_Click);
			// 
			// labelCal1
			// 
			this->labelCal1->AutoSize = true;
			this->labelCal1->BackColor = System::Drawing::Color::Thistle;
			this->labelCal1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCal1->Location = System::Drawing::Point(165, 118);
			this->labelCal1->Name = L"labelCal1";
			this->labelCal1->Size = System::Drawing::Size(0, 22);
			this->labelCal1->TabIndex = 5;
			// 
			// labelCal2
			// 
			this->labelCal2->AutoSize = true;
			this->labelCal2->BackColor = System::Drawing::Color::Thistle;
			this->labelCal2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCal2->Location = System::Drawing::Point(165, 212);
			this->labelCal2->Name = L"labelCal2";
			this->labelCal2->Size = System::Drawing::Size(0, 22);
			this->labelCal2->TabIndex = 6;
			// 
			// labelCal3
			// 
			this->labelCal3->AutoSize = true;
			this->labelCal3->BackColor = System::Drawing::Color::Thistle;
			this->labelCal3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCal3->Location = System::Drawing::Point(165, 312);
			this->labelCal3->Name = L"labelCal3";
			this->labelCal3->Size = System::Drawing::Size(0, 22);
			this->labelCal3->TabIndex = 7;
			// 
			// labelCal4
			// 
			this->labelCal4->AutoSize = true;
			this->labelCal4->BackColor = System::Drawing::Color::Thistle;
			this->labelCal4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCal4->Location = System::Drawing::Point(165, 409);
			this->labelCal4->Name = L"labelCal4";
			this->labelCal4->Size = System::Drawing::Size(0, 22);
			this->labelCal4->TabIndex = 8;
			// 
			// FormCalcular
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 457);
			this->Controls->Add(this->labelCal4);
			this->Controls->Add(this->labelCal3);
			this->Controls->Add(this->labelCal2);
			this->Controls->Add(this->labelCal1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelCalcular);
			this->Name = L"FormCalcular";
			this->Text = L"FormCalcular";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
{

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
{


}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) 
{


}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) 
{


}
};
}
