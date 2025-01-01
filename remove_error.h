#pragma once
#include <exception>
#include <iostream>

using namespace std;

class remove_error : protected exception
{
private:
	string message = "delete error";

public:
	remove_error() = delete;

	remove_error(string message_p) : message{ message_p } {}

	virtual const char*  what()const noexcept final { return message.c_str(); }

	virtual ~remove_error() = default;
};