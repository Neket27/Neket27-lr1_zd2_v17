
#include "BinaryString.h"

bool BinaryString::check()
{


    for (auto x : chars)
    {
        bool f = false;
        for (auto y : digits)
        {
            if (y == x)
            {
                f = true;
                break;
            }

        }
        if (!f)
            return true;
    }
    return false;
}
void BinaryString::add_chars(const char* ptr)
{
    chars.clear();
    size_t i = 0;
    while (ptr[i] != '\0')
    {
        chars.push_back(ptr[i]);
        i++;
    }

}

BinaryString::BinaryString() {

    
}

Node BinaryString::binary(const char* ptr)
{
    add_chars(ptr);
    if (!check()) {
        chars.clear();
        size_t i = 0;
        int n;
        while (ptr[i] != '\0')
        {
            chars_save.clear();
            n = static_cast<int>(ptr[i]) - 48;
            i++;
            float ost;
            while ((n / 2) > 0) {
                ost = n % 2;
                n = n / 2;
                char a = static_cast<int>(ost) + 48;
                chars_save.push_back(a);
            }
            char b = static_cast<int>(n) + 48;
            chars_save.push_back(b);
            reverse(chars_save.begin(), chars_save.end());
            int l = 0;
            while ((chars_save.size()) != l) {
                chars.push_back(chars_save[l]);
                l++;
            }
        }

        return chars;
    }
    else {
        chars.clear();
        chars.push_back('0');
        return chars;
    }



}

void BinaryString::toZero()
{

    chars.clear();
    chars.push_back('0');
}
BinaryString& BinaryString::operator =(const BinaryString& str)
{

    cout << "=================\n" << endl;

    cout << "CA" << endl;
    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);

    return *this;
}


BinaryString& BinaryString::operator =(BinaryString&& str)
{
    cout << "=================\n" << endl;

    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);
    str.chars.clear();

    return *this;
}


istream& operator >>(istream& in, BinaryString& str) {

    string s;
    in >> s;
    str.chars.clear();
    for (auto x : s)
        str.chars.push_back(x);
    str.toZero();
    return in;
}


