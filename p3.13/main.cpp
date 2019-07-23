/*
 ••• P3.13Roman numbers. Write a program that converts a positive integer into the Roman number system. The Roman number system has digits
 I  1
 V  5
 X  10
 L  50
 C  100
 D  500
 M  1,000
 Numbers are formed according to the following rules.
 
 a.Only numbers up to 3,999 are represented.
 
 b.As in the decimal system, the thousands, hundreds, tens, and ones are expressed separately.
 
 c.The numbers 1 to 9 are expressed as
 
 I      1
 II     2
 III    3
 IV     4
 V      5
 VI     6
 VII    7
 VIII   8
 IX     9
 As you can see, an I preceding a V or X is subtracted from the value, and you can never have more than three I’s in a row.
 
 d.Tens and hundreds are done the same way, except that the letters X, L, C and C, D, M are used instead of I, V, X, respectively.
 
 Your program should take an input, such as 1978, and convert it to Roman numerals, MCMLXXVIII.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter integer up to 3,999: ";
    int integer;
    cin >> integer;
    string roman_numeral;

    if (integer >= 1000)
    {
        roman_numeral += "M";
        integer -= 1000;
        if (integer >= 1000)
        {
            roman_numeral += "M";
            integer -= 1000;
            if (integer >= 1000)
            {
                roman_numeral += "M";
                integer -= 1000;
            }
        }
    }
    if (integer >= 900)
    {
        roman_numeral += "CM";
        integer -= 900;
    }
    if (integer >= 500)
    {
        integer -= 500;
        roman_numeral += "D";
        if (integer >= 100)
        {
            roman_numeral += "C";
            integer -= 100;
            if (integer >= 100)
            {
                roman_numeral += "C";
                integer -= 100;
                if (integer >= 100)
                {
                    roman_numeral += "C";
                    integer -= 100;
                }
            }
        }
    }
    if (integer >= 400)
    {
        roman_numeral += "CD";
        integer -= 400;
    }
    if (integer >= 100)
    {
        roman_numeral += "C";
        integer -= 100;
        if (integer >= 100)
        {
            roman_numeral += "C";
            integer -= 100;
            if (integer >= 100)
            {
                roman_numeral += "C";
                integer -= 100;
            }
        }
    }
    if (integer >= 90)
    {
        roman_numeral += "XC";
        integer -= 90;
    }
    if (integer >= 50)
    {
        integer -= 50;
        roman_numeral += "L";
        if (integer >= 10)
        {
            roman_numeral += "X";
            integer -= 10;
            if (integer >= 10)
            {
                roman_numeral += "X";
                integer -= 10;
                if (integer >= 10)
                {
                    roman_numeral += "X";
                    integer -= 10;
                }
            }
        }
    }
    if (integer >= 40)
    {
        roman_numeral += "XL";
        integer -= 40;
    }
    if (integer >= 10)
    {
        roman_numeral += "X";
        integer -= 10;
        if (integer >= 10)
        {
            roman_numeral += "X";
            integer -= 10;
            if (integer >= 10)
            {
                roman_numeral += "X";
                integer -= 10;
            }
        }
    }
    if (integer >= 9)
    {
        roman_numeral += "IX";
        integer -= 9;
    }
    if (integer >= 5)
    {
        roman_numeral += "V";
        if (integer >= 5)
        {
            integer -= 5;
            if (integer >= 1)
            {
                roman_numeral += "I";
                integer -= 1;
                if (integer >= 1)
                {
                    roman_numeral += "I";
                    integer -= 1;
                    if (integer >= 1)
                    {
                        roman_numeral += "I";
                        integer -= 1;
                    }
                }
            }
        }
    }
    if (integer >= 4)
    {
        roman_numeral += "IV";
        integer -= 4;
    }
    if (integer >= 1)
    {
        roman_numeral += "I";
        integer -= 1;
        if (integer >= 1)
        {
            roman_numeral += "I";
            integer -= 1;
            if (integer >= 1)
            {
                roman_numeral += "I";
                integer -= 1;
            }
        }
    }
    cout << roman_numeral << endl;
}
    
