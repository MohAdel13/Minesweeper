#pragma once
#include"Loser.h"
#include "Winner.h"
#include"MyForm.h"
#include"Scores.h"
#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<sstream>
using namespace std;
using namespace sf;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
//Main menu
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
		}

	protected:
		~main()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  Easy;
	private: System::Windows::Forms::Button^  Medium;
	private: System::Windows::Forms::Button^  Expert;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->Easy = (gcnew System::Windows::Forms::Button());
			this->Medium = (gcnew System::Windows::Forms::Button());
			this->Expert = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Easy
			// 
			this->Easy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Easy->Location = System::Drawing::Point(180, 69);
			this->Easy->Name = L"Easy";
			this->Easy->Size = System::Drawing::Size(122, 37);
			this->Easy->TabIndex = 1;
			this->Easy->Text = L"Easy";
			this->Easy->UseVisualStyleBackColor = true;
			this->Easy->Click += gcnew System::EventHandler(this, &main::Easy_Click);
			// 
			// Medium
			// 
			this->Medium->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Medium->Location = System::Drawing::Point(180, 161);
			this->Medium->Name = L"Medium";
			this->Medium->Size = System::Drawing::Size(122, 38);
			this->Medium->TabIndex = 2;
			this->Medium->Text = L"Medium";
			this->Medium->UseVisualStyleBackColor = true;
			this->Medium->Click += gcnew System::EventHandler(this, &main::Medium_Click);
			// 
			// Expert
			// 
			this->Expert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Expert->Location = System::Drawing::Point(180, 257);
			this->Expert->Name = L"Expert";
			this->Expert->Size = System::Drawing::Size(122, 39);
			this->Expert->TabIndex = 3;
			this->Expert->Text = L"Expert";
			this->Expert->UseVisualStyleBackColor = true;
			this->Expert->Click += gcnew System::EventHandler(this, &main::Expert_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Location = System::Drawing::Point(375, 391);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(97, 37);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &main::Exit_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 352);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 336);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Name :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Scores";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(202, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Made by";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Expert);
			this->Controls->Add(this->Medium);
			this->Controls->Add(this->Easy);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Minesweeper....";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//taking variables from all other menus
		Winner^ W = gcnew Winner();
		Loser^ L = gcnew Loser();
		MyForm^ M = gcnew MyForm();
		Scores^ S = gcnew Scores();
//choosing Easy mode
private: System::Void Easy_Click(System::Object^  sender, System::EventArgs^  e) {
//Hide the main menu	
	this->Hide();
//Design a window for the Game
	RenderWindow app(VideoMode(500, 550), "Minesweeper!.......", Style::Titlebar | Style::Close);
//Set Icon
	auto Icon = sf::Image{};
	if (!Icon.loadFromFile("Data/flag_tile.png"))
	{
		Application::Exit();
	}
	app.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());
//Textures
	Texture tile0, tile1, tile2, tile3, tile4, tile5, tile6, tile7, tile8, Bombtile, covertile, flagtile, redtile, sound, mute, border, Restart;
//Declaration
	bool play = true, Leftclick = false, Rightclick = false, chk = false, lose = false, Win = false, flag[10][10] = {}, plus[10][10], sounds = true, restart = false, flagf[10][10] = {};
	int num[10][10] = {}, Xmouse = 0, Ymouse = 0, draw[10][10] = {}, action[10][10] = {}, drawn = 0, Bomb = 0, trueflag = 0,time=0,timeS=0,timeM=0,timeH=0;
//setting number of frame draw per second
	app.setFramerateLimit(60);
//prevent repeating action due to long press
	app.setKeyRepeatEnabled(false);
//Shapes
	RectangleShape intile[10][10], outtile[10][10], Flag[10][10], mutes, board, re;
//Sounds
	SoundBuffer explosion, select, won;
	Sound Explosion, Select, Won;
	Explosion.setBuffer(explosion);
	Select.setBuffer(select);
	Won.setBuffer(won);
	//Loading from files or Exit the Application
	if (tile0.loadFromFile("Data/0_tile.png") == -1 || tile1.loadFromFile("Data/1_tile.png") == -1 ||
		tile2.loadFromFile("Data/2_tile.png") == -1 || tile3.loadFromFile("Data/3_tile.png") == -1 ||
		tile4.loadFromFile("Data/4_tile.png") == -1 || tile5.loadFromFile("Data/5_tile.png") == -1 ||
		tile6.loadFromFile("Data/6_tile.png") == -1 || tile7.loadFromFile("Data/7_tile.png") == -1 ||
		tile8.loadFromFile("Data/8_tile.png") == -1 || Bombtile.loadFromFile("Data/Bomb_tile.png") == -1
		|| covertile.loadFromFile("Data/cover_tile.png") == -1 || flagtile.loadFromFile("Data/flag_tile.png") == -1 ||
		redtile.loadFromFile("Data/red_bomb_tile.png") == -1 || explosion.loadFromFile("Data/Explosion.wav") == -1 ||
		select.loadFromFile("Data/Select.wav") == -1 ||
		won.loadFromFile("Data/Won.wav") == -1 ||
		sound.loadFromFile("Data/sound.png") == -1 || mute.loadFromFile("Data/mute.png") == -1 ||
		border.loadFromFile("Data/border.png") == -1 || Restart.loadFromFile("Data/restart.png") == -1)
	{
		Application::Exit();
	}
	
