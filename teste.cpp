#include <time.h>
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;


int main(){
	std::ofstream myfile;
  	myfile.open ("example.txt");
	time_t tempo;
	struct tm * timeinfo;
	time(&tempo);

	timeinfo = localtime(&tempo);

	myfile << asctime(timeinfo) << "\n";

	myfile.close();
	return 0;
}