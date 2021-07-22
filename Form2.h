#pragma once
#include"Form1.h"
#include "Form4.h"
#include "SearchStudent1.h"
namespace ReportCardManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(369, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 45);
			this->label1->TabIndex = 3;
			this->label1->Text = L"RESULT MENU";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 29);
			this->label2->TabIndex = 5;
			this->label2->Text = L"1. Class Result";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(90, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"2. Save as CSV (Excel)";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(90, 315);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"3. Back to Main Menu";
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click_1);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1033, 570);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Location = System::Drawing::Point(99, 213);
			this->Name = L"Form2";
			this->Text = L"Student ReportCard Management System";
			this->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Form4^ f4 = gcnew Form4();
	f4->ShowDialog();
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	save_as_csv();

}

private: void save_as_csv() {
	StreamWriter^ sw = gcnew StreamWriter("StudentReportCard.csv");
	StreamReader^ sr = gcnew StreamReader("student.txt");

	sw->Write("\r\n,,,,Student Report Card\r\n\r\n");
	sw->Write(",Roll No,Name,LA,Physics,BEE,FP,Percentage,Grade\r\n");

	do {
		String^ line = sr->ReadLine();
		if (String::IsNullOrEmpty(line)) {
			MessageBox::Show("Database is empty, Add some data", "Admin");
			sr->Close();
			sw->Close();
			return;
		}
		cli::array<String^>^ arr = line->Split('-');
		String^ newStr = "," + arr[0] + "," + arr[1] + "," + arr[2] + "," + arr[3] + "," + arr[4] + "," + arr[5] + "," + arr[6] + "," + arr[7] + "\r\n";
		sw->Write(newStr);

	} while (sr->Peek() != -1);

	sw->Close();
	sr->Close();
	MessageBox::Show("File saved successfully!", "Admin", MessageBoxButtons::OK);

}

};
}
