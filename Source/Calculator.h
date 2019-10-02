#pragma once
#include<string>
#include<cmath>
#include<bitset>
#include "Operations.h"
#include "Variables.h"
#include "msclr\marshal_cppstd.h"



namespace Coursework {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RichTextBoxAlign();
		}
		
		


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonEquals;
	private: System::Windows::Forms::Button^  buttonMinus;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  buttonMultiply;
	private: System::Windows::Forms::Button^  buttonDivide;
	private: System::Windows::Forms::Button^  buttonModulus;
	private: System::Windows::Forms::Button^  buttonPlusMinus;
	private: System::Windows::Forms::Button^  buttonBackSpace;
	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::Button^  buttonDecimal;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  buttonOpenBracket;
	private: System::Windows::Forms::Button^  buttonCloseBracket;
	private: System::Windows::Forms::Button^  buttonDecimalConvert;
	private: System::Windows::Forms::Button^  buttonBinaryConvert;
	private: System::Windows::Forms::Button^  buttonOctalConvert;
	private: System::Windows::Forms::Button^  buttonHexadecimalConvert;
	private: System::Windows::Forms::Button^  buttonA;
	private: System::Windows::Forms::Button^  buttonB;
	private: System::Windows::Forms::Button^  buttonC;
	private: System::Windows::Forms::Button^  buttonD;
	private: System::Windows::Forms::Button^  buttonE;
	private: System::Windows::Forms::Button^  buttonF;
	private: System::Windows::Forms::Button^  buttonOR;
	private: System::Windows::Forms::Button^  buttonXOR;
	private: System::Windows::Forms::Button^  buttonAND;
	private: System::Windows::Forms::Button^  buttonNOT;
	private: System::Windows::Forms::Button^  button11;








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

		void RichTextBoxAlign()
		{
			richTextBox1->SelectionAlignment = HorizontalAlignment::Right;

		}

		
		


		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonModulus = (gcnew System::Windows::Forms::Button());
			this->buttonPlusMinus = (gcnew System::Windows::Forms::Button());
			this->buttonBackSpace = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonOpenBracket = (gcnew System::Windows::Forms::Button());
			this->buttonCloseBracket = (gcnew System::Windows::Forms::Button());
			this->buttonDecimalConvert = (gcnew System::Windows::Forms::Button());
			this->buttonBinaryConvert = (gcnew System::Windows::Forms::Button());
			this->buttonOctalConvert = (gcnew System::Windows::Forms::Button());
			this->buttonHexadecimalConvert = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonOR = (gcnew System::Windows::Forms::Button());
			this->buttonXOR = (gcnew System::Windows::Forms::Button());
			this->buttonAND = (gcnew System::Windows::Forms::Button());
			this->buttonNOT = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(330, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 71);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Lime;
			this->button2->Location = System::Drawing::Point(430, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 71);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::White;
			this->buttonAdd->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonAdd->Location = System::Drawing::Point(838, 137);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 71);
			this->buttonAdd->TabIndex = 3;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Calculator::buttonAdd_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->BackColor = System::Drawing::Color::White;
			this->buttonEquals->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonEquals->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonEquals->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonEquals->ForeColor = System::Drawing::Color::Black;
			this->buttonEquals->Location = System::Drawing::Point(640, 434);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(172, 71);
			this->buttonEquals->TabIndex = 4;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = false;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &Calculator::buttonEquals_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::White;
			this->buttonMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonMinus->Location = System::Drawing::Point(940, 137);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(75, 71);
			this->buttonMinus->TabIndex = 5;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &Calculator::buttonMinus_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Lime;
			this->button3->Location = System::Drawing::Point(535, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 71);
			this->button3->TabIndex = 6;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Lime;
			this->button4->Location = System::Drawing::Point(330, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 71);
			this->button4->TabIndex = 7;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(430, 238);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 71);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Lime;
			this->button6->Location = System::Drawing::Point(535, 238);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(75, 71);
			this->button6->TabIndex = 9;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Lime;
			this->button7->Location = System::Drawing::Point(330, 334);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 71);
			this->button7->TabIndex = 10;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Lime;
			this->button8->Location = System::Drawing::Point(430, 334);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 71);
			this->button8->TabIndex = 11;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Lime;
			this->button9->Location = System::Drawing::Point(535, 334);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 71);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Lime;
			this->button10->Location = System::Drawing::Point(430, 434);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 71);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::White;
			this->buttonMultiply->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonMultiply->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonMultiply->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonMultiply->Location = System::Drawing::Point(940, 238);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(75, 71);
			this->buttonMultiply->TabIndex = 14;
			this->buttonMultiply->Text = L"×";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &Calculator::buttonMultiply_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::Color::White;
			this->buttonDivide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonDivide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonDivide->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonDivide->Location = System::Drawing::Point(838, 238);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(75, 71);
			this->buttonDivide->TabIndex = 15;
			this->buttonDivide->Text = L"÷";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &Calculator::buttonDivide_Click);
			// 
			// buttonModulus
			// 
			this->buttonModulus->BackColor = System::Drawing::Color::White;
			this->buttonModulus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonModulus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonModulus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonModulus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModulus->Location = System::Drawing::Point(737, 238);
			this->buttonModulus->Name = L"buttonModulus";
			this->buttonModulus->Size = System::Drawing::Size(75, 71);
			this->buttonModulus->TabIndex = 17;
			this->buttonModulus->Text = L"Mod";
			this->buttonModulus->UseVisualStyleBackColor = false;
			this->buttonModulus->Click += gcnew System::EventHandler(this, &Calculator::buttonModulus_Click);
			// 
			// buttonPlusMinus
			// 
			this->buttonPlusMinus->BackColor = System::Drawing::Color::White;
			this->buttonPlusMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonPlusMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonPlusMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonPlusMinus->ForeColor = System::Drawing::Color::Black;
			this->buttonPlusMinus->Location = System::Drawing::Point(737, 334);
			this->buttonPlusMinus->Name = L"buttonPlusMinus";
			this->buttonPlusMinus->Size = System::Drawing::Size(75, 71);
			this->buttonPlusMinus->TabIndex = 16;
			this->buttonPlusMinus->Text = L"+/-";
			this->buttonPlusMinus->UseVisualStyleBackColor = false;
			this->buttonPlusMinus->Click += gcnew System::EventHandler(this, &Calculator::buttonPlusMinus_Click);
			// 
			// buttonBackSpace
			// 
			this->buttonBackSpace->BackColor = System::Drawing::Color::White;
			this->buttonBackSpace->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonBackSpace->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonBackSpace->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonBackSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonBackSpace->ForeColor = System::Drawing::Color::Indigo;
			this->buttonBackSpace->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonBackSpace->Location = System::Drawing::Point(640, 238);
			this->buttonBackSpace->Name = L"buttonBackSpace";
			this->buttonBackSpace->Size = System::Drawing::Size(75, 71);
			this->buttonBackSpace->TabIndex = 18;
			this->buttonBackSpace->Text = L" ⬅";
			this->buttonBackSpace->UseVisualStyleBackColor = false;
			this->buttonBackSpace->Click += gcnew System::EventHandler(this, &Calculator::buttonBackSpace_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::White;
			this->buttonClear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->buttonClear->ForeColor = System::Drawing::Color::Indigo;
			this->buttonClear->Location = System::Drawing::Point(640, 137);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(172, 71);
			this->buttonClear->TabIndex = 19;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Calculator::buttonClear_Click);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->BackColor = System::Drawing::Color::White;
			this->buttonDecimal->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonDecimal->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonDecimal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->buttonDecimal->ForeColor = System::Drawing::Color::Black;
			this->buttonDecimal->Location = System::Drawing::Point(640, 334);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->Size = System::Drawing::Size(75, 71);
			this->buttonDecimal->TabIndex = 20;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = false;
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &Calculator::buttonDecimal_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Lime;
			this->richTextBox1->Location = System::Drawing::Point(31, 12);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(984, 96);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// buttonOpenBracket
			// 
			this->buttonOpenBracket->BackColor = System::Drawing::Color::White;
			this->buttonOpenBracket->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonOpenBracket->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonOpenBracket->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonOpenBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOpenBracket->ForeColor = System::Drawing::Color::Black;
			this->buttonOpenBracket->Location = System::Drawing::Point(330, 434);
			this->buttonOpenBracket->Name = L"buttonOpenBracket";
			this->buttonOpenBracket->Size = System::Drawing::Size(75, 71);
			this->buttonOpenBracket->TabIndex = 21;
			this->buttonOpenBracket->Text = L"(";
			this->buttonOpenBracket->UseVisualStyleBackColor = false;
			this->buttonOpenBracket->Click += gcnew System::EventHandler(this, &Calculator::buttonOpenBracket_Click);
			// 
			// buttonCloseBracket
			// 
			this->buttonCloseBracket->BackColor = System::Drawing::Color::White;
			this->buttonCloseBracket->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonCloseBracket->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonCloseBracket->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonCloseBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCloseBracket->ForeColor = System::Drawing::Color::Black;
			this->buttonCloseBracket->Location = System::Drawing::Point(535, 434);
			this->buttonCloseBracket->Name = L"buttonCloseBracket";
			this->buttonCloseBracket->Size = System::Drawing::Size(75, 71);
			this->buttonCloseBracket->TabIndex = 22;
			this->buttonCloseBracket->Text = L")";
			this->buttonCloseBracket->UseVisualStyleBackColor = false;
			this->buttonCloseBracket->Click += gcnew System::EventHandler(this, &Calculator::buttonCloseBracket_Click);
			// 
			// buttonDecimalConvert
			// 
			this->buttonDecimalConvert->BackColor = System::Drawing::Color::Black;
			this->buttonDecimalConvert->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonDecimalConvert->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonDecimalConvert->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonDecimalConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonDecimalConvert->ForeColor = System::Drawing::Color::Aqua;
			this->buttonDecimalConvert->Location = System::Drawing::Point(838, 334);
			this->buttonDecimalConvert->Name = L"buttonDecimalConvert";
			this->buttonDecimalConvert->Size = System::Drawing::Size(75, 71);
			this->buttonDecimalConvert->TabIndex = 23;
			this->buttonDecimalConvert->Text = L"Dec";
			this->buttonDecimalConvert->UseVisualStyleBackColor = false;
			this->buttonDecimalConvert->Click += gcnew System::EventHandler(this, &Calculator::buttonDecimalConvert_Click);
			// 
			// buttonBinaryConvert
			// 
			this->buttonBinaryConvert->BackColor = System::Drawing::Color::Black;
			this->buttonBinaryConvert->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonBinaryConvert->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonBinaryConvert->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonBinaryConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBinaryConvert->ForeColor = System::Drawing::Color::Aqua;
			this->buttonBinaryConvert->Location = System::Drawing::Point(940, 334);
			this->buttonBinaryConvert->Name = L"buttonBinaryConvert";
			this->buttonBinaryConvert->Size = System::Drawing::Size(75, 71);
			this->buttonBinaryConvert->TabIndex = 24;
			this->buttonBinaryConvert->Text = L"Bin";
			this->buttonBinaryConvert->UseVisualStyleBackColor = false;
			this->buttonBinaryConvert->Click += gcnew System::EventHandler(this, &Calculator::buttonBinaryConvert_Click);
			// 
			// buttonOctalConvert
			// 
			this->buttonOctalConvert->BackColor = System::Drawing::Color::Black;
			this->buttonOctalConvert->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonOctalConvert->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonOctalConvert->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonOctalConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOctalConvert->ForeColor = System::Drawing::Color::Aqua;
			this->buttonOctalConvert->Location = System::Drawing::Point(838, 434);
			this->buttonOctalConvert->Name = L"buttonOctalConvert";
			this->buttonOctalConvert->Size = System::Drawing::Size(75, 71);
			this->buttonOctalConvert->TabIndex = 25;
			this->buttonOctalConvert->Text = L"Oct";
			this->buttonOctalConvert->UseVisualStyleBackColor = false;
			this->buttonOctalConvert->Click += gcnew System::EventHandler(this, &Calculator::buttonOctalConvert_Click);
			// 
			// buttonHexadecimalConvert
			// 
			this->buttonHexadecimalConvert->BackColor = System::Drawing::Color::Black;
			this->buttonHexadecimalConvert->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->buttonHexadecimalConvert->FlatAppearance->BorderSize = 0;
			this->buttonHexadecimalConvert->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Aqua;
			this->buttonHexadecimalConvert->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonHexadecimalConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonHexadecimalConvert->ForeColor = System::Drawing::Color::Aqua;
			this->buttonHexadecimalConvert->Location = System::Drawing::Point(940, 434);
			this->buttonHexadecimalConvert->Name = L"buttonHexadecimalConvert";
			this->buttonHexadecimalConvert->Size = System::Drawing::Size(75, 71);
			this->buttonHexadecimalConvert->TabIndex = 26;
			this->buttonHexadecimalConvert->Text = L"Hex";
			this->buttonHexadecimalConvert->UseVisualStyleBackColor = false;
			this->buttonHexadecimalConvert->Click += gcnew System::EventHandler(this, &Calculator::buttonHexadecimalConvert_Click);
			// 
			// buttonA
			// 
			this->buttonA->BackColor = System::Drawing::Color::Black;
			this->buttonA->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->buttonA->FlatAppearance->BorderSize = 500;
			this->buttonA->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->buttonA->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA->ForeColor = System::Drawing::Color::White;
			this->buttonA->Location = System::Drawing::Point(131, 137);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(75, 71);
			this->buttonA->TabIndex = 27;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->Click += gcnew System::EventHandler(this, &Calculator::buttonA_Click);
			// 
			// buttonB
			// 
			this->buttonB->BackColor = System::Drawing::Color::Black;
			this->buttonB->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB->ForeColor = System::Drawing::Color::White;
			this->buttonB->Location = System::Drawing::Point(227, 137);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(75, 71);
			this->buttonB->TabIndex = 28;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->Click += gcnew System::EventHandler(this, &Calculator::buttonB_Click);
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::Black;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->ForeColor = System::Drawing::Color::White;
			this->buttonC->Location = System::Drawing::Point(131, 238);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(75, 71);
			this->buttonC->TabIndex = 29;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &Calculator::buttonC_Click);
			// 
			// buttonD
			// 
			this->buttonD->BackColor = System::Drawing::Color::Black;
			this->buttonD->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonD->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonD->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonD->ForeColor = System::Drawing::Color::White;
			this->buttonD->Location = System::Drawing::Point(227, 238);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(75, 71);
			this->buttonD->TabIndex = 30;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->Click += gcnew System::EventHandler(this, &Calculator::buttonD_Click);
			// 
			// buttonE
			// 
			this->buttonE->BackColor = System::Drawing::Color::Black;
			this->buttonE->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonE->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonE->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonE->ForeColor = System::Drawing::Color::White;
			this->buttonE->Location = System::Drawing::Point(131, 334);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(75, 71);
			this->buttonE->TabIndex = 31;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = false;
			this->buttonE->Click += gcnew System::EventHandler(this, &Calculator::buttonE_Click);
			// 
			// buttonF
			// 
			this->buttonF->BackColor = System::Drawing::Color::Black;
			this->buttonF->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonF->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonF->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonF->ForeColor = System::Drawing::Color::White;
			this->buttonF->Location = System::Drawing::Point(227, 334);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(75, 71);
			this->buttonF->TabIndex = 32;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = false;
			this->buttonF->Click += gcnew System::EventHandler(this, &Calculator::buttonF_Click);
			// 
			// buttonOR
			// 
			this->buttonOR->BackColor = System::Drawing::Color::Black;
			this->buttonOR->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonOR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonOR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOR->ForeColor = System::Drawing::Color::Red;
			this->buttonOR->Location = System::Drawing::Point(31, 334);
			this->buttonOR->Name = L"buttonOR";
			this->buttonOR->Size = System::Drawing::Size(75, 71);
			this->buttonOR->TabIndex = 33;
			this->buttonOR->Text = L"OR";
			this->buttonOR->UseVisualStyleBackColor = false;
			this->buttonOR->Click += gcnew System::EventHandler(this, &Calculator::buttonOR_Click);
			// 
			// buttonXOR
			// 
			this->buttonXOR->BackColor = System::Drawing::Color::Black;
			this->buttonXOR->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonXOR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonXOR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonXOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonXOR->ForeColor = System::Drawing::Color::Red;
			this->buttonXOR->Location = System::Drawing::Point(31, 434);
			this->buttonXOR->Name = L"buttonXOR";
			this->buttonXOR->Size = System::Drawing::Size(75, 71);
			this->buttonXOR->TabIndex = 34;
			this->buttonXOR->Text = L"XOR";
			this->buttonXOR->UseVisualStyleBackColor = false;
			this->buttonXOR->Click += gcnew System::EventHandler(this, &Calculator::buttonXOR_Click);
			// 
			// buttonAND
			// 
			this->buttonAND->BackColor = System::Drawing::Color::Black;
			this->buttonAND->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonAND->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonAND->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonAND->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAND->ForeColor = System::Drawing::Color::Red;
			this->buttonAND->Location = System::Drawing::Point(31, 137);
			this->buttonAND->Name = L"buttonAND";
			this->buttonAND->Size = System::Drawing::Size(75, 71);
			this->buttonAND->TabIndex = 35;
			this->buttonAND->Text = L"AND";
			this->buttonAND->UseVisualStyleBackColor = false;
			this->buttonAND->Click += gcnew System::EventHandler(this, &Calculator::buttonAND_Click);
			// 
			// buttonNOT
			// 
			this->buttonNOT->BackColor = System::Drawing::Color::Black;
			this->buttonNOT->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonNOT->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->buttonNOT->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->buttonNOT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNOT->ForeColor = System::Drawing::Color::Red;
			this->buttonNOT->Location = System::Drawing::Point(31, 238);
			this->buttonNOT->Name = L"buttonNOT";
			this->buttonNOT->Size = System::Drawing::Size(75, 71);
			this->buttonNOT->TabIndex = 36;
			this->buttonNOT->Text = L"NOT";
			this->buttonNOT->UseVisualStyleBackColor = false;
			this->buttonNOT->Click += gcnew System::EventHandler(this, &Calculator::buttonNOT_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(131, 434);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(172, 71);
			this->button11->TabIndex = 37;
			this->button11->Text = L"BOOL =";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1048, 538);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->buttonNOT);
			this->Controls->Add(this->buttonAND);
			this->Controls->Add(this->buttonXOR);
			this->Controls->Add(this->buttonOR);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonHexadecimalConvert);
			this->Controls->Add(this->buttonOctalConvert);
			this->Controls->Add(this->buttonBinaryConvert);
			this->Controls->Add(this->buttonDecimalConvert);
			this->Controls->Add(this->buttonCloseBracket);
			this->Controls->Add(this->buttonOpenBracket);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonBackSpace);
			this->Controls->Add(this->buttonModulus);
			this->Controls->Add(this->buttonPlusMinus);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
		String^ input = "";
		Char operation;
		Char logicalOperation;
		double num1;
		double num2;
		unsigned int bit1;
		unsigned int bit2;
		float result;
		bool NOT = false;
		bool AND = false;
		bool OR = false;
		bool XOR = false;
		

		
		

	


