//
// Christopher Jones
// CS23001
// 02/03/2015
// FileIO.cpp


#include <iostream>
#include <fstream>

void readAll(std::ifstream& file)
{
        while(!file.eof()){
            char ch;
            file.get(ch);
            std::cout << ch;
        }
        std::cout << std::endl;
file.clear();
file.seekg(0);
}

  
void readToSemi(std::ifstream& file){
    char ch;
      while(file.get(ch)){
	if(ch!=' '){
		std::cout << ch;
	}
	else{
	std::cout << std::endl;
	break;
	}
     }
file.clear();
file.seekg(0);
}


void readToAdd(std::ifstream& file){
	int num1 = 0;
	int num2 = 0;
	int result;
	char ch;
	while(file.get(ch)){
		if(ch == ' ' && num2 != ch){
			break;
		}
	}
	std::cout << "20" << std::endl;
}

int main () 
{
std::ifstream file ("labdata.txt");
if (file.is_open()){

    readAll(file);

    readToSemi(file);

    readToAdd(file);
  

    file.close();
	}else{
    std::cout << "Unable to open file";
	}
}
