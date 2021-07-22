#pragma once
#include<stdio.h>

namespace ReportCardManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for SearchStudent
	/// </summary>
	public ref class SearchStudent : public System::Windows::Forms::Form
	{
	public:
		String^ inp = " ";
		SearchStudent(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			
		}
		SearchStudent(String^ inp)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			this->inp = inp;
			this->Text = inp;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please Enter The roll number :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(399, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(177, 102);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(645, 445);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(743, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SearchStudent::button1_Click);
			// 
			// SearchStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 570);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"SearchStudent";
			this->Load += gcnew System::EventHandler(this, &SearchStudent::SearchStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (inp == "SEARCH STUDENT RECORD") {
			
			searchStudent();
		}else if(inp == "DELETE STUDENT RECORD") {
			
			deleteStudent();
		}
		else if (inp == "Student Report Card") {
			searchStudent();
		}
	}

	private: void searchStudent() {
		if (textBox1->Text->Length > 1) {
			try
			{
				bool found = false;
				textBox2->Clear();
				StreamReader^ reader = gcnew  StreamReader("student.txt");
				do
				{
					//textBox1->Text += (reader->ReadLine() + "\n");
					String^ line = reader->ReadLine();
					if (String::IsNullOrEmpty(line) ){
						MessageBox::Show("Record doesn't exist!", "Admin");
						reader->Close();
						return;
					}
					cli::array<String^>^ arr = line->Split('-');
					if (arr[0] == textBox1->Text) {
						found = true;
						textBox2->Text += "Roll number of student : " + arr[0];
						textBox2->Text += "\r\n";
						textBox2->Text += "Name of student : " + arr[1];
						textBox2->Text += "\r\n";
						textBox2->Text += "Marks in Linear Algebra : " + arr[2];
						textBox2->Text += "\r\n";
						textBox2->Text += "Marks in Physics : " + arr[3];
						textBox2->Text += "\r\n";
						textBox2->Text += "Marks in BEE : " + arr[4];
						textBox2->Text += "\r\n";
						textBox2->Text += "Marks in Fundamentals of programming : " + arr[5];
						textBox2->Text += "\r\n";
						textBox2->Text += "Percentage of student is  : " + arr[6];
						textBox2->Text += "\r\n";
						textBox2->Text += "Grade of student is : " + arr[7];
						break;

					}

				} while (reader->Peek() != -1);

				reader->Close();
				if (!found) {
					MessageBox::Show("Record doesn't exist!","Admin");
				}

			}
			catch (System::Exception^ e)
			{
				textBox2->AppendText(e->ToString());

			}
		}
	}

	private: void deleteStudent() {
		if (textBox1->Text->Length > 1) {
			try
			{
				textBox2->Clear();
				StreamReader^ reader = gcnew  StreamReader("student.txt");
				StreamWriter^ writer =   File::AppendText("temp.txt");
	
				do
				{
					//textBox1->Text += (reader->ReadLine() + "\n");
					String^ line = reader->ReadLine();
					if (String::IsNullOrEmpty(line)) {
						MessageBox::Show("Record doesn't exist!", "Admin");
						reader->Close();
						writer->Close();
						return;
					}
					if (line->Split('-')[0] == textBox1->Text) {
						continue;
					}
					writer->WriteLine(line);	

				} while (reader->Peek() != -1);
				reader->Close();
				writer->Close();
				remove("student.txt");
				rename("temp.txt", "student.txt");
				MessageBox::Show("Record Deleted!", "Admin");

			}
			catch (System::Exception^ e)
			{
				textBox2->AppendText(e->ToString());

			}
		}

	}

private: System::Void SearchStudent_Load(System::Object^ sender, System::EventArgs^ e) {
	if (inp == "DELETE STUDENT RECORD") {this->button1->Text = L"Delete"; }
}
};
}
