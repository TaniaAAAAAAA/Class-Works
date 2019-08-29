#include<iostream>
#include<ctime>

using namespace std;

void Fun( int *a, int *b, int *c)
{


	cout << " Dob = " << *a * *b * *c << endl;
	cout << " Ser = " << (*a + *b + *c) / 3 << endl;

	int min = *a;
	if (*b <= min)
	{
		min = *b;
	}
	else if (*c <= min)
	{
		min = *c;
	}
	else
	{
		min = *a;
	}
	cout << " min = " << min << endl;
}



void Fill(int mas[], const int SIZE);
void Print(int mas[], const int SIZE);
void SumaF(int mas[], const int SIZE, int *Suma);

void Max(int mas[], const int SIZE, int *max);
void Min(int mas[], const int SIZE, int *min);

int main()
{


	//C++
	//	Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох заданих
	//чисел, середє арифметичне,
	//	найменше з них, користуючись непрямим доступом до чисел(через вказівники).



	/*int a = 10;
	int b = 8;
	int c = 12;

	int *pA = &a;
	int *pB = &b;
	int *pC = &c;
	
	Fun( pA,  pB, pC);*/

	srand(unsigned(time(NULL)));
	/*Дано цілочисельний одновимірний масив.Заповнити його, вивести на екран у прямому
		та зворотньому порядку та порахувати суму елементів з використанням 
		вказівників.

*/
	/*const int SIZE = 5;
	int mas[SIZE];
	int Suma = 0;
	int *pSuma = &Suma;



	 Fill( mas,   SIZE);
	 Print( mas,   SIZE);
	 SumaF( mas,   SIZE, pSuma);
*/


	const int SIZE = 5;
	int mas[SIZE];
	int max = mas[0];
	int min = 1;

	int *pmax = &max;
	int *pmin = &min;

	Fill(mas, SIZE);
	Print(mas, SIZE);

	 Max( mas,   SIZE,  pmax);
	 Min(mas, SIZE, pmin);



	system("pause");
	return 0;
}

void Fill(int mas[], const int SIZE)
{
	for(int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 10 + 0;

	}
}


void Print(int mas[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "mas[" << i << "] = " << mas[i] << endl;

	}

	cout << "======================================================\n";

	//for (int i = SIZE-1; i >= 0; i--)
	//{
	//	cout << "mas[" << i << "] = " << mas[i] << endl;

	//}

}

void SumaF(int mas[], const int SIZE, int *Suma)
{
	
	for (int i = 0; i < SIZE; i++)
	{
		*Suma += mas[i];
	}
	cout << " Suma = " << *Suma << endl;
}


void Max(int mas[], const int SIZE,int *max)
{

	for (int i = 0; i < SIZE; i++)
	{
		if (mas[i] > *max)
		{
			*max = mas[i];
		}
	}
	cout << " max = " << *max << endl;


}


void Min(int mas[], const int SIZE,  int *min)
{

	for (int i = 0; i < SIZE; i++)
	{
		if (mas[i] < *min)
		{
			*min = mas[i];
		}
	}
	cout << " min = " << *min << endl;
}

