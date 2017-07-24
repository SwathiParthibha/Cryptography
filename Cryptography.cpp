#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <new>
#include <vector>
#include <cmath>
#include <fstream>
#include <ios>
#include <msclr\marshal_cppstd.h>

using namespace std;

void encrypt(string, string);
string decrypt(string);

#pragma once

namespace WinFormEncryptTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cryptography
	/// </summary>
	public ref class Cryptography : public System::Windows::Forms::Form
	{
	public:
		Cryptography(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Cryptography()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textbox1;
	private: System::Windows::Forms::TextBox^  textbox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textbox3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;

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
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->textbox1 = (gcnew System::Windows::Forms::TextBox());
				 this->textbox2 = (gcnew System::Windows::Forms::TextBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->textbox3 = (gcnew System::Windows::Forms::TextBox());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->panel1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(12, 128);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(472, 77);
				 this->button2->TabIndex = 7;
				 this->button2->Text = L"Decrypt Message";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Cryptography::button2_Click);
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(12, 45);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(472, 77);
				 this->button1->TabIndex = 6;
				 this->button1->Text = L"Encrypt Message";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Cryptography::button1_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(13, 21);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(143, 13);
				 this->label1->TabIndex = 5;
				 this->label1->Text = L"Welcome to the cryptography program";
				 // 
				 // panel1
				 // 
				 this->panel1->Controls->Add(this->button4);
				 this->panel1->Controls->Add(this->button3);
				 this->panel1->Controls->Add(this->textbox1);
				 this->panel1->Controls->Add(this->textbox2);
				 this->panel1->Controls->Add(this->label3);
				 this->panel1->Controls->Add(this->label5);
				 this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->panel1->Location = System::Drawing::Point(0, 0);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(496, 217);
				 this->panel1->TabIndex = 10;
				 this->panel1->Visible = false;
				 //
				 // label3
				 //
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(13, 21);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(143, 13);
				 this->label3->TabIndex = 5;
				 this->label3->Text = L"Enter a message to encrypt";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(13, 125);
				 this->label5->Name = L"label3";
				 this->label5->Size = System::Drawing::Size(143, 13);
				 this->label5->TabIndex = 5;
				 this->label5->Text = L"Enter the encrypted file name";
				 //
				 // textbox1
				 //
				 this->textbox1->Location = System::Drawing::Point(12, 45);
				 this->textbox1->Size = System::Drawing::Size(472, 71);
				 this->textbox1->Multiline = true;
				 this->textbox1->WordWrap = true;
				 //
				 // textbox2
				 //
				 this->textbox2->Location = System::Drawing::Point(12, 149);
				 this->textbox2->Size = System::Drawing::Size(472, 0);
				 this->textbox2->Multiline = false;
				 this->textbox2->WordWrap = true;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(13, 21);
				 this->label2->Name = L"label2";
				 this->label2->Text = L"Enter the name of the encrypted file";
				 this->label2->Size = System::Drawing::Size(143, 13);
				 this->label2->TabIndex = 5;
				 // 
				 // button4
				 // 
				 this->button4->Location = System::Drawing::Point(12, 182);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(75, 23);
				 this->button4->TabIndex = 1;
				 this->button4->Text = L"Back";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &Cryptography::button4_Click);
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(409, 182);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(75, 23);
				 this->button3->TabIndex = 0;
				 this->button3->Text = L"Encrypt";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Cryptography::button3_Click);
				 // 
				 // panel2
				 // 
				 this->panel2->Controls->Add(this->textbox3);
				 this->panel2->Controls->Add(this->button6);
				 this->panel2->Controls->Add(this->button5);
				 this->panel2->Controls->Add(this->label2);
				 this->panel2->Controls->Add(this->label4);
				 this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->panel2->Location = System::Drawing::Point(0, 0);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(496, 217);
				 this->panel2->TabIndex = 10;
				 this->panel2->Visible = false;
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(13, 45);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(143, 13);
				 this->label4->TabIndex = 5;
				 //
				 // textbox3
				 // 
				 this->textbox3->Location = System::Drawing::Point(12, 45);
				 this->textbox3->Size = System::Drawing::Size(472, 0);
				 this->textbox3->Multiline = false;
				 this->textbox3->WordWrap = true;
				 // 
				 // button6
				 // 
				 this->button6->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
				 this->button6->Location = System::Drawing::Point(12, 182);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(75, 23);
				 this->button6->TabIndex = 1;
				 this->button6->Text = L"Back";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &Cryptography::button6_Click);
				 // 
				 // button5
				 // 
				 this->button5->BackColor = System::Drawing::SystemColors::Control;
				 this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
				 this->button5->Location = System::Drawing::Point(409, 182);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(75, 23);
				 this->button5->TabIndex = 0;
				 this->button5->Text = L"Decrypt";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &Cryptography::button5_Click);
				 // 
				 // Cryptography
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(496, 217);
				 this->Controls->Add(this->panel1);
				 this->Controls->Add(this->panel2);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->label1);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
				 this->Name = L"Cryptography";
				 this->Text = L"Cryptography";
				 this->panel1->ResumeLayout(false);
				 this->panel2->ResumeLayout(false);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

			 //buttons
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //button 1	"Encrypt Message"
		panel1->Visible = true;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //button 2	"Decrypt Message"
		this->label2->Text = L"Enter the name of the encrypted file";
		panel2->Visible = true;
		textbox3->Visible = true;
		button5->Visible = true;
		label4->Visible = false;
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //button 3	"Encrypt"
		string input = msclr::interop::marshal_as<string>(textbox1->Text);
		string filename = msclr::interop::marshal_as<string>(textbox2->Text);
		encrypt(input, filename);
		panel1->Visible = false;
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //button 4	"Back" 1
		panel1->Visible = false;
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { //button 5	"Decrypt"
		this->label2->Text = L"The decrypted message is:";
		label4->Visible = true;
		this->label4->Text = msclr::interop::marshal_as<String^>(decrypt(msclr::interop::marshal_as<string>(textbox3->Text)));
		textbox3->Visible = false;
		button5->Visible = false;
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { //button 6	"Back" 2
		panel2->Visible = false;
	}

	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	};
}

