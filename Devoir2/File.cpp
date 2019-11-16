#include "File.h"
#include <string>


File::File(string fileName)
{
	this->fileName = fileName;
}

File::~File()
{
	fileName = "c";
}

long int ** File::Load()
{
	long int **tab;
	tab = prepareMat();
	string output, temp;
	cout << "Chargement du fichier "+fileName+". \n";
	ifstream inFile(fileName+".txt");
	
	while (inFile >> output)
	{

		
		for (size_t i = 0; i < 200 ; i++)
		{
			for (size_t x = 0; x < 100; x++)
			{
				temp = output;
				tab[i][x] = stoi(temp);
				inFile>>output;
			}
			
		}		
	}	
	return tab;

}

void File::SetName(string _name)
{
	fileName = _name;
}

void File::Write(string _data)
{
	data += _data;
}
void File::Print() 
{
	cout << "Ecriture du fichier " + fileName + ". \n";
	ofstream outFile( fileName + ".txt");
	outFile << data;
	inFile.close();
	cout<<"icittet";
}

long int ** File::prepareMat()
{
	long int **tab = new long int*[200];
    for (size_t i = 0; i < 200; i++)
    {
        tab[i] = new long int [100];
    }

    for (size_t i = 0; i < 200 ; i++)
    {
        for (size_t x = 0; x < 100; x++)
        {
            tab[i][x] = 0;
        }
        
    }

	return tab;
}
void File::Close()
{
	if (inFile.is_open())
	{
		inFile.close();
	}
	if (outFile.is_open())
	{
		outFile.close();
	}
	
}
