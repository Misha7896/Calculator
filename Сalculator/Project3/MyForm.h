#pragma once

namespace Project3 {

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
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_mult;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ bnt_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_dot;


	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;

	private: float first_num;
	private: char user_action;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->bnt_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::Control;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(30, 30);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(20, 30);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(278, 53);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(20, 96);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 65);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(91, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(162, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 65);
			this->button3->TabIndex = 4;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->Location = System::Drawing::Point(233, 96);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(65, 65);
			this->btn_divide->TabIndex = 5;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(233, 169);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(65, 65);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(162, 169);
			this->button6->Name = L"button6";
			this->button6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button6->Size = System::Drawing::Size(65, 65);
			this->button6->TabIndex = 8;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(91, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 65);
			this->button7->TabIndex = 7;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(20, 169);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 6;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// bnt_minus
			// 
			this->bnt_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->bnt_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bnt_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bnt_minus->Location = System::Drawing::Point(233, 240);
			this->bnt_minus->Name = L"bnt_minus";
			this->bnt_minus->Size = System::Drawing::Size(65, 65);
			this->bnt_minus->TabIndex = 13;
			this->bnt_minus->Text = L"-";
			this->bnt_minus->UseVisualStyleBackColor = false;
			this->bnt_minus->Click += gcnew System::EventHandler(this, &MyForm::bnt_minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(162, 240);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 65);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(91, 240);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 65);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(20, 240);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 65);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->Location = System::Drawing::Point(233, 382);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 65);
			this->btn_equal->TabIndex = 21;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->Location = System::Drawing::Point(162, 382);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 65);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = true;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::Control;
			this->button16->Location = System::Drawing::Point(20, 382);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(136, 65);
			this->button16->TabIndex = 18;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(233, 311);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 65);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::Control;
			this->button18->Location = System::Drawing::Point(162, 311);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(65, 65);
			this->button18->TabIndex = 16;
			this->button18->Text = L"9";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::Control;
			this->button19->Location = System::Drawing::Point(91, 311);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(65, 65);
			this->button19->TabIndex = 15;
			this->button19->Text = L"8";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(95)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::Control;
			this->button20->Location = System::Drawing::Point(20, 311);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(65, 65);
			this->button20->TabIndex = 14;
			this->button20->Text = L"7";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::btnNumder_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(318, 468);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->bnt_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Моя скотина";
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnNumder_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		this->result_label->ForeColor = Color::White;

		if(this->result_label->Text == "0")
			this->result_label->Text = button->Text;
		else
			this->result_label->Text = this->result_label->Text + button->Text;

	}
	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');

	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');

	}
	private: System::Void bnt_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');

	}
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');

	}

	 private: System::Void math_action(char action) {
		 this->first_num = System::Convert::ToDouble(this->result_label->Text);
		 this->user_action = action;
		 this->result_label->Text = "0";
	 }
private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	float second_num = System::Convert::ToDouble(this->result_label->Text);
	float res;
	switch (this->user_action) {
	case '/':
		if(second_num == 0)
		{
			res = 0;
			this->result_label->ForeColor = Color::DarkRed;
			MessageBox::Show(this, "Действие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->first_num / second_num;
		break;
	case '*': res = this->first_num * second_num; break;
	case '-': res = this->first_num - second_num; break;
	case '+': res = this->first_num + second_num; break;
	}
	this->result_label->Text = System::Convert::ToString(res);
}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->result_label->Text->Contains(","))
			this->result_label->Text = this->result_label->Text + ",";
	}
};
}
