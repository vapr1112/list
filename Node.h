#pragma once
#include <iostream>
#include <exception>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	
	Node(int data) : data(data), next(nullptr){}
};

