#include <string>
#include <iostream>
#include "clsString.h"
using namespace std;
int main()
{

    
        clsString String1;


        clsString String2("Mohammed");

        String1.Value = "Ali Ahmed";

        cout << "String1 = " << String1.Value << endl;
        cout << "String2 = " << String2.Value << endl;

        cout << "Number of words: " << String1.CountWords() << endl;

        cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

        cout << "Number of words: " <<
            clsString::CountWords("Mohammed Saqer Abu-Hadhoud") << endl;

        //----------------
        clsString String3("hi how are you?");

        cout << "String 3 = " << String3.Value << endl;

        cout << "String Length = " << String3.Length() << endl;

        String3.UpperFirstLetterOfEachWord();
        cout << String3.Value << endl;

        //----------------

        String3.LowerFirstLetterOfEachWord();
        cout << String3.Value << endl;

        //----------------

        String3.UpperAllString();
        cout << String3.Value << endl;

        //----------------

        String3.LowerAllString();
        cout << String3.Value << endl;

        //----------------

        cout << "After inverting a : "
            << clsString::InvertLetterCase('a') << endl;

        //----------------

        String3.Value = "AbCdEfg";

        String3.InvertAllLettersCase();
        cout << String3.Value << endl;

        String3.InvertAllLettersCase();
        cout << String3.Value << endl;

        //----------------

        cout << "Capital Letters count : "
            << clsString::CountLetters("Mohammed Abu-Hadhoud", clsString::CapitalLetters)
            << endl << endl;

        //----------------

        String3.Value = "Welcome to Jordan";
        cout << String3.Value << endl;

        cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

        //----------------

        cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

        //----------------

        cout << "vowels count :" << String3.CountVowels() << endl;

        //----------------

        cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

        //----------------

        cout << "is letter u vowel? " << clsString::IsVowel('a')
            << endl;

        //----------------

        cout << "Words Count" << String3.CountWords()
            << endl;

        //----------------


        vector<string> vString;

        vString = String3.Split(" ");

        cout << "\nTokens = " << vString.size() << endl;

        for (string& s : vString)
        {
            cout << s << endl;
        }

        //----------------

        //Tirms
        String3.Value = "    Mohammed Abu-Hahdoud     ";
        cout << "\nString     = " << String3.Value;

        String3.Value = "    Mohammed Abu-Hahdoud     ";
        String3.TrimLeft();
        cout << "\n\nTrim Left  = " << String3.Value;

        //----------------

        String3.Value = "    Mohammed Abu-Hahdoud     ";
        String3.TrimRight();
        cout << "\nTrim Right = " << String3.Value;

        //----------------

        String3.Value = "    Mohammed Abu-Hahdoud     ";
        String3.Trim();
        cout << "\nTrim       = " << String3.Value;

        //----------------

        //Joins
        vector<string> vString1 = { "Mohammed","Faid","Ali","Maher" };

        cout << "\n\nJoin String From Vector: \n";
        cout << clsString::JoinString(vString1, " ");


        string arrString[] = { "Mohammed","Faid","Ali","Maher" };

        cout << "\n\nJoin String From array: \n";
        cout << clsString::JoinString(arrString, 4, " ");

        //----------------

        String3.Value = "Mohammed Saqer Abu-Hahdoud";
        cout << "\n\nString     = " << String3.Value;

        String3.ReverseWordsInString();
        cout << "\nReverse Words : " << String3.Value
            << endl;

        //---------------

        String3.Value = "Mohammed Saqer Abu-Hahdoud";
        cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Sari")
            << endl;

        //---------------

        String3.Value = "This is: a sample text, with punctuations.";
        cout << "\n\nString     = " << String3.Value;

        String3.RemovePunctuations();
        cout << "\nRemove Punctuations : " << String3.Value
            << endl;

        //---------------
        system("pause>0");
        return 0;



	//clsString st1("Abdo MAgdy Abdelwahed");
	//	//st1.SetValue("body1");
	//	//st1.Value = "body2";	
	//	//cout<< st1.Value<<"\n";
	//cout << st1.GetValue()<< "\n";
	//	//relize that it is not making sense to get valus using proberty or getters as the variable(object)
	//	//it self contain the value of string we just need to get it directly
	//	// another reson that i want to make the fn deal with any random string withoud declare an object 
	//	//[use static to acess fn from any place in the system]
	//	//Or deal with object 
	//cout << st1.CountWords("we are fucked up strongly ") << "\n"; //cal for any string not related to object
	//cout << st1.CountWords(st1.Value) << "\n";  //call for variable related to object itself
	//cout << st1.CountWords() << "\n"; //call for variable related to object itself [normal fn call  inner static fn]
	//cout <<clsString:: CountWords("aziz gamal abu rawya") << "\n"; //call (from any place in system)static fn directly witout object


}
