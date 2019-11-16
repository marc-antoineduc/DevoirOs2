#include "FileManager.h"


FileManager::FileManager() 
{
	File* file = new File("");
}

FileManager::~FileManager()
{
	if (file!= nullptr)
	{
		delete file;
		file = nullptr;
	}
}

void FileManager::CreateFile(string _fileName)
{
	file->SetName(_fileName);
}

long int ** FileManager::LoadFile()
{
	return this->file->Load(); 
	// TODO va falloir d�finir comment on va �crire nos matrices dans les fichiers textes et quel type de containers on va prendre.
	
}

void FileManager::WriteFile(string data)
{
	this->file->Write(data);
	
	// TODO va falloir d�finir comment on va �crire nos matrices dans les fichiers textes et quel type de containers on va prendre.
	
}

void FileManager::Print()
{
	this->file->Print();
}

void FileManager::Close()
{
	file->Close();
}