//Forming 2-D arrays for cover rectangles
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			outtile[i][j].setPosition(i * 50, (j * 50) + 50);
			outtile[i][j].setSize(Vector2f(50, 50));
			outtile[i][j].setTexture(&covertile);
		}
//Forming 2-D arrays for numbers & bombs
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			intile[i][j].setPosition(i * 50, (j * 50) + 50);
			intile[i][j].setSize(Vector2f(50, 50));
		}
//placing Bombs in random places
	for (int i = 0; i < 11; i++)
	{
		intile[rand() % 9][rand() % 9].setTexture(&Bombtile);
	}
//Forming 2-D array for flags
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			Flag[i][j].setPosition(i * 50, (j * 50) + 50);
			Flag[i][j].setSize(Vector2f(50, 50));
		}
//placing the sound button
	mutes.setPosition(225, 0);
	mutes.setSize(Vector2f(50, 50));
//placing the board image
	board.setTexture(&border);
	board.setSize(Vector2f(500, 50));
//placing the restart button
	re.setTexture(&Restart);
	re.setSize(Vector2f(25, 25));
	re.setPosition(50, 12);
//Game Loop
	while (play == true)
	{
		Event event;
		while (app.pollEvent(event))
		{
//Detecting the type of event
			switch (event.type)
			{
//if close button is pressed the game finishes
			case Event::Closed:
				play = false;
				break;
			case Event::MouseButtonPressed:
				switch (event.mouseButton.button)
				{
				case Mouse::Left:
					Leftclick = true;
					break;
				case Mouse::Right:
					Rightclick = true;
					break;
				case Event::MouseButtonReleased:
					switch (event.mouseButton.button)
					{
					case Mouse::Left:
						Leftclick = false;
						break;
					case Mouse::Right:
						Rightclick = false;
						break;
					}
				}
			}
		}
//if sound is on sound shape is drawn
		if (sounds == true)
		{
			mutes.setTexture(&sound);
		}
//if sound is off mute shape is drawn
		else if (sounds == false)
		{
			mutes.setTexture(&mute);
		}
//Detecting the position of Bombs
		if (chk == false)
		{
			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++)
				{
					if (intile[i][j].getTexture() == &Bombtile)
					{
						num[i][j] = 10;
					}
					else
						if (intile[i - 1][j].getTexture() == &Bombtile && i != 0)
						{
							num[i][j]++;
						}
					if (intile[i + 1][j].getTexture() == &Bombtile && i != 9)
					{
						num[i][j]++;
					}
					if (intile[i][j - 1].getTexture() == &Bombtile && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i][j + 1].getTexture() == &Bombtile && j != 9)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j + 1].getTexture() == &Bombtile && j != 9 && i != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j - 1].getTexture() == &Bombtile && i != 9 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j - 1].getTexture() == &Bombtile && i != 0 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j + 1].getTexture() == &Bombtile && i != 9 && j != 9)
					{
						num[i][j]++;
					}
				}
//Drawing the numbers depending the number of neighbor Bomb
			chk = true;
		}
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				if (num[i][j] == 0)
					intile[i][j].setTexture(&tile0);
				if (num[i][j] == 1)
					intile[i][j].setTexture(&tile1);
				if (num[i][j] == 2)
					intile[i][j].setTexture(&tile2);
				if (num[i][j] == 3)
					intile[i][j].setTexture(&tile3);
				if (num[i][j] == 4)
					intile[i][j].setTexture(&tile4);
				if (num[i][j] == 5)
					intile[i][j].setTexture(&tile5);
				if (num[i][j] == 6)
					intile[i][j].setTexture(&tile6);
				if (num[i][j] == 7)
					intile[i][j].setTexture(&tile7);
				if (num[i][j] == 8)
					intile[i][j].setTexture(&tile8);
			}
//Detecting position of mouse
		Vector2i pos = Mouse::getPosition(app);
		Xmouse = pos.x;
		Ymouse = pos.y;
//calculating time
		time++;
		if (time == 60)
		{
			timeS++;
			time = 0;
		}
		if (timeS == 60)
		{
			timeM++;
			timeS = 0;
		}
		if (timeM == 60)
		{
			timeH++;
			timeM = 0;
		}
//Drawing
		app.clear();
		app.draw(board);
		app.draw(mutes);
		app.draw(re);
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				app.draw(outtile[i][j]);
			}
