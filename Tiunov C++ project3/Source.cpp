#include <iostream>


/*

void print_X() {




}

int _X;  // глобальная переменная
// кто то ставит с большой буквы а кто то ставит землю 

void use_static() {
	static int a=1;
	std::cout << " a = " << a << std::endl;
		a++;
		if (a > 5)
			a = 1;

}

int power(int num1, int num2 = 2) {
	int res = 1;
	for (int i = 1; i <= num2; i++)
		res *= num1;
	return res;

	
}







const double _PI = 3.1416; // глобальная константа;
int _ARR[5]; // глобальный массив, заполненный нулями

*/

inline int absolute(int num) {
	return num < 0 ? -num : num;


}

inline int summ_AB(int A, int B) {
	int sum = 0;
	for (int i = A; i <= B; i++)
		sum += i;
	return sum;
}

int max(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;


}
double max(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3){
	std::cout << "THEREE INI\n";
	return num1 > (num2 > num3 ? num2 : num3) ? 
		num1 : (num2 > num3 ? num2 : num3);
}

template <typename T> 
T absol(T num) {
	return num < 0 ? -num : num;
	}

int main() {
	setlocale(LC_ALL, "Russian");
	int n; // n - локальная переменная блока mian
	// можно использовать только в тех скобочках где они были объявлены
	// Области данных - локальные переменные
	//i - локальная переменная цикла i 
	//уничтожается ппри его завершении цикла и не видема для остальной программы
	//i=10; // ОШИБКА!! i вне области видеомости
	/*
	for (int i = 0; i < 5; i++); 

	
	std::cout << "*";
	int x;
	std::cout << std::endl;
	x = 5;

	//i=10; // ОШИБКА!! i вне области видеомости
		//x=5; // ОШИБКА!! i вне области видеомости

	for (int i = 1; i <= 5; i++) {
		int x = i * 10;

			int N = 5;
			if (N > 0) {
				int r = N

			}

		int main() {
			int n;
			std::cin

				_X = 7;
			print _X();

// глобальные переменные - это переменные которые могут видны везде ( не заключеный в скобочки)
// ПРИМЕР глобальной переменной 
// где создаем функции создаем глобальную переменную

		}

// все локальные переменные существую строго внутри фигурных скобачек в которых они были объявлены
// х - 

	}
	*/
	/*
	use_static();


	// std::cout << a << std::endl; // ОШИБКА!!
	for (int i= 0; i <10; i++)
	use_static();

	
	std::cout << "4^3 = " << power(4, 3) << "\n";
	std::cout << "5^2 = " << power(5) << "\n";
	*/
	/*
	std::cout << "Введите число -->";
	std::cin >> n;
	std::cout << "|" << n <<"|= " << absolute (n) << "\n";
	std::cout << "Сумма чисел от 5-ти до 10-ти:"<< summ_AB(5, 10)<< "\n";

	//проблема со встриванием функции 

	*/

	///перегруженные функции
	/*
	std::cout << max(10, 15) << std::endl; //15
	std::cout << max(5.75, 5.1) << std::endl; //5.75
	std::cout << max(5, 8, 2) << std::endl;
*/
	// шаблонные функции
	std::cout << absol(-7) << std::endl;
	std::cout << absol(-7.5) << std::endl;



	return 0;



}








