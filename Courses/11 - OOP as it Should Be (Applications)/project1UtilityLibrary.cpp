// project1UtilityLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsUtil.h"
using namespace std;

int main()
{
    cout << clsUtil::Srand() << "\n";

    cout << clsUtil::randomNumberInRange(50, 70) << "\n";
    cout << clsUtil::getRandomCharcter(clsUtil::capital) << "\n";
    {
        cout << clsUtil::getRandomCharcter(clsUtil::capital) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::capital) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::capital) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::small) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::small) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::small) << "\n";
        cout << clsUtil::getRandomCharcter(clsUtil::small) << "\n";
    }

    cout << clsUtil::GenerateWord(clsUtil::mixChars, 8) << "\n";
    cout << clsUtil::Generatekey(clsUtil::mixChars) << "\n";
    {
        cout << clsUtil::GenerateWord(clsUtil::CharsOnly, 8) << "\n";
        cout << clsUtil::Generatekey(clsUtil::CharsOnly) << "\n";
    }

    //swapping
    {
        //swap string
        string s1 = "abdo", s2 = "magdy";
        cout << s1 << " " << s2 << endl;
        clsUtil::swap(s1, s2);//relize that i need to declare fn as static to access without object
        cout << s1 << " " << s2 << endl;
        //swap numbers
        short n1 = 5, n2 = 10;
        cout << n1 << " " << n2 << endl;
        clsUtil::swap(n1, n2);
        cout << n1 << " " << n2 << endl;
        //swap dates 
        clsDate date1(1, 12, 2022); clsDate date2;//relize that i (DONT) need to declare fn as static because it deal with objects
        date1.Print(); date2.Print();
        swap(date1, date2);
        date1.Print(); date2.Print();
    }
{
    //shuffle
    short arr1[5] = { 10,20,40,50,100 };
    clsUtil::shuffelArrayOfIntegers(arr1, 5);

    string arr2[5] = { "Abdo","DeDe","Magdy","hussien","Aziz" };
    clsUtil::shuffelArrayOfStrings(arr2, 5);
}
//Filling array
{
    short arr3[5] ;
    clsUtil::FillArrayWithRandomNubersInRange(arr3, 5 ,100,110);

    string arr4[5];
    clsUtil::FillArrayWithRandomWords(arr4,5,1);

    string arr5[5];
    clsUtil::FillArrayWithRandomKeys(arr5, 5, clsUtil::mixChars);

    string arr6[5];
    clsUtil::FillArrayWithRandomKeys(arr6, 5, clsUtil::CharsOnly);
}
//add tabs
{
    cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

    const short EncryptionKey = 2; //this is the key.

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Mohammed Abu-Hadhoud";
    TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;

}
return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
