#include <iostream>
#include <conio.h>
#include <string>

bool validate(std::string s)
{
    char one = '1';
    char zero = '0';
    if (s.length() <= 8)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '1')
            {
                if ((s[i] != '0'))
                    return false;
            }
        }
        return true;
    }
    else
    {
        std::cout << "\nEnter 8bit binary only";
        return false;
    }
}

int bin2Dec(std::string s)
{
    int base = 1;
    int dec = 0;
    int temp = std::stoi(s);

    while (temp)
    {
        int last = temp % 10;
        temp /= 10;
        dec += last * base;
        base *= 2;
    }
    return dec;
}

int main()
{
    std::cout << "\nEnter a binary number of 8 bits: ";

    std::string binary;
    std::getline(std::cin, binary);

    if (validate(binary))
    {
        std::cout << "\nThe decimal value is: " << bin2Dec(binary);
    }
    else
    {
        std::cout << "enter only 1s and 0s";
    }
}