//if the player pressed left click on a rectangle
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				if (Leftclick == true && Xmouse < 50 * (i + 1) && Ymouse>(50 * j) + 50 && Xmouse > 50 * i && Ymouse < (50 * (j + 1)) + 50 && Flag[i][j].getTexture() != &flagtile)
				{
//if it's not containing a bomb & sound is on select sound play
					if (num[i][j] < 9 && sounds == true)
					{
						Select.play();
					}
//if it's containing a bomb & sound is on Explosion sound play
					else
					{
						if (sounds == true)
						{
							Explosion.play();
						}
					}
					action[i][j] = 1;
					Leftclick = false;
				}
			}
//if player pressed left click on the sound button
		if (Leftclick == true && Xmouse < 275 && Xmouse > 225 && Ymouse > 0 && Ymouse < 50)
		{
			//if the sound is on it turns to off & vice versa
			if (sounds == true)
				sounds = false;
			else
				sounds = true;
			Leftclick = false;
		}
//if the player press the button of restart all the board is reset to the begaining form
		if (Leftclick == true && Xmouse < 75 && Xmouse > 50 && Ymouse>12 && Ymouse < 25)
		{
			restart = true;
		}
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
//if the player press Right click on a rectangle
				if (Rightclick == true && Xmouse < 50 * (i + 1) && Ymouse>(50 * j) + 50 && Xmouse > 50 * i && Ymouse < (50 * (j + 1)) + 50)
				{
//Detecting if the rectangle has a flag or not
					if (flag[i][j] == false)
					{
						flag[i][j] = true;
						Rightclick = false;
						flagf[i][j] = false;
					}
					else
					{
						flag[i][j] = false;
						flagf[i][j] = true;
						Rightclick = false;
					}
				}
			}
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
//if the rectangle hasn't the shape of flag a flag is drawn on it
				if (flag[i][j] == true)
				{
					Flag[i][j].setTexture(&flagtile);
					app.draw(Flag[i][j]);
				}
//if the rectangle has the shape of flag the flag shape is removed
				else if (flagf[i][j] == true)
				{
					Flag[i][j].setTexture(&covertile);
					app.draw(Flag[i][j]);
				}
			}
//if a rectangle is selected
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				if (action[i][j] == 1)
				{
//if the selected rectangle contains a Bomb the player lose and the game finish
					if (num[i][j] > 8)
					{
						intile[i][j].setTexture(&redtile);
						lose = true;
						play = false;
					}
//if the selected rectangle doesn't contain a bomb the number of the neighboring mines is shown on it & number of selected rectangles increase
					else
					{
						app.draw(intile[i][j]);
						draw[i][j] = 1;
						plus[i][j] = true;
					}
					for (int k = i; k < 10; k++)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = 11;
					}
					for (int l = j; l < 10; l++)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = 11;
					}
					for (int k = i; k >= 0; k--)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = -1;
					}
					for (int l = j; l >= 0; l--)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = -1;
					}
				}
			}
//if the blayer lose all the inner numbers and Bombs appear
		if (lose == true)
		{
			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++)
				{
					app.draw(intile[i][j]);
				}
		}
//Calculating safe rectangles revealed & number of Bombs
		drawn = 0;
		Bomb = 0;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				if (plus[i][j] == true)
				{
					drawn += 1;
				}
				if (num[i][j] > 8)
				{
					Bomb += 1;
				}
//if number of revealed squares = squares without Bombs the player win
				if (drawn == 100 - Bomb)
				{
					Win = true;
					play = false;
				}
			}
//calculating flags
		trueflag = 0;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
			{
				if (Flag[i][j].getTexture() == &flagtile && num[i][j] > 8)
				{
					trueflag += 1;
				}
				if (trueflag == Bomb&&Bomb != 0)
				{
					Win = true;
					play = false;
				}
			}
//restart game board
		if (restart == true)
		{
			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++)
				{
					app.draw(outtile[i][j]);
					flag[i][j] = false;
					draw[i][j] = 0;
					action[i][j] = 0;
					plus[i][j] = false;
				}
			restart = false;
			Leftclick = false;
		}
		app.display();
	}
//winning menu and writing score with joy sound
	if (Win == true)
	{
		if (sounds == true)
		{
			Won.play();
		}
		StreamWriter file("Data/Scores.txt", true);
		file.WriteLine("Easy mode" + "          " + timeH + " : " + timeM + " : " + timeS + "          "+textBox1->Text);
		W->ShowDialog();
		this->Show();
	}
//lose menu
	else if (lose == true)
	{
		L->ShowDialog();
		this->Show();
	}
//main menu
	else
		this->Show();
}
//choosing Medium mode
private: System::Void Medium_Click(System::Object^  sender, System::EventArgs^  e) {
//Hide the Main menu
	this->Hide();
//Designing a window for the game
	RenderWindow app(VideoMode(525, 575), "Minesweeper!.......", Style::Titlebar | Style::Close);
//Set Icon
	auto Icon = sf::Image{};
	if (!Icon.loadFromFile("Data/flag_tile.png"))
	{
		Application::Exit();
	}
	app.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());
//Textures
	Texture tile0, tile1, tile2, tile3, tile4, tile5, tile6, tile7, tile8, Bombtile, covertile, flagtile, redtile, sound, mute, border, Restart;
