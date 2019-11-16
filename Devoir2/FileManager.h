#pragma once
#include <iostream>
#include <fstream>
#include "File.cpp"
#include <string>

using namespace std;

class FileManager
{
public:
	FileManager();
	~FileManager();
	void CreateFile(string _fileName);
	long int ** LoadFile();
	void WriteFile(string _data);//Data � d�terminer.
	void Print();
	void Close();
private:
	File* file = new File("");

};