using namespace WinFormEncryptTest;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(cli::array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Cryptography());
}

void encrypt(string message, string filename)
{
	vector<int> encrypted;
	int key[3][3] = { 0 };

	srand(time(0));
	int upTri[3][3];
	int lowTri[3][3];

	for (int i = 0; i < 3; i++) {                                 //creates key matrix
		for (int j = 0; j < 3; j++) {
			if (i < j)
				upTri[i][j] = rand() % 1000;
			else if (i == j)
				upTri[i][j] = 1;
			else
				upTri[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i > j)
				lowTri[i][j] = rand() % 1000;
			else if (i == j)
				lowTri[i][j] = 1;
			else
				lowTri[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3; k++)
				key[i][j] += upTri[i][k] * lowTri[k][j];

	int cols;
	if (message.size() % 3 == 0)
		cols = message.size() / 3;
	else
		cols = (message.size() + 3 - message.size() % 3) / 3;

	vector<int> orig(3 * cols, 0);                  //creates 3-row matrix with characters
	for (int i = 0; i < message.size(); i++) {      //converted to numbers
		orig[i] = int(message.at(i));
	}

	encrypted.resize(3 * cols);                     //encrypts enumerated-character
	for (int i = 0; i < 3; i++) {                   //matrix by multiplying by key
		for (int j = 0; j < cols; j++) {            //and displays it
			for (int k = 0; k < 3; k++)
				encrypted[i + 3 * j] += key[i][k] * orig[k + 3 * j];
		}
	}

	ofstream myfile;
	string endExt = "";
	if (filename.length() < 4)
		filename += ".txt";
	else {
		for (int i = 4; i > 0; i--)
			endExt += filename.at(filename.length() - i);
		if (endExt != ".txt")
			filename += ".txt";
	}
	myfile.open(filename);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			myfile << key[i][j] << "\n";
		}
	}
	for (int i = 0; i < encrypted.size(); i++) {
		myfile << encrypted[i] << "\n";
	}
	myfile.close();
}

string decrypt(string filename)
{
	string endExt = "";
	if (filename.length() < 4)
		filename += ".txt";
	else {
		for (int i = 4; i > 0; i--)
			endExt += filename.at(filename.length() - i);
		if (endExt != ".txt")
			filename += ".txt";
	}
	
	int key[3][3] = {};
	fstream fs;
	fs.open(filename);
	if (!(fs.is_open()))
	{
		fs.close();
		return "Error. File does not exist.";
	}

	ifstream inFile;
	int y = 0, counter = 0, i = 0, j = 0;
	vector<int> encrypted;

	inFile.open(filename);
	while (counter < 9) {
		counter++;
		inFile >> key[i][j];
		if (counter % 3 == 0)
			i++;
		j++;
		j = j % 3;
	}
	while (!inFile.eof()) {
		encrypted.resize(y + 1);
		inFile >> encrypted[y];
		y++;
	}
	inFile.close();

	int inverse[3][3];
	for (int row = 0; row < 3; row++)                                                                   //finds inverse of key
		for (int col = 0; col < 3; col++) {
			inverse[row][col] = (key[(col + 1) % 3][(row + 1) % 3] * key[(col + 2) % 3][(row + 2) % 3]
				- key[(col + 2) % 3][(row + 1) % 3] * key[(col + 1) % 3][(row + 2) % 3]);
		}

	vector<int> decrypted(encrypted.size(), 0);                     //decrypts by multiplying encrypted matrix
	for (int i = 0; i < 3; i++) {                                   //by inverse and displays decrypted matrix,
		for (int j = 0; j < encrypted.size() / 3; j++) {            //be identical to original matrix of
			for (int k = 0; k < 3; k++)                             //enuerated characters
				decrypted[i + 3 * j] += inverse[i][k] * encrypted[k + 3 * j];
		}
	}

	string message = "";
	for (int i = 0; i < decrypted.size(); i++)
		message += char(decrypted.at(i));
	return message;
}