//Declaration
	bool play = true, Leftclick = false, Rightclick = false, chk = false, lose = false, Win = false, flag[15][15] = {}, plus[15][15], sounds = true, restart = false, flagf[15][15] = {};
	int num[15][15] = {}, Xmouse = 0, Ymouse = 0, draw[15][15] = {}, action[15][15] = {}, drawn = 0, Bomb = 0, trueflag = 0, time = 0, timeS = 0, timeM = 0, timeH = 0;
//set the number of frames drawn by second
	app.setFramerateLimit(60);
//prevent repeating action while long press
	app.setKeyRepeatEnabled(false);
//Shapes
	RectangleShape intile[15][15], outtile[15][15], Flag[15][15], mutes, board, re;
//Sounds
	SoundBuffer explosion, select, won;
	Sound Explosion, Select, Won;
	Explosion.setBuffer(explosion);
	Select.setBuffer(select);
	Won.setBuffer(won);
//Loading from files or Exit the Application
	if (tile0.loadFromFile("Data/0_tile.png") == -1 || tile1.loadFromFile("Data/1_tile.png") == -1 ||
		tile2.loadFromFile("Data/2_tile.png") == -1 || tile3.loadFromFile("Data/3_tile.png") == -1 ||
		tile4.loadFromFile("Data/4_tile.png") == -1 || tile5.loadFromFile("Data/5_tile.png") == -1 ||
		tile6.loadFromFile("Data/6_tile.png") == -1 || tile7.loadFromFile("Data/7_tile.png") == -1 ||
		tile8.loadFromFile("Data/8_tile.png") == -1 || Bombtile.loadFromFile("Data/Bomb_tile.png") == -1
		|| covertile.loadFromFile("Data/cover_tile.png") == -1 || flagtile.loadFromFile("Data/flag_tile.png") == -1 ||
		redtile.loadFromFile("Data/red_bomb_tile.png") == -1 || explosion.loadFromFile("Data/Explosion.wav") == -1 ||
		select.loadFromFile("Data/Select.wav") == -1 ||
		won.loadFromFile("Data/Won.wav") == -1 ||
		sound.loadFromFile("Data/sound.png") == -1 || mute.loadFromFile("Data/mute.png") == -1 ||
		border.loadFromFile("Data/border.png") == -1 || Restart.loadFromFile("Data/restart.png") == -1)
	{
		Application::Exit();
	}
//Forming a 2-D array for the cover rectangles
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
		{
			outtile[i][j].setPosition(i * 35, (j * 35) + 50);
			outtile[i][j].setSize(Vector2f(35, 35));
			outtile[i][j].setTexture(&covertile);
		}
//Forming 2-D arrays for the numbers and bombs rectangles
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
		{
			intile[i][j].setPosition(i * 35, (j * 35) + 50);
			intile[i][j].setSize(Vector2f(35, 35));
		}
//placing bombs in random places
	for (int i = 0; i < 46; i++)
	{
		intile[rand() % 14][rand() % 14].setTexture(&Bombtile);
	}
//Forming 2-D arrays for flags
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 15; j++)
		{
			Flag[i][j].setPosition(i * 35, (j * 35) + 50);
			Flag[i][j].setSize(Vector2f(35, 35));
		}
//placing the sounds button
	mutes.setPosition(225, 0);
	mutes.setSize(Vector2f(50, 50));
//placing the board image
	board.setTexture(&border);
	board.setSize(Vector2f(525, 50));
//placing the restart button
	re.setTexture(&Restart);
	re.setSize(Vector2f(25, 25));
	re.setPosition(50, 12);
//Game Loop
	while (play == true)
	{
		Event event;
		while (app.pollEvent(event))
		{
//Detecting type of event
			switch (event.type)
			{
//if the close button is pressed the game is closed
			case Event::Closed:
				play = false;
				break;
			case Event::MouseButtonPressed:
				switch (event.mouseButton.button)
				{
				case Mouse::Left:
					Leftclick = true;
					break;
				case Mouse::Right:
					Rightclick = true;
					break;
				case Event::MouseButtonReleased:
					switch (event.mouseButton.button)
					{
					case Mouse::Left:
						Leftclick = false;
						break;
					case Mouse::Right:
						Rightclick = false;
						break;
					}
				}
			}
		}
//if sound is on the sound button is drawn
		if (sounds == true)
		{
			mutes.setTexture(&sound);
		}
//if sound is off the mute button is drawn
		else if (sounds == false)
		{
			mutes.setTexture(&mute);
		}
//placing numbers and Bombs on the inside rectangles
		if (chk == false)
		{
			for (int i = 0; i < 15; i++)
				for (int j = 0; j < 15; j++)
				{
					if (intile[i][j].getTexture() == &Bombtile)
					{
						num[i][j] = 10;
					}
					else
						if (intile[i - 1][j].getTexture() == &Bombtile && i != 0)
						{
							num[i][j]++;
						}
					if (intile[i + 1][j].getTexture() == &Bombtile && i != 14)
					{
						num[i][j]++;
					}
					if (intile[i][j - 1].getTexture() == &Bombtile && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i][j + 1].getTexture() == &Bombtile && j != 14)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j + 1].getTexture() == &Bombtile && j != 14 && i != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j - 1].getTexture() == &Bombtile && i != 14 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j - 1].getTexture() == &Bombtile && i != 0 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j + 1].getTexture() == &Bombtile && i != 14 && j != 14)
					{
						num[i][j]++;
					}
				}
