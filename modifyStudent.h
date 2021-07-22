#pragma once
#include "Student.h"
namespace ReportCardManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for modifyStudent
	/// </summary>
	public ref class modifyStudent : public System::Windows::Forms::Form
	{
	public:
		modifyStudent(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~modifyStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;

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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(66, 459);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(102, 26);
			this->textBox6->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(62, 421);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(439, 20);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Enter The marks in Fundamentals of programming out of 100";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(66, 377);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(102, 26);
			this->textBox5->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(62, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 20);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Enter The marks in BEE out of 100";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(66, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(102, 26);
			this->textBox4->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(62, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(275, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Enter The marks in Physics out of 100";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(102, 26);
			this->textBox3->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(325, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Enter The marks in Linear Algebra out of 100";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(461, 26);
			this->textBox2->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Enter The Name of student";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(343, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 26);
			this->textBox1->TabIndex = 13;
			//
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(62, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Enter The Roll number of student";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(773, 485);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 38);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Modify";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &modifyStudent::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(793, 494);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 20);
			this->label7->TabIndex = 25;
			this->label7->Text = L"";
			// 
			// modifyStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 570);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"modifyStudent";
			this->Text = L"Modify Student Record";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox1->TextLength > 1) & (textBox2->TextLength > 1) & (textBox3->TextLength > 0) & (textBox4->TextLength > 0) & (textBox5->TextLength > 0) & (textBox6->TextLength > 0)) {
		Student s1;
		String^ str;
		int roll = System::Convert::ToInt32(textBox1->Text);
		String^ nm = textBox2->Text;
		int la = System::Convert::ToInt32(textBox3->Text);
		int p = System::Convert::ToInt32(textBox4->Text);
		int bee = System::Convert::ToInt32(textBox5->Text);
		int fp = System::Convert::ToInt32(textBox6->Text);
		str = s1.setdata(roll, nm, la, p, bee, fp);
		
		try
		{
			StreamReader^ reader = gcnew  StreamReader("student.txt");
			StreamWriter^ writer = File::AppendText("temp.txt");
			do
			{
				//textBox1->Text += (reader->ReadLine() + "\n");
				String^ line = reader->ReadLine();
				if (String::IsNullOrEmpty(line)) {
					MessageBox::Show("Records doesn't exist!", "Admin");
					reader->Close();
					return;
				}
				if (line->Split('-')[0] == textBox1->Text) {
					writer->WriteLine(str);
					continue;
				}
				writer->WriteLine(line);

			} while (reader->Peek() != -1);
			reader->Close();
			writer->Close();
			remove("student.txt");
			rename("temp.txt", "student.txt");
			button1->Visible = false;
			label7->Text = "Record Modified!";

		}
		catch (System::Exception^ e)
		{
			Console::WriteLine(e->ToString());

		}

	}
	else {
		MessageBox::Show("Please Fill all the Fields!", "Admin");
	}
}
};
}
