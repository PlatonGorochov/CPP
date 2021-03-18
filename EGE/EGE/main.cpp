#include <iostream>

using namespace std;

void task1()
{
	/*
	пользователь вводит количество чисел, затем сами числа
	вывести те из них, которые оканчиваются на 7
	*/
	int amount = 0;
	cin >> amount;

	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;

		if (x % 10 == 7)
		{
			cout << x << " ";
		}
	}
}

void task2()
{
	/*
		пользователь вводит количество чисел, затем сами числа, вывести их сумму
		*/
	int amount = 0;
	int summ = 0;
	cin >> amount;
	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;
		summ += x;
	}
	cout << summ;
}

void task3()
{
	/*
		пользователь вводит количество чисел, затем сами числа, вывести их произведение
		*/
	int amount = 0;
	int product = 0;
	cin >> amount;
	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;
		product *= x;
	}
	cout << product;
}

void task4()
{
	/*
		пользователь вводит количество чисел, затем сами числа, затем вывести сумму чисел, кратных 3
		*/
	int amount = 0;
	int summ = 0;
	cin >> amount;
	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;
		if (x % 3 == 0)
		{
			summ += x;
		}
	}

	cout << summ;
}

void task5()
{
	int amount = 0;
	cin >> amount;

	int max = 0;

	for (int i = 0; i < amount; i++)
	{
		int x = 0;
		cin >> x;

		if (x > max)
		{
			max = x;
		}
	}

	cout << max;
}

void task6()
{
	/*
	пользователь вводит количество чисел, затем сами числа,
	вывести сумму чисел, кратных 3 и оканчивающихся на 2
	*/
	/*
	&& = and
	|| = or
	*/
	int amount = 0;
	int summ = 0;
	cin >> amount;
	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;
		if (x % 3 == 0 && x % 10 == 2)
		{
			summ += x;
		}
	}

	cout << summ;
}

void task7()
{
	/*
	пользователь вводит количество чисел, затем сами числа,
	вывести количество чисел, кратных 3 или 2
	*/
	int amount = 0;
	int quantity = 0;
	cin >> amount;
	for (int i = 1; i <= amount; ++i)
	{
		int x = 0;
		cin >> x;
		if (x % 3 == 0 || x % 2 == 0)
		{
			++quantity;
		}
	}

	cout << quantity;
}


void task20()
{
	int max = 0;
	int amount = 0;
	cin >> amount;

	for (int i = 1; i <= amount; i++)
	{
		int x = 0;
		cin >> x;

		if (x > max && x % 5 == 0)
		{
			max = x;
		}
	}

	cout << max;
}

void task40()
{
	int summ = 0;
	int amount = 0;
	cin >> amount;

	for (int i = 1; i <= amount; i++)
	{
		int x = 0;
		cin >> x;
		if (x % 6 == 0)
		{
			summ += x;
		}
	}
	cout << summ;
}

void task60()
{
	int amount = 0;
	cin >> amount;
	int count = 0;
	for (int i = 1; i <= amount; i++)
	{
		int y = 0;
		cin >> y;
		if (y % 4 == 0)
		{
			++count;
		}
	}
	cout << count;
}

void task80()
{
	int sum = 0;
	
	int number = 0;
	cin >> number;

	while (number != 0)
	{
		if (number % 6 == 0 && number % 10 == 4)
		{
			sum += number;
		}

		cin >> number;
	}

	cout << sum;
}

void task361()
{
	int N = 0;
	int count = 0;
	int maxSpeed = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int speed = 0;
		cin >> speed;
		if (speed > maxSpeed)
		{
			maxSpeed = speed;
		}
		if (speed < 30)
		{
			++count;
		}
	
	}
	if (count > 0)
	{
		cout << "YES" << " ";
	}
	else
	{
		cout << "NO" << " ";
	}
	cout << maxSpeed;
}

void task441()
{
	int max = 0;
	int min = 301;
	int N = 0;
	int y = 0;
	int count = 0;
	cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		int x = 0;
		cin >> x;
		if (x > max)
		{
			max = x;
		}
		if (x < min)
		{
			min = x;
		}
		if (x < 30)
		{
			++count;
		}
	}
	cout << max - min << " ";
	cout << count;
}

