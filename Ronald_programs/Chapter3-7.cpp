 #include <iostream>
 #include <iomanip>
 #include <string> // Header file needed to code 3-12 to 3-13
 
 using namespace std;
 
 /* Programs 3-12 and 3-13
 
 int main()
 {
 int num1 = 2897, num2 = 5, num3 = 837,
 num4 = 34, num5 = 7, num6 = 1623,
 num7 = 390, num8 = 3456, num9 = 12;
 
 // Display the first row of numbers
 cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
 
 // Display the second row of numbers
 cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
 
 // Display the third row of numbers
 cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;
 return 0;
 }*/


 /* Program 3-14
 
 // This program demonstrates the setw manipulator
 // being used with variables of various data types.
 
 int main()
 {
 int intValue = 3928;
 double doubleValue = 91.5;
 string stringValue = "Jill Q. Jones";
 
 cout << "(" << setw(5) << intValue << ")" << endl;
 cout << "(" << setw(8) << doubleValue << ")" << endl;
 cout << "(" << setw(16) << stringValue << ")" << endl;
 return 0;
 }
 */


/* Program 3-15

 // This program demonstrates how the setprecision manipulator
 // affects the way a floating-point value is displayed.

 
 int main()
 {
 double number1 = 132.364, number2 = 26.91;
 double quotient = number1 / number2;
 
 cout << quotient << endl;
 cout << setprecision(5) << quotient << endl;
 cout << setprecision(4) << quotient << endl;
 cout << setprecision(3) << quotient << endl;
 cout << setprecision(2) << quotient << endl;
 cout << setprecision(1) << quotient << endl;
 return 0;

 }
 */


/*Program 3-16

// This program asks for sales figures for threedays. 
// The total sales are calculated and displayed in a table.

 int main()
 {
 double day1, day2, day3, total;
 
 // Get the sales for each day
 cout << "Enter the sales for day 1: ";
 cin >> day1;
 cout << "Enter the sales for day 2: ";
 cin >> day2;
 cout << "Enter the sales for day 3: ";
 cin >> day3;
 
 // Calculate total sales
 total = day1 + day2 + day3;
 
 // Display the sales figures
 cout << "\nSales Figures\n";
 cout << "-------------\n";
 cout << fixed << setprecision(2);
 cout << "Day 1: " << setw(8) << day1 << endl;
 cout << "Day 2: " << setw(8) << day2 << endl;
 cout << "Day 3: " << setw(8) << day3 << endl;
 cout << "Total: " << setw(8) << total << endl;
 return 0;
 }
 */


/*Program 3-17

 // This program illustrates the how the showpoint, setprecision, and fixed manipulators operate both individually and when used together.

int main()
 { 
 double x = 6.0;
 
 cout << x << endl;
 cout << showpoint << x << endl;
 cout << setprecision(2) << x << endl;
 cout << fixed << x << endl;
 
 
 return 0;
}
*/

//Program 3-18
// This program illustrates the use of the left and right manipulators.


 int main()
 { 
 string month1 = "January",
 month2 = "February",
 month3 = "March";
 
 int days1 = 31,
 days2 = 28,
 days3 = 31;
 
 double high1 = 22.6,
 high2 = 37.4,
 high3 = 53.9;
 
 cout << fixed << showpoint << setprecision(1);
 cout << "Month Days High\n";
 
 cout << left << setw(12) << month1
 << right << setw(4) << days1 << setw(9) << high1 << endl;
 cout << left << setw(12) << month2 << right << setw(4) << days2 << setw(9) << high2 << endl;
 cout << left << setw(12) << month3 
 << right << setw(4) << days3 << setw(9) << high3 << endl;
 
 return 0;
 }
 
