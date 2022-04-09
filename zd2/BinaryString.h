
#ifndef UNTITLED2_BINARYSTRING_H
#define UNTITLED2_BINARYSTRING_H
#include "Node.h"
#include <iostream>
#include <vector>
using namespace std;
class BinaryString : public Node {
private:
    // vector<char>chars;
     //vector<char> chars_save;
    const vector<char>digits = { '0','1','2','3','4','5','6','7' };
public:
    bool check();
    BinaryString();
    BinaryString(const char* ptr);
    void add_chars(const char* ptr);
    void toZero();
    Node binary(const char* ptr);


    BinaryString& operator =(const BinaryString& str);
    BinaryString& operator =(BinaryString&& str);


    friend istream& operator >>(istream& in, BinaryString& str);

    
};


#endif //UNTITLED2_BINARYSTRING_H
