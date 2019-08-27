#include<iostream>
#include<ctime>

using namespace std;

//Rock, Paper, Scissors Game.Write a program that lets the user play the game of Rock, Paper, Scissors against the computer.The program should work as follows.
//1. When the program begins, a random number in the range of 1 through 3 is generated.If the number is 1, then the computer has chosen rock.If the number is 2,
//then the computer has chosen paper.If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
//2. The user enters his or her choice of rock, paper, or scissors at the keyboard.
//(You can use a menu if you prefer.)
//3. The computer’s choice is displayed.
//4. A winner is selected according to the following rules :
//
//If one player chooses rock and the other player chooses scissors, then rock
//wins. (The rock smashes the scissors.)
//
//If one player chooses scissors and the other player chooses paper, then scissors
//wins. (Scissors cuts paper.)
//
//If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)
//
//If both players make the same choice, the game must be played again to determine the winner.
//Be sure to divide the program into functions that perform each major task.




//int FillBill(int playerBill);
//int Fillplayer(int player1);
//int Play1(int player1, int playerScore1, int playerBill, int playerScoreBill);
//int Play2(int player1, int playerScore1, int playerBill, int playerScoreBill);
//int Play3(int player1, int playerScore1, int playerBill, int playerScoreBill);
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int player1 = 0;
//	int playerBill = 0;
//
//	int playerScore1 = 0;
//	int playerScoreBill = 0;
//
//	//playerBill = FillBill( playerBill);
//	////cout << "	playerBill = " << playerBill << endl;
//	//
//
//	//cout << "\n---------------- HELLO ----------------------\n";
//	//cout << " 1 - Rock\n2 - Paper\n3 - Scissors\n";
//	//cout << " Enter number ->  ";
//	// Fillplayer( player1);
//
//	//Play(player1, playerScore1, playerBill, playerScoreBill);
//
//
//
//
//
//
//	if (playerScore1 <= 3|| playerScoreBill<=3)
//	{
//		playerBill = FillBill(playerBill);
//		cout << "	playerBill = " << playerBill << endl;
//		cout << "\n---------------- HELLO ----------------------\n";
//		cout << " 1 - Rock\n2 - Paper\n3 - Scissors\n";
//		cout << " Enter number ->  ";
//		Fillplayer(player1);
//		Play(player1, playerScore1, playerBill, playerScoreBill);
//		
//	}
//
//
//	if (playerScore1 == 3)
//	{
//
//		//return playerScore1;
//		cout << " ---------  Win player!!! --------\n";
//	}
//	else if (playerScoreBill == 3)
//	{
//		//return playerScoreBill;
//
//		cout << " ---------  Win Bill!!! --------\n";
//	}
//	
//	system("pause");
//	return 0;
//}
//
//
//
//int FillBill(int playerBill)
//{
//	playerBill = rand() % 3 + 1;
//	return playerBill;
//
//}
//
//
//int Fillplayer(int player1)
//{
//	cin >> player1;
//	return player1;
//
//}
//int  Play1(int player1, int playerScore1, int playerBill, int playerScoreBill)
//{
//
//	if (playerBill == 1 && player1 == 3)
//	{
//		playerScoreBill++;
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//
//		//system("pause");
//	}
//	else
//	{
//		playerScore1++;
//
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//
//		//	system("pause");
//	}
//}
//
//int  Play2(int player1, int playerScore1, int playerBill, int playerScoreBill)
//{
//	if (playerBill == 3 && playerScore1 == 2)
//	{
//		playerScore1++;
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//	}
//	else
//	{
//		playerScoreBill++;
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//		//system("pause");
//	}
//}
//int  Play3(int player1, int playerScore1, int playerBill, int playerScoreBill)
//{
//	if (playerBill == 2 && player1 == 1)
//	{
//		playerScoreBill++;
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//		//system("pause");
//	}
//	else
//	{
//		playerScore1++;
//		cout << "------- playerScoreBill  = " << playerScoreBill << "----------- playerScore1 = " << playerScore1 << endl;
//		//system("pause");
//	}
//
//}
//
////
////	if (playerScore1 == 3)
////	{
////
////		return playerScore1;
////		cout << " ---------  Win player!!! --------\n";
////	}
////	else if( playerScoreBill == 3)
////	{
////		return playerScoreBill;
////
////		cout << " ---------  Win Bill!!! --------\n";
////	}
////	
////}


double SSS(int a, int b, int c, int S );
double SSS(int h, int c, double S);
int Isnyv(int a, int b, int c, int i, double S);

int main()
{
	int a = 0; 
	int b = 0;
	int c = 0;
	int p = 0;
	double S = 0;
	int h = 0;
	int i = 0;

	cout << " ---Enter a, b, c ->> \n";
	cin >> a >> b >> c;

	Isnyv( a,  b,  c, i, S);

	//if (i == 1)
	//{
	//	S = SSS(a, b, c, S);
	//	cout << "  S = " << S << endl;
	//}

	cout << " ---Enter h, c ->> \n";
	cin >> h >> c;
	S= SSS( h,  c, S);
	cout << "  S = " << S << endl;

	system("pause");
	return 0;
}


int Isnyv(int a, int b, int c, int i, double S)
{
	if (a + b > c&& a + c > b&& b + c > a)
	{
		cout << "ccccccccccccc" << endl;
		i = 1;
		S = SSS(a, b, c, S);
		cout << "  S = " << S << endl;
	}
	
	else
	{
		cout << " neisnue     \n";
	}
}



double SSS(int a, int b, int c, double S )
{
	int p = 0;
	
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a)*(p - b)*(p - c));

	return S;
}


double SSS(int h, int c, int S)
{
	
	S = 0.5*c*h;

	return S;
}