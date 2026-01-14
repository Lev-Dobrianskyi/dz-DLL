#pragma once
#include <string>
#ifdef LoginMethods_Export
#define LoginMethods_API __declspec(dllexport)
#else
#define LoginMethods_API __declspec(dllimport)
#endif

extern "C" {
	LoginMethods_API void saveToFile(std::string name, std::string SecondName, std::string age);
}
