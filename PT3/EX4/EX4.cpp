/**
 * Като се използват манипулатори, да се напише програмен фрагмет,
 * който решава задачата:
 * а) Извежда 1.92, 1.925, 1.9258 с точност 3.
 * b) Извежда 12345 подредено отдясно в поле с широчина 10.
 * c) Извежда 40000 подравне отляво в поле с широчина 15.
 * d) Извежда 250 със и без знак
 * ///ВАЖНИ НЕЩА КОЙТО ТРЯБВА ДА ЗНАЕМ ПРЕДИ РЕШАВАНЕТО НА ЗАДАЧАТА:
 * cout.setprecision(int n) е манипулатор който показва n-1 наброй числа след десетичната запетая
 * cout.width(int n) e манипулатор който описва от колко знака се състой реда
 * std::right() подравнява написаното от най-дясната част на реда зависи от cout.width()
 * std::left() подравнява написаното от най-лявата част на реда зависи от cout.width()
 * std::showpos показва знак пред число
 * std::noshowpos срива знака пред число
 */

#include <iostream>
#include <iomanip>
int main(){
std::cout<<std::setprecision(3)<<1.92<<"\n"<<1.925<<"\n"<<1.9258<<"\n";
std::cout.width(10);
std::cout.fill('-');//запълване на празните пространства с '-'
std::cout<<std::right<<12345<<"\n";
std::cout.width(15);
std::cout<<std::left<<40000<<"\n";
std::cout.width(0);
std::cout<<std::showpos<<250<<"\n"<<std::noshowpos<<250<<"\n";
system("pause");
return 0;
}