//placing numbers depending on the neighbor Bombs
			chk = true;
		}
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				if (num[i][j] == 0)
					intile[i][j].setTexture(&tile0);
				if (num[i][j] == 1)
					intile[i][j].setTexture(&tile1);
				if (num[i][j] == 2)
					intile[i][j].setTexture(&tile2);
				if (num[i][j] == 3)
					intile[i][j].setTexture(&tile3);
				if (num[i][j] == 4)
					intile[i][j].setTexture(&tile4);
				if (num[i][j] == 5)
					intile[i][j].setTexture(&tile5);
				if (num[i][j] == 6)
					intile[i][j].setTexture(&tile6);
				if (num[i][j] == 7)
					intile[i][j].setTexture(&tile7);
				if (num[i][j] == 8)
					intile[i][j].setTexture(&tile8);
			}
//Detecting the position of mouse
		Vector2i pos = Mouse::getPosition(app);
		Xmouse = pos.x;
		Ymouse = pos.y;
//Calculating time
		time++;
		if (time == 60)
		{
			timeS++;
			time = 0;
		}
		if (timeS == 60)
		{
			timeM++;
			timeS = 0;
		}
		if (timeM == 60)
		{
			timeH++;
			timeM = 0;
		}
//Drawing
		app.clear();
		app.draw(board);
		app.draw(mutes);
		app.draw(re);
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				app.draw(outtile[i][j]);
			}
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
//if player pressed left click
				if (Leftclick == true && Xmouse < 35 * (i + 1) && Ymouse>(35 * j) + 50 && Xmouse > 35 * i && Ymouse < (35 * (j + 1)) + 50 && Flag[i][j].getTexture() != &flagtile)
				{
//if the rectangle doesn't contain Bomb and sound is on a sound of select plays
					if (num[i][j] < 9 && sounds == true)
					{
						Select.play();
					}
//if the rectangle contains Bomb and sound is on an explosion sound plays
					else
					{
						if (sounds == true)
						{
							Explosion.play();
						}
					}
					action[i][j] = 1;
					Leftclick = false;
				}
			}
//if the player pressed on the sound button
		if (Leftclick == true && Xmouse < 275 && Xmouse > 225 && Ymouse > 0 && Ymouse < 50)
		{
//if the sound is on it turns into off
			if (sounds == true)
				sounds = false;
//if the sound is off it turns into on
			else
				sounds = true;
			Leftclick = false;
		}
//if the player pressed on restart button the game is reset to the begaining form
		if (Leftclick == true && Xmouse < 75 && Xmouse > 50 && Ymouse>12 && Ymouse < 25)
		{
			restart = true;
		}
//if the player press Right click on a rectangle
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				if (Rightclick == true && Xmouse < 35 * (i + 1) && Ymouse>(35 * j) + 50 && Xmouse > 35 * i && Ymouse < (35 * (j + 1)) + 50)
				{
//Detecting if the rectangle has a flagor not
					if (flag[i][j] == false)
					{
						flag[i][j] = true;
						Rightclick = false;
						flagf[i][j] = false;
					}
					else
					{
						flag[i][j] = false;
						flagf[i][j] = true;
						Rightclick = false;
					}
				}
			}
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
//if the rectangle has no flag a flag is drawn on it
				if (flag[i][j] == true)
				{
					Flag[i][j].setTexture(&flagtile);
					app.draw(Flag[i][j]);
				}
//if the rectangle has a flag the flag is removed
				else if (flagf[i][j] == true)
				{
					Flag[i][j].setTexture(&covertile);
					app.draw(Flag[i][j]);
				}
			}
//Taking action for a press on rectangle
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				if (action[i][j] == 1)
				{
//if the rectangle contains a bomb the player lose
					if (num[i][j] > 8)
					{
						intile[i][j].setTexture(&redtile);
						lose = true;
						play = false;
					}
//if the rectangle has no bomb it appears the number of neighbor bombs and number of selected rectangles increase
					else
					{
						app.draw(intile[i][j]);
						draw[i][j] = 1;
						plus[i][j] = true;
					}
					for (int k = i; k < 15; k++)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = 16;
					}
					for (int l = j; l < 15; l++)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = 16;
					}
					for (int k = i; k >= 0; k--)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = -1;
					}
					for (int l = j; l >= 0; l--)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = -1;
					}
				}
			}
//if the player lose the game all the inside shapes appear
		if (lose == true)
		{
			for (int i = 0; i < 15; i++)
				for (int j = 0; j < 15; j++)
				{
					app.draw(intile[i][j]);
				}
		}
