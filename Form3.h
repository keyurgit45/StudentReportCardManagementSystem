#pragma once
#include "GetData.h"
#include "DisplayAll.h"
#include "Form5.h"
#include "SearchStudent1.h"
#include "modifyStudent.h"
namespace ReportCardManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(281, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"3.Search Student Record";
			this->label4->Click += gcnew System::EventHandler(this, &Form3::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(341, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2.Display All Students Records";
			this->label3->Click += gcnew System::EventHandler(this, &Form3::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(277, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"1.Create Student Record";
			this->label2->Click += gcnew System::EventHandler(this, &Form3::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(356, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 45);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Entry/Edit Menu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(276, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"4.Modify Student Record";
			this->label5->Click += gcnew System::EventHandler(this, &Form3::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 354);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(276, 29);
			this->label6->TabIndex = 13;
			this->label6->Text = L"5.Delete Student Record";
			this->label6->Click += gcnew System::EventHandler(this, &Form3::label6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 412);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(245, 29);
			this->label8->TabIndex = 15;
			this->label8->Text = L"6.Back To Main Menu";
			this->label8->Click += gcnew System::EventHandler(this, &Form3::label8_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 570);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Location = System::Drawing::Point(99, 213);
			this->Name = L"Form3";
			this->Text = L"Student ReportCard Management System";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
		   


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	 GetData^ getdataform = gcnew GetData();
	 getdataform->ShowDialog();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	Form5^ form5 = gcnew Form5();
	form5->ShowDialog();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchStudent^ searchStudent = gcnew SearchStudent("SEARCH STUDENT RECORD");
	searchStudent->ShowDialog();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchStudent^ searchStudent = gcnew SearchStudent("DELETE STUDENT RECORD");
	searchStudent->ShowDialog();
	
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	modifyStudent^ modify = gcnew modifyStudent();
	modify->ShowDialog();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
