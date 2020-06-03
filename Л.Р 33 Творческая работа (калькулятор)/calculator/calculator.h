#include <iostream>
#include <math.h>
using namespace std;

namespace calculatorvanya {

	int vibor, a, b, r;
	float trig;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для calculator
	/// </summary>
	public ref class calculator : public System::Windows::Forms::Form
	{
	public:
		calculator(void)
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
		~calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"<";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 14);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 24);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &calculator::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(106, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"°";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 14);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(41, 24);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &calculator::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(175, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"\'";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 14);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(41, 24);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &calculator::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(242, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"\'\'";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(12, 49);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(253, 50);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &calculator::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 54);
			this->button1->TabIndex = 9;
			this->button1->Text = L"+";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->Location = System::Drawing::Point(74, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 54);
			this->button2->TabIndex = 10;
			this->button2->Text = L"-";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(149, 106);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 54);
			this->button3->TabIndex = 11;
			this->button3->Text = L"=";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(210, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 54);
			this->button4->TabIndex = 12;
			this->button4->Text = L"C";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(13, 166);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 54);
			this->button5->TabIndex = 13;
			this->button5->Text = L"sin";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(74, 166);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 54);
			this->button6->TabIndex = 14;
			this->button6->Text = L"cos";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(149, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 54);
			this->button7->TabIndex = 15;
			this->button7->Text = L"tg";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(210, 165);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 54);
			this->button8->TabIndex = 16;
			this->button8->Text = L"ctg";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(13, 226);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 54);
			this->button9->TabIndex = 17;
			this->button9->Text = L"asin";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(74, 226);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 54);
			this->button10->TabIndex = 18;
			this->button10->Text = L"acos";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &calculator::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(149, 226);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 54);
			this->button11->TabIndex = 19;
			this->button11->Text = L"atg";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &calculator::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(210, 226);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 54);
			this->button12->TabIndex = 20;
			this->button12->Text = L"actg";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &calculator::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(13, 284);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(116, 46);
			this->button13->TabIndex = 21;
			this->button13->Text = L"Ввод";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &calculator::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(149, 284);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(116, 46);
			this->button14->TabIndex = 22;
			this->button14->Text = L"Знак";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &calculator::button14_Click);
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 342);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"calculator";
			this->Text = L"Калькулятор углов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		if (textBox1->Text == "0")
		{
			textBox4->Text = textBox4->Text + "";
		}
		else
		{
			textBox4->Text = textBox4->Text + textBox1->Text + "гр";
		}

		if (textBox2->Text == "0")
		{
			textBox4->Text = textBox4->Text + "";
		}
		else
		{
			textBox4->Text = textBox4->Text + textBox2->Text + "'";
		}

		if (textBox3->Text == "0")
		{
			textBox4->Text = textBox4->Text + "";
		}
		else
		{
			textBox4->Text = textBox4->Text + textBox3->Text + "''";
		}
	}

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 10;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "arcctg ";
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 1;
		a = System::Convert::ToInt16(textBox1->Text) * 3600 + System::Convert::ToInt16(textBox2->Text) * 60 + System::Convert::ToInt16(textBox3->Text);
		textBox4->Text = textBox4->Text + " + ";
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		switch (vibor)
		{
		case 1:
			b = System::Convert::ToInt16(textBox1->Text) * 3600 + System::Convert::ToInt16(textBox2->Text) * 60 + System::Convert::ToInt16(textBox3->Text);
			r = a + b;
			textBox4->Text = System::Convert::ToString(r / 3600) + "гр";
			r = r - r / 3600 * 3600;
			textBox4->Text = textBox4->Text + System::Convert::ToString(r / 60) + "'";
			r = r - r / 60 * 60;
			textBox4->Text = textBox4->Text + System::Convert::ToString(r) + "''";
			break;
		case 2:
			b = System::Convert::ToInt16(textBox1->Text) * 3600 + System::Convert::ToInt16(textBox2->Text) * 60 + System::Convert::ToInt16(textBox3->Text);
			r = a - b;
			textBox4->Text = System::Convert::ToString(r / 3600) + "гр";
			r = r - r / 3600 * 3600;
			textBox4->Text = textBox4->Text + System::Convert::ToString(r / 60) + "'";
			r = r - r / 60 * 60;
			textBox4->Text = textBox4->Text + System::Convert::ToString(r) + "''";
			break;
		case 3:
			trig = sin(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 4:
			trig = cos(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 5:
			trig = tan(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 6:
			trig = cos(a) / sin(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 7:
			trig = asin(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 8:
			trig = acos(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 9:
			trig = atan(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		case 10:
			trig = acos(a) / asin(a);
			textBox4->Text = System::Convert::ToString(trig);
			break;
		}
	}
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 2;
		a = System::Convert::ToInt16(textBox1->Text) * 3600 + System::Convert::ToInt16(textBox2->Text) * 60 + System::Convert::ToInt16(textBox3->Text);
		textBox4->Text = textBox4->Text + " - ";
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 3;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "sin ";
	}
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 4;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "cos ";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 5;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "tg ";
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 6;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "ctg ";
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 7;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "arcsin ";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 8;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "arccos ";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		vibor = 9;
		a = System::Convert::ToInt16(textBox1->Text);
		textBox4->Text = "arctg ";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "")
	{
		textBox4->Text = "Error! Press C";
	}
	else if (textBox1->Text[0] == '-' || textBox2->Text[0] == '-' || textBox3->Text[0] == '-')
	{
		textBox4->Text = "Error! Press C";
	}
	else
	{
		a = System::Convert::ToInt16(textBox1->Text) * 3600 + System::Convert::ToInt16(textBox2->Text) * 60 + System::Convert::ToInt16(textBox3->Text);
	}
	b = 360 * 3600;
	r = b - a;
	textBox4->Text = System::Convert::ToString(r / 3600) + "гр";
	r = r - r / 3600 * 3600;
	textBox4->Text = textBox4->Text + System::Convert::ToString(r / 60) + "'";
	r = r - r / 60 * 60;
	textBox4->Text = textBox4->Text + System::Convert::ToString(r) + "''";
}
};
}