//calculating number of selected rectangles and the number of bombs
		drawn = 0;
		Bomb = 0;
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				if (plus[i][j] == true)
				{
					drawn += 1;
				}
				if (num[i][j] > 8)
				{
					Bomb += 1;
				}
//if the number of selected rectangles = to the number of rectangles without bombs the blayer win the game
				if (drawn == 225 - Bomb)
				{
					Win = true;
					play = false;
				}
			}
//calculating number of right drawn flags and if it's = to the number of bombs the player win the game 
		trueflag = 0;
		for (int i = 0; i < 15; i++)
			for (int j = 0; j < 15; j++)
			{
				if (Flag[i][j].getTexture() == &flagtile && num[i][j] > 8)
				{
					trueflag += 1;
				}
				if (trueflag == Bomb&&Bomb != 0)
				{
					Win = true;
					play = false;
				}
			}
//if the player restarted the game all the board reset to the begaining form
		if (restart == true)
		{
			for (int i = 0; i < 15; i++)
				for (int j = 0; j < 15; j++)
				{
					app.draw(outtile[i][j]);
					flag[i][j] = false;
					draw[i][j] = 0;
					action[i][j] = 0;
					plus[i][j] = false;
				}
			restart = false;
			Leftclick = false;
		}
		app.display();
	}
//if the player won the game the form of winning appears and the score is saved into text file
	if (Win == true)
	{
		if (sounds == true)
		{
			Won.play();
		}
		StreamWriter file("Data/Scores.txt", true);
		file.WriteLine("Medium mode" + "          " + timeH + " : " + timeM + " : " + timeS +"          "+ textBox1->Text);
		W->ShowDialog();
		this->Show();
	}
//if the player lose the game losing form appears
	else if (lose == true)
	{
		L->ShowDialog();
		this->Show();
	}
//if player pressed Main menu button it appears
	else
		this->Show();
}
//choosing Expert button
private: System::Void Expert_Click(System::Object^  sender, System::EventArgs^  e) {
//Hiding the Main menu
	this->Hide();
//Designing a window for the game
	RenderWindow app(VideoMode(500, 550), "Minesweeper!.......", Style::Titlebar | Style::Close);
//Set Icon
	auto Icon = sf::Image{};
	if (!Icon.loadFromFile("Data/flag_tile.png"))
	{
		Application::Exit();
	}
	app.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());
//Textures
	Texture tile0, tile1, tile2, tile3, tile4, tile5, tile6, tile7, tile8, Bombtile, covertile, flagtile, redtile, sound, mute, border, Restart;
//Declaration
	bool play = true, Leftclick = false, Rightclick = false, chk = false, lose = false, Win = false, flag[20][20] = {}, plus[20][20], sounds = true, restart = false, flagf[20][20] = {};
	int num[20][20] = {}, Xmouse = 0, Ymouse = 0, draw[20][20] = {}, action[20][20] = {}, drawn = 0, Bomb = 0, trueflag = 0, time = 0, timeS = 0, timeM = 0, timeH = 0;
	app.setFramerateLimit(60);
	app.setKeyRepeatEnabled(false);
//Shapes
	RectangleShape intile[20][20], outtile[20][20], Flag[20][20], mutes, board, re;
//Sounds
	SoundBuffer explosion, select, won;
	Sound Explosion, Select, Won;
	Explosion.setBuffer(explosion);
	Select.setBuffer(select);
	Won.setBuffer(won);
//Loading from files or Exit the Application
	if (tile0.loadFromFile("Data/0_tile.png") == -1 || tile1.loadFromFile("Data/1_tile.png") == -1 ||
		tile2.loadFromFile("Data/2_tile.png") == -1 || tile3.loadFromFile("Data/3_tile.png") == -1 ||
		tile4.loadFromFile("Data/4_tile.png") == -1 || tile5.loadFromFile("Data/5_tile.png") == -1 ||
		tile6.loadFromFile("Data/6_tile.png") == -1 || tile7.loadFromFile("Data/7_tile.png") == -1 ||
		tile8.loadFromFile("Data/8_tile.png") == -1 || Bombtile.loadFromFile("Data/Bomb_tile.png") == -1
		|| covertile.loadFromFile("Data/cover_tile.png") == -1 || flagtile.loadFromFile("Data/flag_tile.png") == -1 ||
		redtile.loadFromFile("Data/red_bomb_tile.png") == -1 || explosion.loadFromFile("Data/Explosion.wav") == -1 ||
		select.loadFromFile("Data/Select.wav") == -1 ||
		won.loadFromFile("Data/Won.wav") == -1 ||
		sound.loadFromFile("Data/sound.png") == -1 || mute.loadFromFile("Data/mute.png") == -1 ||
		border.loadFromFile("Data/border.png") == -1 || Restart.loadFromFile("Data/restart.png") == -1)
	{
		Application::Exit();
	}