#pragma endregion;



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{

		richTextBox1->Text = input += "1";


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "2";

	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "3";

	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "4";

	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "5";

	}


	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "6";

	}


	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "7";

	}


	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "8";

	}


	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "9";

	}


	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = input += "0";

	}


	private: System::Void buttonA_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "A"; 
		input += 0xA;

	}


	private: System::Void buttonB_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "B";
		input += 0xB;
	}


	private: System::Void buttonC_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "C";
		input += 0xC;
	}


	private: System::Void buttonD_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "D";
		input += 0xD;
	}


	private: System::Void buttonE_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "E";
		input += 0xE;
	}


	private: System::Void buttonF_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text += "F";
		input += 0xF;
	}


	private: System::Void buttonDecimal_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!richTextBox1->Text->Contains("."))
		{
			richTextBox1->Text = input += ".";
		}
	}


	private: System::Void buttonOpenBracket_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!richTextBox1->Text->Contains("("))
		{
			richTextBox1->Text += "(";
		}
		
	}


	private: System::Void buttonCloseBracket_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!richTextBox1->Text->Contains(")"))
		{
			richTextBox1->Text += ")";
		}
		
	}


	private: System::Void buttonBackSpace_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = richTextBox1->Text->Remove(richTextBox1->Text->Length - 1);
		input = richTextBox1->Text;

	}


	private: System::Void buttonPlusMinus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double originalValue;
		double negativeValue;
		originalValue = Convert::ToDouble(richTextBox1->Text);
		negativeValue = originalValue  * -1;
		input = Convert::ToString(negativeValue);
		richTextBox1->Text = input;

	}


	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Clear();
		input = richTextBox1->Text;
		//bitResultAND = " ";
		//bitResultNOT = " ";
		//bitResultOR = " ";
		//bitResultXOR = " ";
		AND = false;
		NOT = false;
		OR = false;
		XOR = false;
	}


	private: System::Void buttonDecimalConvert_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		
		if (input->Length == 8)
		{
			long factor = 1;
			long total = 0;
			long dec = System::Convert::ToUInt64(input);

			while (dec != 0)
			{
				total += (dec % 10) * factor;
				dec /= 10;
				factor *= 2;
			}
			input = Convert::ToString(total);
			richTextBox1->Text = input;
		}
		else
		{
			int dec = int::Parse(input);
			input = System::Convert::ToString(dec);
			richTextBox1->Text = input;
		}

	}


	private: System::Void buttonBinaryConvert_Click(System::Object^  sender, System::EventArgs^  e)
	{

		long factor = 1;
		long total = 0;
		long bin = System::Convert::ToUInt64(input);

		while (bin != 0)
		{
			total += (bin % 2) * factor;
			bin /= 2;
			factor *= 10;
		}
		input = Convert::ToString(total);
		richTextBox1->Text = input;


	}


	private: System::Void buttonOctalConvert_Click(System::Object^  sender, System::EventArgs^  e)
	{

		long factor = 1;
		long total = 0;
		long oct = System::Convert::ToUInt64(input);

		while (oct != 0)
		{
			total += (oct % 8) * factor;
			oct /= 8;
			factor *= 10;
		}
		input = Convert::ToString(total);
		richTextBox1->Text = input;
	}


	private: System::Void buttonHexadecimalConvert_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int hex = int::Parse(input);
		input = System::Convert::ToString(hex, 16);
		richTextBox1->Text = input;

	}


	private: System::Void buttonAND_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		bitStringAND1 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
		richTextBox1->Text = input = "";
		AND = true;
		NOT = false;
		OR = false;
		XOR = false;
	}

	private: System::Void buttonNOT_Click(System::Object^  sender, System::EventArgs^  e)
	{
		/*LogicalOperations logicalOp = LogicalOperations(bit1, bit2);
		bit1 = Convert::ToUInt64(richTextBox1->Text);
		result = logicalOp.NOT();
		richTextBox1->Text = Convert::ToString(result);
		*/
		
		bitStringNOT = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
		NOT = true;
		AND = false;
		OR = false;
		XOR = false;

		/*
	    Char oneChar = '1';
		Char zeroChar = '0';
		if (richTextBox1->Text->Contains("0") || richTextBox1->Text->Contains("1"))
		{
	
		richTextBox1->Text = richTextBox1->Text->Replace('1', '0');
		richTextBox1->Text = input;
		richTextBox1->Text = richTextBox1->Text->Replace('0', '1');
		
		}*/
	}


	private: System::Void buttonOR_Click(System::Object^  sender, System::EventArgs^  e)
	{
		

		bitStringOR1 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
		richTextBox1->Text = input = "";
		OR = true;
		NOT = false;
		AND = false;
		XOR = false;
	
	}


	private: System::Void buttonXOR_Click(System::Object^  sender, System::EventArgs^  e)
	{
		

		bitStringXOR1 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
		richTextBox1->Text = input = "";
		XOR = true;
		NOT = false;
		AND = false;
		OR = false;

	}



	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1 = Convert::ToDouble(input);
		//Save the user input to the variable num1
		richTextBox1->Text = input = "";
		//Clear the calculator screen
		operation = '+';
		//Assign the + symbol to the operation variable 
	}

	private: System::Void buttonMinus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1 = Convert::ToDouble(input);
		//Save the user input to the variable num1
		richTextBox1->Text = input = "";
		//Clear the calculator screen
		operation = '-';
		//Assign the - symbol to the operation variable 
	}

	private: System::Void buttonMultiply_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1 = Convert::ToDouble(input);
		//Save the user input to the variable num1
		richTextBox1->Text = input = "";
		//Clear the calculator screen
		operation = '*';
		//Assign the * symbol to the operation variable 
	}

	private: System::Void buttonDivide_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1 = Convert::ToDouble(input);
		//Save the user input to the variable num1
		richTextBox1->Text = input = "";
		//Clear the calculator screen
		operation = '/';
		//Assign the / symbol to the operation variable 
	}

	private: System::Void buttonModulus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num1 = Convert::ToDouble(input);
		//Save the user input to the variable num1
		richTextBox1->Text = input = "";
		//Clear the calculator screen
		operation = '%';
		//Assign the % symbol to the operation variable 


	}


	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		if (AND)
		{
			bitset<8> bit2(bitStringAND1);
			bitStringAND2 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
			bitset<8> bit3(bitStringAND2);
			bit2 = (bit2 &= bit3);
			bitResultAND = bit2.to_string();
			input = msclr::interop::marshal_as<String^>(bitResultAND);
			richTextBox1->Text = input;


		}

		if (NOT)	
		{						
			bitset<8> bit1(bitStringNOT);
			bit1 = ~bit1;
			bitResultNOT = bit1.to_string();
			input = msclr::interop::marshal_as<String^>(bitResultNOT);
			richTextBox1->Text = input;
			
			
		} 


		if (OR)
		{
			bitset<8> bit4(bitStringOR1);
			bitStringOR2 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
			bitset<8> bit5(bitStringOR2);
			bit4 = (bit4 |= bit5);
			bitResultOR = bit4.to_string();
			input = msclr::interop::marshal_as<String^>(bitResultOR);
			richTextBox1->Text = input;
			
		}

		if (XOR)
		{
			bitset<8> bit6(bitStringXOR1);
			bitStringXOR2 = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
			bitset<8> bit7(bitStringXOR2);
			bit6 = (bit6 ^= bit7);
			bitResultXOR = bit6.to_string();
			input = msclr::interop::marshal_as<String^>(bitResultXOR);
			richTextBox1->Text = input;
		}

		
		
	}

	private: System::Void buttonEquals_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num2 = Convert::ToDouble(input);
		//Save user input to variable num2
		Operations op = Operations(num1, num2);
		//Create an instance of the operations class using variables num1 and num2
		input = "";
		//Create a switch case using the operation variable to decide which method to perform 
		switch (operation)
		{
		case '+':
			result = op.add();
			//Perform the add method
			richTextBox1->Text = Convert::ToString(result);
			//Convert result to string 
			input += richTextBox1->Text;
			//Add to input String^ so another operation can be performed 
			break;


		case '-':
			result = op.minus();
			//Perform minus method
			richTextBox1->Text = Convert::ToString(result);
			//Convert result to string
			input += richTextBox1->Text;
			//Add to input String^ so another operation can be performed 
			break;

		case '*':
			result = op.multiply();
			//Perform multiply method
			richTextBox1->Text = Convert::ToString(result);
			//Convert result to string
			input += richTextBox1->Text;
			//Add to input String^ so another operation can be performed 
			break;

		case '/':
			result = op.divide();
			//Perform divide method
			richTextBox1->Text = Convert::ToString(result);
			//Convert result to string
			input += richTextBox1->Text;
			//Add to input String^ so another operation can be performed 
			break;

		case'%':
			result = op.modulus();
			//Perform modulus method
			richTextBox1->Text = Convert::ToString(result);
			//Convert result to string
			input += richTextBox1->Text;
			//Add to input String^ so another operation can be performed 
			break;
		}
	}

































	};
}
