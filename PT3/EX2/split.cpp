/**
 * Да се напише програмата split.cpp, която разделя входа от файл по 1 дума на ред. Името на файла от който се чете да бъде in.txt, 
 * а на този в който се записва да е out.txt
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    string path;
	cout << "Enter the file path: ";
	getline(cin, path);//Вземане на местоположението на файла
    ifstream reader(path,ios::in);//създаване на обек за четена на файлове
    if (reader)//изпълняване на даденият код ↓ , при отворен файл
    {
        ofstream writer("out.txt",ios::out);//създаване на обект който пише във файлове
        string word;
        while(reader>>word){
        writer<<word<<"\n";//запазване на думите от файл №1 във файл №2 по 1 дума на ред
        }
        reader.close();//затваряне на четеца
        writer.close();//затваряне на файла в който пишем
    }
    else cout<<"Cannot open file.\n";
    
    system("pause");
    return 0;
}