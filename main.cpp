#include <Windows.h>
#include <iostream>
#include "commends.h"

using namespace std;

string commend;
string ArryCommends[] = { "menu", "my_money", "buy", "help" };
string ArryCommendsBuy[] = { "chicken", "cow_meat", "chips", "salad", "pocporn" };

int main() {

	commends *Pcommends = new commends;
	Pcommends->random();

	do
	{
		getline(cin, commend);
		if (commend == ArryCommends[0])
		{
			Pcommends->menu();
		}
		if (commend == ArryCommends[1])
		{
			cout<<Pcommends->my_money<<endl<<endl;
		}
		if (commend == ArryCommends[2])
		{
			cout << "what you want to buy? : ";
			getline(cin, commend);
			for (int i = 0; i < 5; i++)
			{
				if (commend == ArryCommendsBuy[i])
				{
					Pcommends->buy(i);
				}
			}
		}
		if (commend == ArryCommends[3])
		{
			Pcommends->help();
		}

	} while (Pcommends->my_money >= 0);

}