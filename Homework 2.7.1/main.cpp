#include<iostream>

#define MODE 0 

#ifndef MODE

#error define_MODE


#endif

#ifdef MODE

#if MODE == 0

void info() {
	std::cout << "Работаю в режиме тренировки" << std::endl;
}
#elif MODE == 1
void add() {
	int a;
	int b;
	std::cout << "Работаю в боевом режиме " << std::endl;
	std::cout << "Введите 1-е число: " ;
	std::cin >> a;
	std::cout << "Введите 2-е число: " ;
	std::cin >> b;
	std::cout << "Результат сложения: " << a + b << std::endl;

}
#else

void info() {
	std::cout << "Неизвестный режим.Завершение работы" << std::endl;
}

#endif 
#endif



int main() {

setlocale(LC_ALL, "Russian");

#if MODE == 1

add();

#elif MODE == 0
	
 info();

#else

info();

#endif




	return 0;
};