void task4609()
{
	int amount = 0;

	while (true)
	{
		int number = 0;
		cin >> number;

		if (number == 0)
		{
			break;
		}

		if (number % 9 == 0 || number % 5 == 0)
		{
			++amount;
		}
	}

	cout << amount;
}

void task4501()
{
	int amountOfDays = 0;
	cin >> amountOfDays;

	double sum = 0;
	int amountOfDaysLessThan5 = 0;

	for (int i = 0; i < amountOfDays; ++i)
	{
		int temperature = 0;
		cin >> temperature;

		if (temperature > 0)
		{
			++amountOfDaysLessThan5;
		}

		sum += temperature;
	}

	cout << sum / amountOfDays << endl << (amountOfDaysLessThan5 >= 5 ? "YES" : "NO");
}

void task341()
{
	int max1 = -30001;
	int max2 = -30001;
	int min1 = 30001;
	int min2 = 30001;
	
	int number = 0;
	cin >> number;
	while (number != 0)
	{
		if (number <= max1 && number > max2)
		{
			max2 = number;
		}

		if (number > max1)
		{
			max2 = max1;
			max1 = number;
		}

		if (number < min2 && number >= min1)
		{
			min2 = number;
		}

		if (number < min1)
		{
			min2 = min1;
			min1 = number;
		}
		cin >> number;
	}

	cout << min1 << " " << min2 << " " << max2 << " " << max1;
}

void secondMax()
{
	int max1 = 0;
	int max2 = 0;

	for (int i = 0; i < 5; i++)
	{
		int x = 0;
		cin >> x;

		bool case1 = x > max1;
		bool case2 = x > max2 && x <= max1;

		if (case1)
		{
			max2 = max1;
			max1 = x;
		}

		if (case2)
		{
			max2 = x;
		}
	}

	cout << max2 << " " << max1;
}

void task641()
{
	int summ = 0;
	int number = 0;
	cin >> number;
	while (number != 0)
	{
		if (number % 8 == 0 && number % 10 == 6)
		{
			summ += number;
		}
		cin >> number;
	}
	cout << summ;
}

void task200()
{
	int max = 0;
	int x = 0;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int y = 0;
		cin >> y;
		if (y % 10 == 3 && y > max)
		{
			max = y;
		}
	}
	cout << max;
}

void task1174()
{
	int number = 0;
	int amount = 0;
	cin >> number;
	while (number != 0)
	{
		if (number > 99 && number % 4 == 0)
		{
			amount++;
		}
		cin >> number;
	}
	cout << amount;
}

void task18284()
{
	int min = 300001;
	int x = 0;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int y = 0;
		cin >> y;
		if (y % 3 == 0 && y < min)
		{
			min = y;
		}
	}
	cout << min;
}

void task1154()
{
	int max = 0;
	int x = 0;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int y = 0;
		cin >> y;
		if (y % 10 == 3 && y > max)
		{
			max = y;
		}
	}
	cout << max;
}

void task27414()
{
	int summ = 0;
	int max = 0;
	for (int i = 1016; i <= 7937; i++)
	{
		if (i % 3 == 0 && i % 7 != 0 && i % 17 != 0 && i % 19 != 0 && i % 27 != 0)
		{
			summ++;
			max = i;
		}
	}
	cout << summ << max;
}

void task33189()
{
	int l[4] = { 11, 13, 17, 19 };
	int amount = 0;
	int min = 22001;
	for (int i = 11000; i <= 22000; i++)
	{
		int count = 0;
		for (int j = 0; j < 4; ++j)
		{
			if (i % l[j] == 0)
			{
				++count;
			}
		}

		if (count == 2)
		{
			++amount;
			if (i < min)
			{
				min = i;
			}
		}
	}

	cout << amount << min;
}

void task()
{
	int amount = 0;
	for (long long int i = 30000000000; i <= 50000000000; i++)
	{
		bool condition1 = (i % 100000 == 0 && i % 11 == 0);
		bool condition2 = (i % 17 != 0 && i % 23 != 0 && i % 41 != 0 && i % 103 != 0);

		if (condition1 && condition2)
		{
			++amount;
		}
	}
}

#include <fstream>

