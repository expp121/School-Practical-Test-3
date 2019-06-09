/**
 * Да се напише програмата backwards.cpp, която чете вход от файл ("out.txt") 
 * и обръща съдържанието му наобратно. За решаването на задачата се изисква съставянето на следната функция с два аргумента: 
 * character_at_position(int number, string filename). На потребителя да се даде възможност да въведе името на файла
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void character_at_position(int index_to_start_from, string file_name) { 
	/**
		Създаване на функция "character_at_position" приемаща 2 аргумента
		* @param int index_to_start_form,задаване на колко символа от ляво на дясно да бъдат показани
		* ПРИМЕР:
		* Файла съдържа Test1Test2, при задаване на примерно число: 5 ще бъде запазено във файла 1tseT -> Test1Test2 => 2tseT1tseT => 1tseT
		* @param string file_name, местоположение на файла който искаме да отворим
		* ПРИМЕР: C:\Users\Test\Desktop\test.txt
	*/
	ifstream reader(file_name, ios::in);//създаване на обект който да прочита файловете
	if (reader)//проверяване дали обекта е създаден, ако е се изпълнява кода ↓
	{
		string file_content;
        getline(reader,file_content);//вземане на въведеното от потребителя и "вкарването" му в променливата file_content
		cout << "-------------------------------\nThe contents of a file is: \n" << file_content << "\n-------------------------------\n";//извеждане на съдържанието на файла
		reader.seekg(index_to_start_from);//преместване на 'четеца на позиция index_to_start_from'
		int position = reader.tellg();//вземане на позицията на 'четеца'
		char c;
		cout << "Reversed contents of the file: \n";
        while (position--)//Изкарване на съдържанието на файла наобратно
		{
			reader.seekg(position, reader.beg);
			reader >> c;
			cout << c;
		}
        cout<<"\n";
        reader.close();//затваряне на файла
	}else cout<<"The file cannot be openned\n";//изкарване на грешка при невъзможност на отварянето на файла
}
int main() {
	string path;
    int number;
	cout << "Enter the file path: ";
	getline(cin, path);//премане на местоположение на файла
    cout<<"How many characters to display?: ";cin>>number;//запитване на колко знака да бъдат изкарани наобратно
	character_at_position(number, path);//извикване на функцията
    system("pause");
    return 0;
}