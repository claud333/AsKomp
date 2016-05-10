#pragma once

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  My_text;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  T0;
	private: System::Windows::Forms::TextBox^  T1;
	private: System::Windows::Forms::TextBox^  T2;
	private: System::Windows::Forms::TextBox^  T3;
	private: System::Windows::Forms::TextBox^  T4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  Z;
	private: System::Windows::Forms::TextBox^  ERR;


	private: System::Windows::Forms::TextBox^  GT;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;























	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->My_text = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->T0 = (gcnew System::Windows::Forms::TextBox());
			this->T1 = (gcnew System::Windows::Forms::TextBox());
			this->T2 = (gcnew System::Windows::Forms::TextBox());
			this->T3 = (gcnew System::Windows::Forms::TextBox());
			this->T4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Z = (gcnew System::Windows::Forms::TextBox());
			this->ERR = (gcnew System::Windows::Forms::TextBox());
			this->GT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// My_text
			// 
			this->My_text->Location = System::Drawing::Point(2, 1);
			this->My_text->Name = L"My_text";
			this->My_text->Size = System::Drawing::Size(464, 303);
			this->My_text->TabIndex = 0;
			this->My_text->Text = L"";
			this->My_text->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(475, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(500, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// T0
			// 
			this->T0->Location = System::Drawing::Point(472, 72);
			this->T0->Name = L"T0";
			this->T0->Size = System::Drawing::Size(16, 20);
			this->T0->TabIndex = 3;
			// 
			// T1
			// 
			this->T1->Location = System::Drawing::Point(494, 72);
			this->T1->Name = L"T1";
			this->T1->Size = System::Drawing::Size(18, 20);
			this->T1->TabIndex = 4;
			// 
			// T2
			// 
			this->T2->Location = System::Drawing::Point(518, 72);
			this->T2->Name = L"T2";
			this->T2->Size = System::Drawing::Size(18, 20);
			this->T2->TabIndex = 5;
			// 
			// T3
			// 
			this->T3->Location = System::Drawing::Point(542, 72);
			this->T3->Name = L"T3";
			this->T3->Size = System::Drawing::Size(18, 20);
			this->T3->TabIndex = 6;
			// 
			// T4
			// 
			this->T4->Location = System::Drawing::Point(566, 72);
			this->T4->Name = L"T4";
			this->T4->Size = System::Drawing::Size(18, 20);
			this->T4->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(472, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"0";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(497, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(523, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(542, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(568, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"4";
			// 
			// Z
			// 
			this->Z->Location = System::Drawing::Point(472, 172);
			this->Z->Name = L"Z";
			this->Z->Size = System::Drawing::Size(16, 20);
			this->Z->TabIndex = 13;
			// 
			// ERR
			// 
			this->ERR->Location = System::Drawing::Point(565, 172);
			this->ERR->Name = L"ERR";
			this->ERR->Size = System::Drawing::Size(16, 20);
			this->ERR->TabIndex = 14;
			// 
			// GT
			// 
			this->GT->Location = System::Drawing::Point(518, 172);
			this->GT->Name = L"GT";
			this->GT->Size = System::Drawing::Size(16, 20);
			this->GT->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(562, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"ERR";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(514, 152);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"GT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(475, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Z";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 316);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->GT);
			this->Controls->Add(this->ERR);
			this->Controls->Add(this->Z);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->T4);
			this->Controls->Add(this->T3);
			this->Controls->Add(this->T2);
			this->Controls->Add(this->T1);
			this->Controls->Add(this->T0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->My_text);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				////////////////////////////////////////////////////
				
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 array<Char>^ mas = My_text->Text->ToCharArray();
				 for (int i = 0; i < mas->Length; i++)
				 {
					 if ( mas[i] == 'a' && mas[i + 1] == 'd' && mas[i + 2] == 'd'&&(i+3<mas->Length)&& mas[i + 3] == ' '&&mas[i+5]==',')
					 {
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
						 {
							 case '0':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) + Convert::ToInt32(T0->Text)); break;
							 case '1':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) + Convert::ToInt32(T1->Text)); break;
							 case '2':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) + Convert::ToInt32(T2->Text)); break;
							 case '3':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) + Convert::ToInt32(T3->Text)); break;
							 case '4':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) + Convert::ToInt32(T4->Text)); break;
						 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							 case '0':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) + Convert::ToInt32(T0->Text)); break;
							 case '1':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) + Convert::ToInt32(T1->Text)); break;
							 case '2':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) + Convert::ToInt32(T2->Text)); break;
							 case '3':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) + Convert::ToInt32(T3->Text)); break;
							 case '4':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) + Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							 case '0':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) + Convert::ToInt32(T0->Text)); break;
							 case '1':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) + Convert::ToInt32(T1->Text)); break;
							 case '2':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) + Convert::ToInt32(T2->Text)); break;
							 case '3':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) + Convert::ToInt32(T3->Text)); break;
							 case '4':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) + Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							 case '0':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) + Convert::ToInt32(T0->Text)); break;
							 case '1':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) + Convert::ToInt32(T1->Text)); break;
							 case '2':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) + Convert::ToInt32(T2->Text)); break;
							 case '3':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) + Convert::ToInt32(T3->Text)); break;
							 case '4':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) + Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							 case '0':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) + Convert::ToInt32(T0->Text)); break;
							 case '1':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) + Convert::ToInt32(T1->Text)); break;
							 case '2':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) + Convert::ToInt32(T2->Text)); break;
							 case '3':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) + Convert::ToInt32(T3->Text)); break;
							 case '4':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) + Convert::ToInt32(T4->Text)); break;
							 } break;
						 }
						
					 }
					
					 ////////////////////////////////////
					 if (mas[i] == 'd' && mas[i + 1] == 'i' && mas[i + 2] == 'v' && (i + 3<mas->Length) && mas[i + 3] == ' '&&mas[i + 5] == ',')
					 {
						
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
							 {
							 case '0': ERR->Text = Convert::ToString(1); break;
							 case '1':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) / Convert::ToInt32(T1->Text)); break;
							 case '2':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) / Convert::ToInt32(T2->Text)); break;
							 case '3':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) / Convert::ToInt32(T3->Text)); break;
							 case '4':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) / Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							 case '0':ERR->Text = Convert::ToString(1); break;
							 case '1':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) / Convert::ToInt32(T1->Text)); break;
							 case '2':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) / Convert::ToInt32(T2->Text)); break;
							 case '3':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) / Convert::ToInt32(T3->Text)); break;
							 case '4':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) / Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							 case '0':ERR->Text = Convert::ToString(1); break;
							 case '1':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) / Convert::ToInt32(T1->Text)); break;
							 case '2':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) / Convert::ToInt32(T2->Text)); break;
							 case '3':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) / Convert::ToInt32(T3->Text)); break;
							 case '4':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) / Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							 case '0':ERR->Text = Convert::ToString(1); break;
							 case '1':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) / Convert::ToInt32(T1->Text)); break;
							 case '2':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) / Convert::ToInt32(T2->Text)); break;
							 case '3':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) / Convert::ToInt32(T3->Text)); break;
							 case '4':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) / Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							 case '0':ERR->Text = Convert::ToString(1); break;
							 case '1':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) / Convert::ToInt32(T1->Text)); break;
							 case '2':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) / Convert::ToInt32(T2->Text)); break;
							 case '3':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) / Convert::ToInt32(T3->Text)); break;
							 case '4':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) / Convert::ToInt32(T4->Text)); break;
							 } break;
						 }

					 }
					 ////////////////////////////////////////////////////////////////
					 if (mas[i] == 'm' && mas[i + 1] == 'u' && mas[i + 2] == 'l' && (i + 3<mas->Length) && mas[i + 3] == ' '&&mas[i + 5] == ',')
					 {
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
							 {
							 case '0':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) * Convert::ToInt32(T0->Text)); break;
							 case '1':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) * Convert::ToInt32(T1->Text)); break;
							 case '2':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) * Convert::ToInt32(T2->Text)); break;
							 case '3':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) * Convert::ToInt32(T3->Text)); break;
							 case '4':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) * Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							 case '0':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) * Convert::ToInt32(T0->Text)); break;
							 case '1':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) * Convert::ToInt32(T1->Text)); break;
							 case '2':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) * Convert::ToInt32(T2->Text)); break;
							 case '3':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) * Convert::ToInt32(T3->Text)); break;
							 case '4':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) * Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							 case '0':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) * Convert::ToInt32(T0->Text)); break;
							 case '1':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) * Convert::ToInt32(T1->Text)); break;
							 case '2':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) * Convert::ToInt32(T2->Text)); break;
							 case '3':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) * Convert::ToInt32(T3->Text)); break;
							 case '4':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) * Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							 case '0':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) * Convert::ToInt32(T0->Text)); break;
							 case '1':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) * Convert::ToInt32(T1->Text)); break;
							 case '2':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) * Convert::ToInt32(T2->Text)); break;
							 case '3':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) * Convert::ToInt32(T3->Text)); break;
							 case '4':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) * Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							 case '0':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) * Convert::ToInt32(T0->Text)); break;
							 case '1':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) * Convert::ToInt32(T1->Text)); break;
							 case '2':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) * Convert::ToInt32(T2->Text)); break;
							 case '3':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) * Convert::ToInt32(T3->Text)); break;
							 case '4':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) * Convert::ToInt32(T4->Text)); break;
							 } break;
						 }

					 }
					 ////////////////////////////////////////////////////////////////
					 if (mas[i] == 's' && mas[i + 1] == 'u' && mas[i + 2] == 'b' && (i + 3<mas->Length) && mas[i + 3] == ' '&&mas[i + 5] == ',')
					 {
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
							 {
							 case '0':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) - Convert::ToInt32(T0->Text)); break;
							 case '1':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) - Convert::ToInt32(T1->Text)); break;
							 case '2':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) - Convert::ToInt32(T2->Text)); break;
							 case '3':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) - Convert::ToInt32(T3->Text)); break;
							 case '4':T0->Text = Convert::ToString(Convert::ToInt32(T0->Text) - Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							 case '0':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) - Convert::ToInt32(T0->Text)); break;
							 case '1':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) - Convert::ToInt32(T1->Text)); break;
							 case '2':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) - Convert::ToInt32(T2->Text)); break;
							 case '3':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) - Convert::ToInt32(T3->Text)); break;
							 case '4':T1->Text = Convert::ToString(Convert::ToInt32(T1->Text) - Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							 case '0':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) - Convert::ToInt32(T0->Text)); break;
							 case '1':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) - Convert::ToInt32(T1->Text)); break;
							 case '2':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) - Convert::ToInt32(T2->Text)); break;
							 case '3':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) - Convert::ToInt32(T3->Text)); break;
							 case '4':T2->Text = Convert::ToString(Convert::ToInt32(T2->Text) - Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							 case '0':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) - Convert::ToInt32(T0->Text)); break;
							 case '1':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) - Convert::ToInt32(T1->Text)); break;
							 case '2':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) - Convert::ToInt32(T2->Text)); break;
							 case '3':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) - Convert::ToInt32(T3->Text)); break;
							 case '4':T3->Text = Convert::ToString(Convert::ToInt32(T3->Text) - Convert::ToInt32(T4->Text)); break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							 case '0':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) - Convert::ToInt32(T0->Text)); break;
							 case '1':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) - Convert::ToInt32(T1->Text)); break;
							 case '2':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) - Convert::ToInt32(T2->Text)); break;
							 case '3':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) - Convert::ToInt32(T3->Text)); break;
							 case '4':T4->Text = Convert::ToString(Convert::ToInt32(T4->Text) - Convert::ToInt32(T4->Text)); break;
							 } break;
						 }
						
					}
					 ////////////////////////////////////////////////////////////////
					 if (mas[i] == 'm' && mas[i + 1] == 'o' && mas[i + 2] == 'v' && (i + 3<mas->Length) && mas[i + 3] == ' '&&mas[i + 5] == ',')
					 {
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
							 {
							 case '0':T0->Text = T0->Text; break;
							 case '1':T0->Text = T1->Text; break;
							 case '2':T0->Text = T2->Text; break;
							 case '3':T0->Text = T3->Text; break;
							 case '4':T0->Text = T4->Text; break;
							 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							 case '0':T1->Text = T0->Text; break;
							 case '1':T1->Text = T1->Text; break;
							 case '2':T1->Text = T2->Text; break;
							 case '3':T1->Text = T3->Text; break;
							 case '4':T1->Text = T4->Text; break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							 case '0':T2->Text = T0->Text; break;
							 case '1':T2->Text = T1->Text; break;
							 case '2':T2->Text = T2->Text; break;
							 case '3':T2->Text = T3->Text; break;
							 case '4':T2->Text = T4->Text; break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							 case '0':T3->Text = T0->Text; break;
							 case '1':T3->Text = T1->Text; break;
							 case '2':T3->Text = T2->Text; break;
							 case '3':T3->Text = T3->Text; break;
							 case '4':T3->Text = T4->Text; break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							 case '0':T4->Text = T0->Text; break;
							 case '1':T4->Text = T1->Text; break;
							 case '2':T4->Text = T2->Text; break;
							 case '3':T4->Text = T3->Text; break;
							 case '4':T4->Text = T4->Text; break;
							 } break;
						 }

					 }
					///////////////
					 if (mas[i] == 'c' && mas[i + 1] == 'm' && mas[i + 2] == 'p' && (i + 3<mas->Length) && mas[i + 3] == ' '&&mas[i + 5] == ',')
					 {
						 switch (mas[i + 4])
						 {
						 case '0':
							 switch (mas[i + 6])
							 {
							 case '0':if (Convert::ToInt32(T0->Text) > Convert::ToInt32(T0->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '1':if (Convert::ToInt32(T0->Text) > Convert::ToInt32(T1->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '2':if (Convert::ToInt32(T0->Text) > Convert::ToInt32(T2->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '3':if (Convert::ToInt32(T0->Text) > Convert::ToInt32(T3->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '4':if (Convert::ToInt32(T0->Text) > Convert::ToInt32(T4->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
									  
							 } break;
						 case '1':
							 switch (mas[i + 6])
							 {
							case '0':if (Convert::ToInt32(T1->Text) > Convert::ToInt32(T0->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '1':if (Convert::ToInt32(T1->Text) > Convert::ToInt32(T1->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '2':if (Convert::ToInt32(T1->Text) > Convert::ToInt32(T2->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '3':if (Convert::ToInt32(T1->Text) > Convert::ToInt32(T3->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '4':if (Convert::ToInt32(T1->Text) > Convert::ToInt32(T4->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 } break;
						 case '2':
							 switch (mas[i + 6])
							 {
							case '0':if (Convert::ToInt32(T2->Text) > Convert::ToInt32(T0->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '1':if (Convert::ToInt32(T2->Text) > Convert::ToInt32(T1->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '2':if (Convert::ToInt32(T2->Text) > Convert::ToInt32(T2->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '3':if (Convert::ToInt32(T2->Text) > Convert::ToInt32(T3->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '4':if (Convert::ToInt32(T2->Text) > Convert::ToInt32(T4->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 } break;
						 case '3':
							 switch (mas[i + 6])
							 {
							case '0':if (Convert::ToInt32(T3->Text) > Convert::ToInt32(T0->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '1':if (Convert::ToInt32(T3->Text) > Convert::ToInt32(T1->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '2':if (Convert::ToInt32(T3->Text) > Convert::ToInt32(T2->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '3':if (Convert::ToInt32(T3->Text) > Convert::ToInt32(T3->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '4':if (Convert::ToInt32(T3->Text) > Convert::ToInt32(T4->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 } break;
						 case '4':
							 switch (mas[i + 6])
							 {
							case '0':if (Convert::ToInt32(T4->Text) > Convert::ToInt32(T0->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '1':if (Convert::ToInt32(T4->Text) > Convert::ToInt32(T1->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '2':if (Convert::ToInt32(T4->Text) > Convert::ToInt32(T2->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '3':if (Convert::ToInt32(T4->Text) > Convert::ToInt32(T3->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 case '4':if (Convert::ToInt32(T4->Text) > Convert::ToInt32(T4->Text)){ GT->Text = Convert::ToString(1); }else GT->Text = Convert::ToString(0); break;
							 } break;
						 }

					 }
					 else continue;
				 }



				 textBox1->Text = gcnew String(mas);
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
