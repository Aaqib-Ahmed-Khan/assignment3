//#include <iostream>
//using namespace std;
//
//int main() {
//    float a, b, c, d;
//    float sum,average,product;
//
//cout << "Enter value of a: ";
//    cin >> a;
//  cout << "Enter value of b: ";
//    cin >> b;
//   cout << "Enter value of c: ";
//    cin >> c;
//  cout << "Enter value of d: ";
//    cin >> d;
// sum = a + b + c + d;
//  average = (a + b + c + d) / 4;
//  product = a * b * c * d;
//   cout << "Sum of a, b, c, and d is: " << sum << endl;
//  cout << "Product of a, b, c, and d is: " << product << endl;
//   cout << "Average of a, b, c, and d is: " << average << endl;
//
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int rad;
//   float pi = 3.14159; 
//   float area; 
//
//   cout << "Enter the value of the radius of the circle: ";
//    cin >> rad;
//     area = pi * rad * rad;
//    cout << "The area of the circle is: " <<area<<endl;
//
// return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int years;
//    int days;  
// 
//    cout << "Enter your age in years: ";
//    cin >> years;   
//   days = years * 365;
//    cout << "Your age in days is: " << days << " days." << endl;
//return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    float c;  
//    float f;     
//    cout << "Enter the temperature in Celsius: ";
//    cin >> c; 
//
//    f = (c * 9 / 5) + 32;
//    cout << "The temperature in Fahrenheit is: " << f << "�F" << endl;
//   return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	cout << "Size of char : " << sizeof(char) << endl;
//	cout << "Size of int : " << sizeof(int) << endl;
//	cout << "Size of short int : " << sizeof(short int) << endl;
//	cout << "Size of long int : " << sizeof(long int) << endl;
//	cout << "Size of float : " << sizeof(float) << endl;
//	cout << "Size of double : " << sizeof(double) << endl;
//	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
//	return 0;
//
// }


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   cout << setiosflags(ios::fixed);
  cout << setiosflags(ios::showpoint);
  cout << setprecision(3);
    cout << "\t\t\t\t\t\t switch base marksheet" << endl;

   int total, ict, physics, math, english; 
   int avg;
   char letter_grade = 'z';

    cout << "Please enter marks of ICT [0-100]: " << endl;
    cin >> ict;
    ict = (ict > 100) ? -1 : ict;

    cout << "Please enter marks of Math [0-100]: " << endl;
    cin >> math;
    math = (math > 100) ? -1 : math; 

    cout << "Please enter marks of Physics [0-100]: " << endl;
    cin >> physics;
    physics = (physics > 100) ? -1 : physics;

    cout << "Please enter marks of English [0-100]: " << endl;
    cin >> english;
    english = (english > 100) ? -1 : english;

    total = ict + math + physics + english;
    avg = total / 4;

    switch (avg / 10) {
    case 10:
    case 9: {
        cout << "Excellent performance" << endl;
        letter_grade = 'A';
        break;
    }
    case 8: {
        cout << "Very good performance" << endl;
        letter_grade = 'B';
        break;
    }
    case 7: {
        cout << "Good" << endl;
        letter_grade = 'C';
        break;
    }
    case 6: {
        cout << "Do hard work" << endl;
        letter_grade = 'D';
        break;
    }
    case 5: {
        cout << "You are fail" << endl;
        letter_grade = 'F';
        break;
    }
    default: {
        cout << "Invalid average score" << endl;
        letter_grade = 'F';
        break;
    }
    }

    cout << "Your letter Grade is " << letter_grade << endl;
    cout << "Your percentage is " << avg << "%" << endl;

    return 0;
}
