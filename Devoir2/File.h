#include <iostream>
#include <fstream>
using namespace std;
class File
{
public: 
	File(string fileName);
	~File();
	long int ** Load();
	void SetName(string _name);
	void Write(string data);
	void Print();
	void Close();
private:
	long int ** prepareMat();
	string fileName = "";
	string data = " ";
	ifstream inFile;
	ofstream outFile;
};

