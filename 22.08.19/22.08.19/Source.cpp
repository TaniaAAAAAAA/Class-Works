#include<iostream>
#include<ctime>

using namespace std;

//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні
//
//int Sum(int begin, int end, int suma)
//	{
//	suma += begin;
//	begin++;
//	
//	if (begin == end)
//	{
//		return  suma;
//		
//	}
//	
//	Sum(begin, end, suma);
//
//	}
//
//int main()
//{
//	int begin = 0;
//	int end = 0;
//	int suma = 0;
//
//	cout << "Enter begin and end ->\n";
//	cin >> begin;
//	cin >> end;
//
//	suma=Sum( begin, end, suma);
//	cout << " Suma  = " << suma << endl;
//
//	system("pause");
//	return 0;
//}







//Написати рекурсивну функцію, яка отримує масив і повертає найбільший його елемент.



//
//void Fill(int mas[], int SIZE);
//void Print(int mas[], int SIZE);
//
//
//
//int Max(int mas[], int SIZE, int max, int i)
//{
//	
//		if (mas[i] > max)
//		{
//			max = mas[i];
//			
//		}
//
//		if (i == SIZE)
//		{
//			return max;
//		}
//
//		i++;
//	
//	
//	Max(mas, SIZE, max, i);
//}
//
//int main()
//{
//	const int SIZE = 10;
//	int mas[SIZE];
//	int i = 0;
//	srand(unsigned(time(NULL)));
//
//	Fill( mas, SIZE);
//    Print( mas, SIZE);
//
//	int max = 0;
//
//	 max=Max(mas,  SIZE, max, i);
//	 cout << "--- Max = " << max << endl;;
//
//	system("pause");
//	return 0;
//}
//
//
//void Fill(int mas[], int SIZE)
//{
//
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		mas[i] = rand() % 25 + -10;
//	}
//}
//
//
//void Print(int mas[], int SIZE)
//{
//
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		cout << "--- mas [" << i << "] = " << mas[i] << endl;
//	}
//}



void Fill(char mas[], const int SIZE);
void Print(char mas[], const int SIZE);

int Kil(char mas[], const int SIZE, int suma, int i)
{

	if (mas[i] == '1' || mas[i] == '2' || mas[i] == '3' || mas[i] == '4' || mas[i] == '5' || mas[i] == '6' || mas[i] == '7' || mas[i] == '8' || mas[i] == '9' || mas[i] == '0')
	{
		suma++;
	}



	if (i == SIZE)
	{
		return suma;
	}
	i++;
	Kil(mas, SIZE, suma, i);

}

int main()
{
	const int SIZE = 6;
	char mas[SIZE];
	int i = 0;
	int suma=0;


	 Fill( mas,  SIZE);
	 cout << "*******************************************>>\n";
	 Print( mas,  SIZE);

	suma= Kil(mas, SIZE, suma, i);
	cout << "*******************************************>>\n";
	cout << "  Suma char = " << suma << endl;
	cout << "*******************************************>>\n";

	system("pause");
	return 0;
}

void Fill(char mas[], const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{

		cin >> mas[i];
	}
}


void Print(char mas[], const int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{

		cout << "--- mas char [" << i << "] = " << mas[i] << endl;
	}
}