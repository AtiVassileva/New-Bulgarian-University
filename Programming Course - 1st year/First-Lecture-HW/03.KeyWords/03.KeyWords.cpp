// 03.KeyWords.cpp 
// A console app which prints all key words in C++

#include <iostream>
using namespace std;

int main()
{
	string key_words_array[64] = {"auto", "double", "break", "else", "case",
	"enum", "char", "extern", "const", "float", "continue", "for",
	"default", "goto", "do", "if", "int", "long", "register", "return",
	"register", "short", "signed", "sizeof", "static", "struct", "switch",
	"typedef", "union", "unsigned", "void", "volatile", "while", "asm",
	"bool", "catch", "class", "const_cast", "delete", "dynamic_cast",
	"explicit", "false", "friend", "inline", "mutable", "namespace",
	"new", "operator", "private", "protected", "public", "reinterpret_",
	"cast", "static_cast", "template", "this", "throw", "true", "try",
	"typeid", "typename", "using", "virtual", "wchar_t"};

	cout << "Key words in C++:\n";

	for (auto word : key_words_array)
	{
		cout << word + "\n";
	}
}