//forming 2-D arrays for the cover rectangles
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
		{
			outtile[i][j].setPosition(i * 25, (j * 25) + 50);
			outtile[i][j].setSize(Vector2f(25, 25));
			outtile[i][j].setTexture(&covertile);
		}
//forming 2-D arrays for the inner rectangles
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
		{
			intile[i][j].setPosition(i * 25, (j * 25) + 50);
			intile[i][j].setSize(Vector2f(25, 25));
		}
//placing Bombs in random places
	for (int i = 0; i < 101; i++)
	{
		intile[rand() % 19][rand() % 19].setTexture(&Bombtile);
	}
//forming 2-D arrays for the flag rectangles
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 20; j++)
		{
			Flag[i][j].setPosition(i * 25, (j * 25) + 50);
			Flag[i][j].setSize(Vector2f(25, 25));
		}
//placing the mute button
	mutes.setPosition(225, 0);
	mutes.setSize(Vector2f(50, 50));
//placing the board image
	board.setTexture(&border);
	board.setSize(Vector2f(500, 50));
//placing the restart button
	re.setTexture(&Restart);
	re.setSize(Vector2f(25, 25));
	re.setPosition(50, 12);
//Game Loop
	while (play == true)
	{
		Event event;
		while (app.pollEvent(event))
		{
//Detecting the type of event
			switch (event.type)
			{
//if the player pressed on the close button the game is closed
			case Event::Closed:
				play = false;
				break;
			case Event::MouseButtonPressed:
				switch (event.mouseButton.button)
				{
				case Mouse::Left:
					Leftclick = true;
					break;
				case Mouse::Right:
					Rightclick = true;
					break;
				case Event::MouseButtonReleased:
					switch (event.mouseButton.button)
					{
					case Mouse::Left:
						Leftclick = false;
						break;
					case Mouse::Right:
						Rightclick = false;
						break;
					}
				}
			}
		}
//if sound is on sound button is drawn
		if (sounds == true)
		{
			mutes.setTexture(&sound);
		}
//if sound is off mute button is drawn
		else if (sounds == false)
		{
			mutes.setTexture(&mute);
		}
//Detecting the number of neighbor bombs
		if (chk == false)
		{
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
				{
					if (intile[i][j].getTexture() == &Bombtile)
					{
						num[i][j] = 10;
					}
					else
						if (intile[i - 1][j].getTexture() == &Bombtile && i != 0)
						{
							num[i][j]++;
						}
					if (intile[i + 1][j].getTexture() == &Bombtile && i != 19)
					{
						num[i][j]++;
					}
					if (intile[i][j - 1].getTexture() == &Bombtile && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i][j + 1].getTexture() == &Bombtile && j != 19)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j + 1].getTexture() == &Bombtile && j != 19 && i != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j - 1].getTexture() == &Bombtile && i != 19 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i - 1][j - 1].getTexture() == &Bombtile && i != 0 && j != 0)
					{
						num[i][j]++;
					}
					if (intile[i + 1][j + 1].getTexture() == &Bombtile && i != 19 && j != 19)
					{
						num[i][j]++;
					}
				}
//Drawing rectangles of numbers depending on the number of neighbor bombs
			chk = true;
		}
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				if (num[i][j] == 0)
					intile[i][j].setTexture(&tile0);
				if (num[i][j] == 1)
					intile[i][j].setTexture(&tile1);
				if (num[i][j] == 2)
					intile[i][j].setTexture(&tile2);
				if (num[i][j] == 3)
					intile[i][j].setTexture(&tile3);
				if (num[i][j] == 4)
					intile[i][j].setTexture(&tile4);
				if (num[i][j] == 5)
					intile[i][j].setTexture(&tile5);
				if (num[i][j] == 6)
					intile[i][j].setTexture(&tile6);
				if (num[i][j] == 7)
					intile[i][j].setTexture(&tile7);
				if (num[i][j] == 8)
					intile[i][j].setTexture(&tile8);
			}
//Detect the place of mouse
		Vector2i pos = Mouse::getPosition(app);
		Xmouse = pos.x;
		Ymouse = pos.y;
//Calculating the time
		time++;
		if (time == 60)
		{
			timeS++;
			time = 0;
		}
		if (timeS == 60)
		{
			timeM++;
			timeS = 0;
		}
		if (timeM == 60)
		{
			timeH++;
			timeM = 0;
		}
//Drawing
		app.clear();
		app.draw(board);
		app.draw(mutes);
		app.draw(re);
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				app.draw(outtile[i][j]);
			}
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
//if the player pressed left click on a rectangle
				if (Leftclick == true && Xmouse < 25 * (i + 1) && Ymouse>(25 * j) + 50 && Xmouse > 25 * i && Ymouse < (25 * (j + 1)) + 50 && Flag[i][j].getTexture() != &flagtile)
				{
//if rectangle doesn't contain a Bomb & sound is on select sound plays
					if (num[i][j] < 9 && sounds == true)
					{
						Select.play();
					}
////if rectangle contains a Bomb & sound is on Explosion sound plays
					else
					{
						if (sounds == true)
						{
							Explosion.play();
						}
					}
					action[i][j] = 1;
					Leftclick = false;
				}
			}
