#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------" << "\n" ;
	string x ;
	while (getline(source,x)){
	    dest << x << endl;
	}
	dest << "-------------------- HA!! ---------------------" << endl ;
	

    source.close();
    dest.close();
	return 0;
}
