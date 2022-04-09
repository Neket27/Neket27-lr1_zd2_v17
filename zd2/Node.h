#pragma once
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <vector> 
using namespace std;

class Node {
protected:
	vector<char>chars;
	vector<char> chars_save;;
public:
	Node();
	Node(char* ptr);
	Node(string& intt);
	Node(const vector<char>& chars);
	Node(Node&& str);
	~Node();
	
	//Node sum(const Node& str);
	void display();
	
	Node operator +(const Node& str);

	Node& operator =(const Node& str);
	Node& operator =(Node&& str);

	bool operator==(const Node& str);
	bool operator!=(const Node& str);
	bool operator >(const Node& str);
	bool operator <(const Node& str);
	bool operator >=(const Node& str);
	bool operator <=(const Node& str);
	friend ostream& operator <<(ostream& out, const Node& str);
	friend istream& operator >>(istream& in, Node& str);
	



	
	};
ostream& operator <<(ostream& out, const Node& str);
istream& operator >>(istream& in, Node& str);
	
#endif