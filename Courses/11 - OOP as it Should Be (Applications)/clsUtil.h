#pragma once
#include <iostream>
#include <cstdlib>      // rand(), srand()
#include <ctime>
#include <random> 
#include <string> 
#include "clsString.h"
#include "clsDate.h"
using namespace std;
class clsUtil
{

public:
	
	static	short mixChars;
	static	short CharsOnly;
	static	short capital;
	static	short small;
	static short Srand()
	{
		srand(time(0));
		return rand();
	}

	static short randomNumberInRange(short min,short max)
	{
		return (rand()% (max -min +1 ) )+ min ;
	}

	static char getRandomCharcter(short choice)
	{
		
		// ? true cap: false small  
		return choice ?  char(randomNumberInRange(65, 90)): char(randomNumberInRange(97, 122)) ;
	}
	
	static string GenerateWord(short mixOrNot,short size)
	{
		string s = "";
		for (short i = 0; i < size; i++)
		{
			if (mixOrNot == 1)
				s += randomNumberInRange(0, 1) ? getRandomCharcter(randomNumberInRange(0, 1)) : char(randomNumberInRange(0, 9) + 48);
			else if (mixOrNot == 0)
			{
				s += getRandomCharcter(randomNumberInRange(0, 1));
			}
		}
		return s;
	}
	static string Generatekey(short mixOrNot)
	{
		string key = "";
		for (short i = 0; i < 4; i++)
			key += GenerateWord(mixOrNot, 4) +"-";
		key.pop_back();
		return key;
	}
	static void swap(string &s1, string &s2)
	{
		std:: swap(s1, s2);
	}
	static void swap(short & num1, short& num2)
	{
		std:: swap(num1, num2);
	}
	static void swap(clsDate& d1, clsDate& d2)
	{
		short temp_d, temp_m, temp_y;
		temp_d =d1.GetDay();
		temp_m = d1.GetMonth();
		temp_y = d1.GetYear();
		d1.SetDay(d2.GetDay());
		d1.SetMonth(d2.GetMonth());
		d1.SetYear(d2.GetYear());

		d2.SetDay(temp_d);
		d2.SetMonth(temp_m);
		d2.SetYear(temp_y);
	}

	static void shuffelArrayOfIntegers(short* arr, short size)
	{
		for (short i = 0; i <= size/2; i++)
		{
			std::swap(arr[i], arr[randomNumberInRange(0,size-1)]);
		}
	}
	static void shuffelArrayOfStrings(string* arr, short size)
	{
		for (short i = 0; i <= size / 2; i++)
		{
			std::swap(arr[i], arr[randomNumberInRange(0, size - 1)]);
		}
	}
	static void FillArrayWithRandomNubersInRange(short* arr, short size, short min, short max)
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = randomNumberInRange(min, max);
		}
	}
	static void FillArrayWithRandomWords(string * arr, short size,short mix)
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = GenerateWord(mix,8);
		}
	}
	static void FillArrayWithRandomKeys(string* arr, short size ,short mix)
	{
		for (short i = 0; i < size; i++)
		{
			arr[i] = Generatekey(mix);
		}
	}

	static string  Tabs(short NumberOfTabs)
	{
		string t = "";

		for (int i = 1; i < NumberOfTabs; i++)
		{
			t = t + "\t";
			cout << t;
		}
		return t;

	}

	static string  EncryptText(string Text, short EncryptionKey)
	{

		for (int i = 0; i <= Text.length(); i++)
		{

			Text[i] = char((int)Text[i] + EncryptionKey);

		}

		return Text;

	}

	static string  DecryptText(string Text, short EncryptionKey)
	{

		for (int i = 0; i <= Text.length(); i++)
		{

			Text[i] = char((int)Text[i] - EncryptionKey);

		}
		return Text;
	}


};

short clsUtil::mixChars = 1;
short clsUtil::CharsOnly = 0;

short clsUtil::capital = 1;
short clsUtil::small = 0;