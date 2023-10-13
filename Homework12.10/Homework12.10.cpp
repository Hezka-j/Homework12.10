#include <iostream>
using namespace std;
/////////////////////////////////////1
/// <summary>
/// This function swaps last digit and first digin of a number(use recursion)
/// </summary>
/// <param name="number"> This is a number whose digits we will swap</param>
/// <returns> A number with the order you need</returns>

//int SetNum(int number)
//{
//    if (number == 0)
//        return 0;
//    return number % 10 * 100 + number / 10 % 10 * 10 + number / 100;
//}
//int main()
//{
//    int n;
//    cout << "Input number - ";
//    cin >> n;
//    cout << SetNum(n) << "\n";
//}

/////////////////////////////////////////////////////2

///// <summary>
///// Calculates the power of number(use recursion)
///// </summary>
///// <param name="number">The number that the exponent function calculates</param>
///// <param name="degree">Exponent of number </param>
///// <returns> Number raised to a power</returns>
//int SetDegree(int number, int degree)
//{
//
//	if (degree == 0)
//		return 1;
//
//	return number * SetDegree(number, degree - 1);
//}
//
//int main()
//{
//	int number, degree;
//	cout << "Number - ";
//	cin >> number;
//	cout << "Degree - ";
//	cin >> degree;
//	cout << SetDegree(number, degree) << "\n";
//
//}

/////////////////////////////////////////////////////////3


///// <summary>
///// Calculates the sum of numbers in diapason
///// </summary>
///// <param name="a"> first number </param>
///// <param name="b">second number</param>
///// <returns>Sum of number in a range</returns>
//int sum(int a, int b)
//{
//	if (a > b)
//		return 0;
//	//cout << a << " ";
//	return a + sum(a + 1, b);
//}
//int main()
//{
//	int a, b;
//	cout << "A - ";
//	cin >> a;
//	cout << "B - ";
//	cin >> b;
//	cout << sum(a, b) << "\n";
//	/*while (a <= b)
//	{
//		sum += a;
//		cout << a << " " ;
//		a++;
//	}
//	cout << sum << "\n";*/
//}
//////////////////////////////////////////////////////////////////////////////////////4

///// <summary>
///// This function can print all digits to 5
///// </summary>
///// <returns>Sequence of number in ascending order</returns>
//int main()
//{
//    static int k = 0;
//
//    k++;
//    if (k <= 5)
//    {
//        cout << k << " ";
//        main();
//    }
//    else
//    {
//        cout << "\nexit\n";
//    }
//
//
//}
//////////////////////////////////////////////////////////////////////////////////////5

///// <summary>
///// This function can print all numbers from a to b
///// </summary>
///// <returns>Sequence of number in ascending or in descending order in diapason</returns>
int main()
{
    static int a = 30;
    static int b = 40;   
    int k = a;
    
     if (a != b)
     {
            if (a <= b)
            {
                a++;
               
            }
            else if (a >= b)
            {
                a--;
                
            }
            main();
    }
    
    else
    {
        cout << "numbers\n";
    }

    cout << k << " ";
    
    
    
}

///////////////////////////////////////////////////////////////6

///// <summary>
///// The function displays whether is an exact power of two
///// </summary>
///// <param name="number"> This number which function must check</param>
///// <returns>YES if number is exact power of two otherwise NO</returns>
//int SetDegree(int number)
//{
//    if (number == 1)
//        return 1;
//    if (number % 2 == 0)
//        number /= 2;
//    else
//        return 0;
//    
//    return SetDegree(number);
//}
//int main()
//{
//    static int number;
//    cout << "Number - ";
//    cin >> number;
//    if (SetDegree(number) == 1)
//        cout << "YES\n";
//    else
//        cout << "NO\n";
//    
//    
//}
//
//////////////////////////////////////////////////////////////////7

///// <summary>
///// Calculates sum digits in a number
///// </summary>
///// <param name="number"> Number which digits will be calculating sum</param>
///// <returns>Return sum digits in a number</returns>
//int sum(int number)
//{
//    if (number == 0)
//        return 0;
//
//    return number % 10 + sum(number / 10);
//}
//int main()
//{
//    int number;
//    cout << "Input number - ";
//    cin >> number;
//    cout << sum(number) << "\n";
//}
/////////////////////////////////////////////////////////////////////8
////Цифры числа справа налево.
////Дано натуральное число N.Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами.
////При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).Разрешена только рекурсия и целочисленная арифметика.
//
///// <summary>
///// Displays the order of numbers up to num from right to left
///// </summary>
///// <param name="num">This is the number up to which the function need to print the numbers</param>
///// <returns>Sequence of number from right to left</returns>
//int SetNum(int num)
//{
//    if (num == 0)
//        return 0;
//    cout << num % 10 << " ";
//    
//    return SetNum(num / 10);
//}
//int main()
//{
//    int number;
//    cout << "Input number - ";
//    cin >> number;
//    cout << "Numbers: ";
//    SetNum(number);
//}
//
/////////////////////////////////////////////////////////////////////9
////. Цифры числа слева направо.
////Дано натуральное число N.Выведите все его цифры по одной, в обычном порядке, разделяя их пробелами или новыми строками.
////При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).Разрешена только рекурсия и целочисленная арифметика.
//
///// <summary>
///// Displays the order of numbers up to num from left to right
///// </summary>
///// <param name="number">This is the number up to which the function needs print the numbers</param>
///// <returns>Sequence of number from left to right</returns>
//int SetNum(int number)
//{
//    int k = number % 10;
//    if (number == 0)
//        return 0;
//
//    SetNum(number / 10);
//
//    cout << k << " ";
//}
//int main()
//{
//    int number;
//
//    cout << "Input number - ";
//    cin >> number;
//    SetNum(number);
//
//}
