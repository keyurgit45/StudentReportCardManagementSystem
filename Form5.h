#pragma once

namespace ReportCardManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(86, 50);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(842, 481);
			this->textBox1->TabIndex = 0;
			this->textBox1->ScrollBars = ScrollBars::Vertical;
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 570);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form5";
			this->Text = L"DISPLAY ALL RECORD";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^ sender, System::EventArgs^ e) {
		displayData();
	}
	private:System::Void displayData() {

			   try
			   {
				   StreamReader^ reader = gcnew  StreamReader("student.txt");
				   do
				   {
					   //textBox1->Text += (reader->ReadLine() + "\n");
					   String^ line = reader->ReadLine();
					   if (String::IsNullOrEmpty(line)) {
						   MessageBox::Show("Records doesn't exist! Add some data", "Admin");
						   reader->Close();
						   return;
					   }
					   cli::array<String^>^ arr = line->Split('-');
					   textBox1->AppendText( "Roll number of student : " + arr[0]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Name of student : " + arr[1]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Marks in Linear Algebra : " + arr[2]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Marks in Physics : " + arr[3]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Marks in BEE : " + arr[4]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Marks in Fundamentals of programming : " + arr[5]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Percentage of student is  : " + arr[6]);
					   textBox1->AppendText("\r\n");
					   textBox1->AppendText("Grade of student is : " + arr[7]);
					   textBox1->AppendText("\r\n\r\n##########################################\r\n\r\n");
					   
				   } while (reader->Peek() != -1);

				   reader->Close();

			   }

			   catch (System::Exception^ e)
			   {
				   Console::WriteLine(e->ToString());
				   
			   }


		   }
	};
}
