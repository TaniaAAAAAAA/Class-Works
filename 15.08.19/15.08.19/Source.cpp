#include<iostream>
#include<ctime>


using namespace std;

int Sum(int a, int b);
double Sum(double a, double b);
double Sum(double a, int b);
double Sum(int a, double b);

int Vid(int a, int b);
double Vid(double a, double b);
double Vid(double a, int b);
double Vid(int a, double b);

int Dob(int a, int b);
double Dob(double a, double b);
double Dob(double a, int b);
double Dob(int a, double b);


int Dil(int a, int b);
double Dil(double a, double b);
double Dil(double a, int b);
double Dil(int a, double b);



int Menu()
{
	int num = 0;
	cout << "1->  Suma\n2->  Vidnimania\n3->  Dobytok\n4->  Dilenia";
	cin >> num;
	return num;
}


int main()
{
	double a = 0, b = 0;
	double result = 0;
	int Men = 0;
	
	Men = Menu();
	cout << " Enter 1 digits -> ";
	cin >> a;
	cout << " Enter 2 digits -> ";
	cin >> b;

	 if (Men == 1)
	 {
		 result = Sum(a, b);
	 }
	 else if (Men == 2)
	 {
		 result = Vid(a, b);
	 }
	 else if (Men == 3)
	 {
		 result = Dob(a, b);
	 }
	 else if (Men == 4)
	 {
		 result = Dil(a, b);
	 }

	
	 cout << " Result = " << result << endl;


	system("pause");
	return 0;
}

int Sum(int a, int b)
{
	return a + b;
}
double Sum(double a, double b)
{
	return a + b;
}
double Sum(double a, int b)
{
	return a + b;
}
double Sum(int a, double b)
{
	return a + b;
}


int Vid(int a, int b)
{
	return a - b;
}
double Vid(double a, double b)
{
	return a - b;
}
double Vid(double a, int b)
{
	return a - b;
}
double Vid(int a, double b)
{
	return a - b;
}



int Dob(int a, int b)
{
	return a * b;
}
double Dob(double a, double b)
{
	return a * b;
}
double Dob(double a, int b)
{
	return a * b;
}
double Dob(int a, double b)
{
	return a * b;
}




int Dil(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else {
		cout << " ERROR!!!\n";
	}
}
double Dil(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else {
		cout << " ERROR!!!\n";
	}
}
double Dil(double a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else {
		cout << " ERROR!!!\n";
	}
}
double Dil(int a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else {
		cout << " ERROR!!!\n";
	}
}


