#include "commends.h"
#include <string>

using namespace std;

int arryBuy[] = { 50, 70, 20, 45, 15 };

void commends::random()
{
	my_money = rand() % 1 + 200;
	cout << "you got : ";
	Sleep(1500);
	cout << "+" << my_money << "$\n\n";
}

void commends::menu()
{
	cout << "chicken = "<< arryBuy[0] <<"$\n";
	cout << "cow_meat = "<< arryBuy[1] <<"$\n";
	cout << "chips = " << arryBuy[2] <<"$\n";
	cout << "salad = "<< arryBuy[3] <<"$\n";
	cout << "pocporn = "<< arryBuy[4] <<"$\n\n";
}

void commends::help()
{
	cout << "menu - show the menu\n";
	cout << "my_money - show how match money you got\n";
	cout << "buy - to buy food. and after that you need to type witch food you wont\n\n";
}

void commends::buy(int num)
{
	
	cout<<my_money - arryBuy[num] << "\n";
	my_money = my_money - arryBuy[num];
	
	/*
	int chicken = 50;
	int cow_meat = 70;
	int chips = 20;
	int salad = 45;
	int pocporn = 15;
	*/
}

