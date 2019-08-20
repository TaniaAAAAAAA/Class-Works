#include<iostream>
#include<ctime>


//C++
//Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
//шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
//функцію, яка повертає кількість відємних елементів масиву
//перевантажені функції :
//-для знаходження середнього арифметичного елементів масиву
//- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами
//

using namespace std;
//
//void Fill(int mas1[], int SIZEint);
//void Fill(double mas2[], int SIZEdouble);
//
//template<typename T>
//void Print(T mas[], const int SIZE);
//
//template<typename T>
//int KilVid(T mas[], const int SIZE);
//
//void Ser(int mas1[], int SIZEint);
//void Ser(double mas2[], int SIZEdouble);
//
//void Max(int mas1[], int SIZEint);
//void Max(double mas2[], int SIZEdouble);
//
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	int chois = 0;
//	const int SIZEint = 10 ;
//	const int SIZEdouble = 7;
//	int SIZE = 0;
//	int mas1[SIZEint];
//	double mas2[SIZEdouble];
//
//	cout << " 1 - int\n 2 - double\n Enter : ";
//	cin >> chois;
//	switch (chois)
//	{
//	case 1: 
//		SIZE = SIZEint;
//		Fill(mas1, SIZE);
//		Print(mas1, SIZE); 
//		KilVid(mas1, SIZE);
//		Ser( mas1, SIZEint);
//		Max(mas1, SIZEint);
//		break;
//	case 2:
//		SIZE = SIZEdouble;
//		Fill(mas2, SIZE);
//		Print(mas2, SIZE);
//		KilVid(mas2, SIZE);
//		Ser( mas2, SIZEdouble);
//		Max( mas2, SIZEdouble);
//		break;
//	default:
//		cout << "*\n";
//		
//	}
//
//	
//	
//
//	system("pause");
//	return 0;
//}
//
//
//void Fill(int mas1[], int SIZEint)
//{
//	for (int i = 0; i < SIZEint; i++)
//	{
//		mas1[i] = rand() % 20 + -12;
//	}
//}
//void Fill(double mas2[], int SIZEdouble)
//{
//	for (int i = 0; i < SIZEdouble; i++)
//	{
//		mas2[i] = rand() % 20 + -12.4;
//	}
//}
//
//
//
//template<typename T>
//void Print(T mas[], const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout<<"----- Mas ["<<i<<"] = "<<mas[i]<<endl;
//	}
//}
//
//
//
//template<typename T>
//int KilVid(T mas[], const int SIZE)
//{
//	int kil = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (mas[i] < 0)
//		{
//			kil++;
//		}
//	}
//	cout << "===================================== >>\n";
//			cout << "****** Kil vid  = " << kil << endl;
//			
//		return kil;
//		
//	
//}
//
//void Ser(int mas1[], int SIZEint)
//{
//	int ser = 0;
//	int suma = 0;
//	for (int i = 0; i < SIZEint; i++)
//	{
//		suma += mas1[i];
//	}
//	ser = suma / SIZEint;
//	cout << "===============================>>\n";
//	cout << "----- ser = " << ser << endl;
//}
//
//
//void Ser(double mas2[], int SIZEdouble)
//{
//	double ser = 0;
//	double suma = 0;
//	for (int i = 0; i < SIZEdouble; i++)
//	{
//		suma += mas2[i];
//	}
//	ser = suma / SIZEdouble;
//	cout << "===============================>>\n";
//	cout << "----- ser = " << ser << endl;
//}
//
//
//void Max(int mas1[], int SIZEint)
//{
//	int max = mas1[0];
//	for (int i = 0; i < SIZEint; i++)
//	{
//		if (mas1[i] > max)
//		{
//			max = mas1[i];
//		}
//	}
//	
//	cout << "===============================>>\n";
//	cout << "----- max = " << max << endl;
//}
//
//
//
//void Max(double mas2[], int SIZEdouble)
//{
//	double max = mas2[0];
//	for (int i = 0; i < SIZEdouble; i++)
//	{
//		if (mas2[i] > max)
//		{
//			max = mas2[i];
//		}
//	}
//
//	cout << "===============================>>\n";
//	cout << "----- max = " << max << endl;
//}
//
//


//C++
//Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності.Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
//шаблонну функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні[1..30]
//функцію Print(), яка виводить елементи масиву на екран в вигляді матриці.
//функцію, яка виводить на екран вказаний рядок



const int SIZEint1 = 7;
const int SIZEint2 = 5;
const int SIZEdouble1 = 3;
const int SIZEdouble2 = 4;

template<typename T>
void Fill(T mas[SIZEint1][SIZEint2]);

template<typename T>
void Fill(T mas1[SIZEdouble1][SIZEdouble2]);

template<typename T>
void Print(T mas[SIZEint1][SIZEint2]);

template<typename T>
void Print(T mas1[SIZEdouble1][SIZEdouble2]);


int main()
{
	srand(unsigned(time(NULL)));
	
	int mas1[SIZEint1][SIZEint2];
	int mas2[SIZEdouble1][SIZEdouble2];


	Fill( mas1);
	Print(mas1);

	Fill( mas2);
    Print( mas2);

	system("pause"); 
		return 0;

}
template<typename T>
void Fill(T mas1[SIZEint1][SIZEint2])
{
	for (int i = 0; i < SIZEint1; i++)
	{
		for (int j = 0; j < SIZEint2; j++)
		{
				mas1[i][j] = rand() % 30 + 1;
			
		}
	}
	
}
template<typename T>
void Fill(T mas1[SIZEdouble1][SIZEdouble2])
{
	for (int i = 0; i < SIZEdouble1; i++)
	{
		for (int j = 0; j < SIZEdouble2; j++)
		{
			mas1[i][j] = rand() % 30 + 1;

		}
	}

}

template<typename T>
void Print(T mas1[SIZEint1][SIZEint2])
{
	cout << "============================>>\n";
	for (int i = 0; i < SIZEint1; i++)
	{
		for (int j = 0; j < SIZEint2; j++)
		{
			cout << mas1[i][j]<<"    ";


		}
		cout << endl;
	}
	cout<<"==========================>>\n";
}

template<typename T>
void Print(T mas1[SIZEdouble1][SIZEdouble2])
{
	for (int i = 0; i < SIZEdouble1; i++)
	{
		for (int j = 0; j < SIZEdouble2; j++)
		{
			cout << mas1[i][j] << "    ";


		}
		cout << endl;
	}
	cout << "==========================>>\n";
}





