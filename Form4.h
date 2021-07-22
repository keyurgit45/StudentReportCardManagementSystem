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
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			displayData();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1268, 670);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1292, 694);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form4";
			this->Text = L"Class Result";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
		

		}
		

#pragma endregion
	
		System::Void displayData() {
			dataGridView1->ColumnCount = 8;
			dataGridView1->Columns[0]->Name = "Roll no";
			dataGridView1->Columns[1]->Name = "Name";
			dataGridView1->Columns[2]->Name = "LA";
			dataGridView1->Columns[3]->Name = "Physics";
			dataGridView1->Columns[4]->Name = "BEE";
			dataGridView1->Columns[5]->Name = "FP";
			dataGridView1->Columns[6]->Name = "Percentage";
			dataGridView1->Columns[7]->Name = "Grade";

			try
			{
				StreamReader^ reader = gcnew  StreamReader("student.txt");
				do
				{
					//textBox1->Text += (reader->ReadLine() + "\n");
					String^ line = reader->ReadLine();
					if (String::IsNullOrEmpty(line)) {
						MessageBox::Show("Records doesn't exist!", "Admin");
						reader->Close();
						return;
					}
					cli::array<String^>^ arr = line->Split('-');
					dataGridView1->Rows->Add(arr);
				} while (reader->Peek() != -1);
				reader->Close();
			}
			catch (System::Exception^ e)
			{
				Console::WriteLine(e->ToString());
				dataGridView1->Enabled = false;
			}
		}
	};
}


