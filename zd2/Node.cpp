#include "Node.h"

Node::~Node()
{
    chars.clear();
}

Node::Node() {

	chars = vector<char>();
	cout << "DEF CONSTRUCTOR" << endl;
}

Node::Node(const vector<char>& chars)
{
    cout << "=================\n" << endl;

    cout << "PARAM VECTOR CONSTR" << endl;

    this->chars = chars;
}
Node::Node(char* ptr) {
	chars.clear();
	for (int i = 0; ptr[i] != '\n'; i++) {
		chars.push_back(ptr[i]);
		//cout << "ptr= " << ptr[i];
	}

}

Node::Node(string& string) {
    for (auto x : string) {
        chars.push_back(x);
    }
    cout << endl;
    cout << "PARAMETR STRING CONSTRUCTOR" << endl;
}

void Node:: display()
{
	for (auto x : chars)
		cout << x;
    cout << endl;
}
Node::Node(Node&& str) : chars(move(str.chars))
{
    cout << "=================\n" << endl;

    str.chars.clear();
    cout << "MOVEMENT CONSTR" << endl;

}


Node Node::operator +(const Node& str)
{
    cout << "=================\n" << endl;
    cout << "SUM BEGIN" << endl;
    Node res = Node();
    for (auto x : chars)
        res.chars.push_back(x);
    for (auto x : str.chars)
        res.chars.push_back(x);
    return res;

}

Node& Node::operator =(const Node& str)
{
    cout << "=================\n" << endl;

    cout << "CA" << endl;
    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);

    return *this;
}

Node& Node::operator =(Node&& str)
{
    cout << "=================\n" << endl;

    cout << "MA" << endl;
    chars.clear();
    for (auto x : str.chars)
        chars.push_back(x);
    str.chars.clear();

    return *this;
}

ostream& operator <<(ostream& out, const Node& str)
{
    for (auto x : str.chars)
        out << x;
    return out;
}

istream& operator >>(istream& in, Node& str)
{
    string s;
    in >> s;
    str.chars.clear(); 
    for (auto x : s)
        str.chars.push_back(x);
    return in;
}


bool Node::operator==(const Node& str)
{
    if (str.chars.size() != this->chars.size())
        return false;
    else {
        for (size_t i = 0; i < chars.size(); i++)
            if (this->chars.at(i) != str.chars.at(i))
                return false;
        return true;
    }
}

    bool Node::operator!=(const Node & str)
    {
        for (size_t i = 0; i < chars.size(); i++) {
            if (this->chars.at(i) != str.chars.at(i)) {
                return true;
            }
            else
                return false;
            break;

        }
    }

    bool Node::operator >(const Node& str) {
        char* arr = new char[chars.size()];
        char* arr2 = new char[str.chars.size()];
        for (size_t i = 0; i < chars.size(); i++) {
            arr[i] = chars[i];
        }
        for (size_t i = 0; i < str.chars.size(); i++) {
            arr2[i] = str.chars[i];
        }
        
        int val_1 = atoi(arr);
        int val_2 = atoi(arr2);

        if (val_1 > val_2) {
            return true;
        }
        else {
            return false;
        }

            
          

    }

    bool Node::operator <(const Node& str) {
        char* arr = new char[chars.size()];
        char* arr2 = new char[str.chars.size()];
        for (size_t i = 0; i < chars.size(); i++) {
            arr[i] = chars[i];
        }
        for (size_t i = 0; i < str.chars.size(); i++) {
            arr2[i] = str.chars[i];
        }

        int val_1 = atoi(arr);
        int val_2 = atoi(arr2);

        if (val_1 < val_2) {
            return true;
        }
        else {
            return false;
        }

    }
    bool Node::operator >=(const Node& str) {
        char* arr = new char[chars.size()];
        char* arr2 = new char[str.chars.size()];
        for (size_t i = 0; i < chars.size(); i++) {
            arr[i] = chars[i];
        }
        for (size_t i = 0; i < str.chars.size(); i++) {
            arr2[i] = str.chars[i];
        }

        int val_1 = atoi(arr);
        int val_2 = atoi(arr2);

        if (val_1 >= val_2) {
            return true;
        }
        else {
            return false;
        }


    }

    bool Node::operator <=(const Node& str) {
        char* arr = new char[chars.size()];
        char* arr2 = new char[str.chars.size()];
        for (size_t i = 0; i < chars.size(); i++) {
            arr[i] = chars[i];
        }
        for (size_t i = 0; i < str.chars.size(); i++) {
            arr2[i] = str.chars[i];
        }

        int val_1 = atoi(arr);
        int val_2 = atoi(arr2);

        if (val_1 <= val_2) {
            return true;
        }
        else {
            return false;
        }

    }