void task27421()
{
	fstream f("test.txt");

	int maxAmount = 1;
	int currentAmount = 1;

	if (f.eof())
	{
		cout << 0;
		return;
	}

	char previous;
	f >> previous;

	while (!f.eof())
	{
		char next;
		if (f.eof())
		{
			break;
		}
		f >> next;

		if (previous != next)
		{
			++currentAmount;

			previous = next;
		}
		else
		{
			if (currentAmount > maxAmount)
			{
				maxAmount = currentAmount;
				currentAmount = 1;
			}
		}
	}

	if (currentAmount > maxAmount)
	{
		maxAmount = currentAmount;
		currentAmount = 1;
	}

	cout << maxAmount;
}

void task27686()
{
	fstream f("24_demo.txt");

	int maxLength = 0;
	int currentLength = 0;

	while (!f.eof())
	{
		char symbol;

		f >> symbol;

		if (symbol == 'X')
		{
			++currentLength;
		}
		else
		{
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
				currentLength = 0;
			}
		}
	}

	if (currentLength > maxLength)
	{
		maxLength = currentLength;
		currentLength = 0;
	}

	cout << maxLength;
}

void task27689()
{
	fstream file("test.txt");

	int maxLength = 0;
	int currentLength = 0;

	int state = 0;
	/*
	x 1
	y 2
	z 3
	*/

	while (!file.eof())
	{
		char symbol = '\0';
		file >> symbol;

		if (state == 0 && symbol == 'X')
		{
			++currentLength;
			state = 1;
		}
		else if (state == 1 && symbol == 'Y')
		{
			++currentLength;
			state = 2;
		}
		else if (state == 2 && symbol == 'Z')
		{
			++currentLength;
			state = 0;
		}
		else
		{
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
			}

			if (symbol == 'X')
			{
				state = 1;
				currentLength = 1;
			}
			else
			{
				currentLength = 0;
				state = 0;
			}
		}
	}

	if (currentLength > maxLength)
	{
		maxLength = currentLength;
	}

	cout << maxLength;
}

int amountOfChar(string s, char symbol)
{
	int amount = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == symbol)
		{
			++amount;
		}
	}

	return amount;
}

void task29672()
{
	fstream file("test.txt");

	int amountOfLines = 0;

	while (!file.eof())
	{
		string s = "";
		file >> s;

		if (amountOfChar(s, 'a') < amountOfChar(s, 'e'))
		{
			++amountOfLines;
		}
	}
	cout << amountOfLines;
}

int numberInAlphabet(char letter)
{
	return (int)letter - (int)'a';
}

void task3319()
{
	fstream file("test.txt");
	
	int frequencies[26];

	for (int i = 0; i < 26; i++)
	{
		frequencies[i] = 0;
	}

	// (int)symbol - (int)'a' + 1

	char previous = '\0';
	char next = '\0';
	file >> previous;
	

	while (!file.eof())
	{
		file >> next;

		if (previous == 'A')
		{
			++frequencies[numberInAlphabet(next)];
		}
		
		previous = next;
	}


	int maxOfFrenquincies = 0;
	for (int x = 0; x < 26; x++)
	{
		if (frequencies[x] > maxOfFrenquincies)
		{
			maxOfFrenquincies = frequencies[x];
		}
	}

	cout << maxOfFrenquincies;
}

void task33769()
{
	fstream file("test.txt");
	int frequencies[26];
	for (int i = 0; i < 26; i++)
	{
		frequencies[i] = 0;
	}

	char previousSymbol = '\0';
	char prepreviousSymbol = '\0';
	file >> prepreviousSymbol >> previousSymbol;

	while (!file.eof())
	{
		char symbol = '\0';
		file >> symbol;

		if (prepreviousSymbol == previousSymbol)
		{
			++frequencies[(int)symbol - (int)'a'];
		}

		prepreviousSymbol = previousSymbol;
		previousSymbol = symbol;
	}

	int maxFrequency = 0;
	int index = -1;

	for (int i = 0; i < 26; i++)
	{
		if (frequencies[i] > maxFrequency)
		{
			maxFrequency = frequencies[i];
			index = i;
		}
	}

	cout << (char)(index + (int)'a');
}

int main()
{
	
	
	return 0;
}