#include<iostream>
#includeБfstream>
#include<ctime>
using namespace std;

void Code_N()
{
	//setlocale(LC_ALL, "Rus"); 
	int i = 0, count_number = 0;
	char simbol;
	int direction;

	cout << "Insert count simbol: ";

	cin >> count_number;

	cout << "What is simbol? " <<
		"2.Gorizontal" << "1.Vertical";

	cin >> direction;

	simbol = 'w';

	switch (direction)
	{
	case 1:
		while (i < count_number)
		{
			cout << simbol;
			i++;
		}
		break;
	case 2:
		while (i < count_number)
		{
			cout << simbol << '\n';
			i++;
		}
		break;

	default:
		break;
	}
}

void Code7()
{
	//Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand. srand ДЗ #7 и найти min number; 
	int const SIZE = 10;
	srand(time(NULL));

	int arr[SIZE];
	int min_number = 100;
	int number_rand;
	for (int i = 0; i < SIZE; i++)
	{
		bool rec = true;
		number_rand = rand() % 100;
		for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
		{
			if (arr[k] == number_rand)
				rec = false;
		}

		if (rec)
			arr[i] = number_rand;

		if (min_number > number_rand)
			min_number = number_rand;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "MIN NUMBER: " << min_number << endl;
	system("pause");
} 

template <typename T, typename U> 
T sum(T a, U b)
{
	return a + b;
}

int Factorial(int number)
{
	if (number == 0)
		return 0;
	if(number == 1)
		return 1;  	

	return number * Factorial(number - 1);
}

void ChangeValue(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void LinkMemory(int *pa)
{
	//////////////////////////memory links
	//int a = 5;
	//int *px = &a;
	// cout << px << endl;

	//int arr[5]{ 4,7,1,4,2 };
	//cout << arr << endl; //first element array;

	//(*pa)++;

	


}
template <typename T, typename U>
void TemplateFunc(T *px,  U *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

//ДЗ написать ШАБЛОННУЮ функцию которая меняет местами значения 2-х переменных с помощью ССЫЛОК.


int main()
{  
 

	 
	  
	int a = 1;
	string	b = "Test";

	cout << a << endl;
	cout << b << endl; 
	TemplateFunc(&a, &b);  
	cout << a << endl;
	cout << b << endl; 
	  
	 


	system("pause"); 
}

