#include <iostream>
#include <string>

using namespace std;


//Program 2-1
//A simple C++ program
// int main(){
//     cout << "Programming is great fun";

//     return 0;
// }


//Program 2-12
// int main(){
//     char letter;

//     letter = 65;
//     cout << letter << endl;

//     letter = 66;
//     cout << letter << endl;

//     return 0;
// }

//Program 2-15
// int main(){

//     string movieTitle;

//     movieTitle = "WALLE";

//     cout << "My favorite movie is " << movieTitle << endl;

//     return 0;
// }

//Checkpoint

// int main(){
//     string name,
//            address,
//            phoneNumber;

//     name = "Ronald!";
//     cout << "Hello my name is " << name << endl;

//     address = "10 Frankfurt road, Germany";
//     cout << "I live in " << address << endl;

//     phoneNumber = "(939) 200-9802";
//     cout << "And my phone number is " << phoneNumber << endl;
    
//     return 0;
// }

//program 2-16 (bool)

// int main(){
//     bool boolValue;

//     boolValue = true;
//     cout << boolValue << endl;


//     boolValue = false;
//     cout << boolValue << endl;

//     return 0;
// }


//program 2-17 (sizeof) operator

// int main(){
//     double apple;

//     cout << "The size of a short integer is " << sizeof(short) << " bytes.\n";

//     cout << "The size of a long integer is " << sizeof(long) << " bytes.\n";

//     cout << "A apple can be eaten in " << sizeof(apple) << " bytes!\n";

//     return 0;

// }

//program 2-18

// int main(){

//     string month = "February";
    
//     int year,
//         days = 29;

//     year = 1776; 

//     cout << "In " << year << " " << month << " had " << days << " days.\n";

//     return 0;   
// }

//Program 2-19 Programs Scope

// int main(){
    
//     cout << value;

//     int value = 100;
//     return 0;
// }

// wont work since the variabke cant be found since it was declared after it was called for

//Program im making to verify the division rules

// int main() {
//     double div1 = 10/4,
//            div2 = 10.0/4,
//            div3 = 10.0/4.0;

//            cout << div1 << endl;
//            cout << div2 << endl;
//            cout << div3 << endl;
// }

//My program for program 2-20

// int main(){
//     int hoursWorked = 40,
//         extraHoursWorked = 10;

//     double regularHoursPay = 18.25,
//            extraHoursPay = 27.38,
//            regularHoursWage,
//            extraHoursWage,           
//            totalPay;

//            regularHoursWage = hoursWorked * regularHoursPay;
//            extraHoursWage = extraHoursWorked * extraHoursPay;

//            totalPay = regularHoursWage + extraHoursWage;

//            cout << "Your total pay for this week is $" << totalPay << endl;

//Program 2-21

// int main(){
    
//     int totalSeconds = 125,
//         minutes,
//         seconds;

//     minutes = totalSeconds/60;
//     seconds = minutes % 60;

//     cout << totalSeconds << " seconds is equivalent to " << minutes << " minutes and " << seconds << " seconds. \n";

//     return 0;
// }



//Tying it all together:

// int main(){

//     cout << "      ^      ^      " << endl;
//     cout << "      ^      ^      " << endl;
//     cout << "         :          " << endl;
//     cout << "     \\  UUU  /     " << endl;

//     return 0;
// }