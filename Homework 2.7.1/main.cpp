#include<iostream>

#define MODE 0 

#ifndef MODE

#error define_MODE


#endif

#ifdef MODE

#if MODE == 0

void info() {
	std::cout << "������� � ������ ����������" << std::endl;
}
#elif MODE == 1
void add() {
	int a;
	int b;
	std::cout << "������� � ������ ������ " << std::endl;
	std::cout << "������� 1-� �����: " ;
	std::cin >> a;
	std::cout << "������� 2-� �����: " ;
	std::cin >> b;
	std::cout << "��������� ��������: " << a + b << std::endl;

}
#else

void info() {
	std::cout << "����������� �����.���������� ������" << std::endl;
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