//if the player pressed on sound button
		if (Leftclick == true && Xmouse < 275 && Xmouse > 225 && Ymouse > 0 && Ymouse < 50)
		{
//if it's on it turns into off
			if (sounds == true)
				sounds = false;
			else
//if it's on it turns into off
				sounds = true;
			Leftclick = false;
		}
//if the player pressed on restart button the game restart
		if (Leftclick == true && Xmouse < 75 && Xmouse > 50 && Ymouse>12 && Ymouse < 25)
		{
			restart = true;
		}
//Detecting if the rectangle has a flag shape or not 
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				if (Rightclick == true && Xmouse < 25 * (i + 1) && Ymouse>(25 * j) + 50 && Xmouse > 25 * i && Ymouse < (25 * (j + 1)) + 50)
				{
					if (flag[i][j] == false)
					{
						flag[i][j] = true;
						Rightclick = false;
						flagf[i][j] = false;
					}
					else
					{
						flag[i][j] = false;
						flagf[i][j] = true;
						Rightclick = false;
					}
				}
			}
//if the player pressed right click
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
//if the rectangle hasn't a flag shape a flag shape is drawn on it 
				if (flag[i][j] == true)
				{
					Flag[i][j].setTexture(&flagtile);
					app.draw(Flag[i][j]);
				}
//if the rectangle has a flag shape on it it's removed
				else if (flagf[i][j] == true)
				{
					Flag[i][j].setTexture(&covertile);
					app.draw(Flag[i][j]);
				}
			}
//Taking action of pressing on a rectangle
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				if (action[i][j] == 1)
				{
//if the rectangle contains a bomb the player lose the game
					if (num[i][j] > 8)
					{
						intile[i][j].setTexture(&redtile);
						lose = true;
						play = false;
					}
//if the rectangle doesn't contain a bomb the number of neighbor bombs appears and number of drawn numbers increase
					else
					{
						app.draw(intile[i][j]);
						draw[i][j] = 1;
						plus[i][j] = true;
					}
					for (int k = i; k < 20; k++)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = 21;
					}
					for (int l = j; l < 20; l++)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = 21;
					}
					for (int k = i; k >= 0; k--)
					{
						if (num[k][j] < 9 && Flag[k][j].getTexture() != &flagtile)
						{
							app.draw(intile[k][j]);
							plus[k][j] = true;
						}
						else
							k = -1;
					}
					for (int l = j; l >= 0; l--)
					{
						if (num[i][l] < 9 && Flag[i][l].getTexture() != &flagtile)
						{
							app.draw(intile[i][l]);
							plus[i][l] = true;
						}
						else
							l = -1;
					}
				}
			}
//if the player lose the game all the inner rectangles of numbers and bombs appear
		if (lose == true)
		{
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
				{
					app.draw(intile[i][j]);
				}
		}
		drawn = 0;
		Bomb = 0;
//calculating number of selected rectangles and bombs
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				if (plus[i][j] == true)
				{
					drawn += 1;
				}
				if (num[i][j] > 8)
				{
					Bomb += 1;
				}
//if all safe rectangles is selected the player wins the game
				if (drawn == 400 - Bomb)
				{
					Win = true;
					play = false;
				}
			}
//if the number of true flags = number of bombs the player wins the game
		trueflag = 0;
		for (int i = 0; i < 20; i++)
			for (int j = 0; j < 20; j++)
			{
				if (Flag[i][j].getTexture() == &flagtile && num[i][j] > 8)
				{
					trueflag += 1;
				}
				if (trueflag == Bomb&&Bomb != 0)
				{
					Win = true;
					play = false;
				}
			}
//if the game is restarted the game is reset to the begaining form
		if (restart == true)
		{
			for (int i = 0; i < 20; i++)
				for (int j = 0; j < 20; j++)
				{
					app.draw(outtile[i][j]);
					flag[i][j] = false;
					draw[i][j] = 0;
					action[i][j] = 0;
					plus[i][j] = false;
				}
			restart = false;
			Leftclick = false;
		}
		app.display();
	}
//if the player won the game winning form is shown with joy sound and score is saved to text file
	if (Win == true)
	{
		if (sounds == true)
		{
			Won.play();
		}
		StreamWriter file("Data/Scores.txt", true);
		file.WriteLine("Expert mode" +"          "+ timeH + " : " + timeM + " : " + timeS+"          "  +textBox1->Text);
		W->ShowDialog();
		this->Show();
	}
//if the player lose the game lose form is shown
	else if (lose == true)
	{
		L->ShowDialog();
		this->Show();
	}
	else
		this->Show();
}
//if the Exit button is pressed the Application Exits
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
//if the (Made by) button is pressed (My form) form is opened
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	M->ShowDialog();
	this->Show();
}
//if Score button is pressed scores form is opened
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	S->ShowDialog();
	this->Show();
}
private: System::Void main_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}

