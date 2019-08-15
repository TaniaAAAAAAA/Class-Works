
#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	/*int mas[10];
	srand(unsigned(time(NULL)));

	for (int i = 0; i < 10; i++)
	{

		mas[i] = rand() % 10 + 1;
	}

	for (int i = 0; i < 10; i++)
	{

		cout << " Mas [ " << i+1 << " ] = " << mas[i] << endl;;
	}

	cout << "========================================>>>\n";


	for (int i = 0; i < 10; i++)
	{

		
		if (mas[i] < mas[i+1])
		{
			cout << mas[i]<<endl;
		}
		else
		{
			cout << mas[i + 1]<<endl;
		}

	}

	for (int i = 0; i < 10; i++)
	{

		cout << " Mas [ " << i + 1 << " ] = " << mas[i] << endl;;
	}
*/























//
//#include <iostream>
//#include <ctime>
//
//	using namespace std;
//
//	int main() {
//		srand(unsigned(time(NULL)));
//
//		const int SIZE = 10;
//		int arr[SIZE];
//
//		for (int i = 0; i < SIZE; i++) {
//			arr[i] = rand() % 10 + 1;
//		}
//		cout << "Before --------------------------->>>" << endl;
//		for (int i = 0; i < SIZE; i++) {
//			cout << arr[i] << endl;
//		}
//		cout << "Before --------------------------->>>" << endl;
//
//		for (int i = SIZE - 1; i >= 1; i--) {
//			for (int j = 0; j < i; j++)
//			{
//				if (arr[j] > arr[j + 1]) 
//				{
//					int tmp = 0;
//					tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//
//		cout << "After ---------------------------->>>" << endl;
//		for (int i = 0; i < SIZE; i++) {
//			cout << arr[i] << endl;
//		}
//		cout << "After ---------------------------->>>" << endl;
//














//
//const int SIZE = 5;
//int A[SIZE];
//int B[SIZE];
//srand(unsigned(time(NULL)));
//
//for (int i = 0; i < 5; i++)
//{
//
//	A[i] = rand() % 10 + 1;
//}
//
//cout << "================== A [i] ======================>>>\n";
//for (int i = 0; i < 5; i++)
//{
//
//	cout << " Mas [ " << i + 1 << " ] = " << A[i] << endl;;
//}
//
//cout << "========================================>>>\n";
//
//for (int i = 0; i < 5; i++)
//{
//
//	B[i] = A[i];
//}
//cout << "=================== B [i] =====================>>>\n";
//for (int i = 0; i < 5; i++)
//{
//
//	cout << " Mas [ " << i + 1 << " ] = " << B[i] << endl;;
//}
//
//
//cout << "========================================>>>\n";
//
















//
//const int K = 5;
//int A[K];
//int B[K];
//int C[K * 2];
//srand(unsigned(time(NULL)));
//
//
//for (int i = 0; i < K; i++)
//{
//	A[i] = rand() % 10 + 1;
//}
//cout << "================== A [i] ======================>>>\n";
//for (int i = 0; i < K; i++)
//{
//	cout << " Mas [ " << i + 1 << " ] = " << A[i] << endl;;
//}
//cout << "========================================>>>\n";
//
//
//
//for (int i = 0; i < K; i++)
//{
//	B[i] = rand() % 10 + 1;
//}
//cout << "=================== B [i] =====================>>>\n";
//for (int i = 0; i < K; i++)
//{
//	cout << " Mas [ " << i + 1 << " ] = " << B[i] << endl;;
//}
//cout << "========================================>>>\n";
//
//
//
//
//	
//	for (int i = 0; i < K ; i++)
//	{
//		C[i] = A[i];
//	}
//
//	for (int i = K; i < K * 2; i++)
//	{
//		C[i] = B[i-K];
//	}
//
//cout << "=================== C [i] =====================>>>\n";
//for (int i = 0; i < K*2; i++)
//{
//	cout << " Mas [ " << i + 1 << " ] = " << C[i] << endl;;
//}
//cout << "========================================>>>\n";
//




		//for (int i = K*2 - 1; i >= 1; i--) {
		//	for (int j = 0; j < i; j++)
		//	{
		//		if (C[j] > C[j + 1]) 
		//		{
		//			int tmp = 0;
		//			tmp = C[j];
		//			C[j] = C[j + 1];
		//			C[j + 1] = tmp;
		//		}
		//	}
		//}

		//cout << "Sort ---------------------------->>>" << endl;
		//for (int i = 0; i < K*2; i++) {
		//	cout <<"     "<< C[i] << endl;
		//}
		//cout << "Sort ---------------------------->>>" << endl;










//
//
//const int K = 6;
//int A[K];
//int B[K / 2];
//int C[K / 2];
//srand(unsigned(time(NULL)));
//
//
//for (int i = 0; i < K; i++)
//{
//	A[i] = rand() % 20 + 1;
//}
//cout << "================== A [i] ======================>>>\n";
//for (int i = 0; i < K; i++)
//{
//	cout << " Mas [ " << i + 1 << " ] = " << A[i] << endl;;
//}
//cout << "========================================>>>\n";
//
//
//
//for (int i = 0; i < K/2; i++)
//{
//	B[i] = A[i];
//}
//cout << "=================== B [i] =====================>>>\n";
//for (int i = 0; i < K/2; i++)
//{
//	cout << " Mas [ " << i + 1 << " ] = " << B[i] << endl;;
//}
//cout << "========================================>>>\n";
//
//
//
//
//
//for (int i = K/2; i < K; i++)
//{
//	C[i] = A[i];
//}
//
//
//
//cout << "=================== C [i] =====================>>>\n";
//
//for (int i = K / 2; i < K; i++)
//{
//		
//cout << " Mas [ " << i << " ] = " << C[i] << endl;
//			
// }
//cout << "========================================>>>\n";













const int SIZE = 30;
int mas[SIZE];

for (int i = 0; i < SIZE; i++)
{
	mas[i] = pow(2,i);
}





cout << "=================== mas [i] zrost =====================>>>\n";
for (int i = 0; i < SIZE; i++)
{
	cout << " Mas [ " << i + 1 << " ] = " << mas[i] << endl;;
}
cout << "========================================>>>\n";





cout << "=================== mas [i] spad =====================>>>\n";
for (int i = SIZE; i >= 0; i--)
{
	cout << " Mas [ " << i + 1 << " ] = " << mas[i] << endl;;
}
cout << "========================================>>>\n";










		system("pause");
		return 0;
	}
	