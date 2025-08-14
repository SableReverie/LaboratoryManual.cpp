#include <iostream>
using namespace std;

int main () {
    int num1, num2, sum;
    
    cout << "Enter the first number: \n";
    cin >> num1;
    
    cout << "Enter the second number: \n";
    cin >> num2;
    
    sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main () {

    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if(num > 0) {
        cout << "The number is positive.\n";
    } else if (num < 0) {
    cout << "The number is negative.\n";
    } else 
    cout << "The number is zero.";
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
        
    int count = 1;

        while (count <= 5) {
        cout << "Iteration " << count;

        if (count % 2 == 0) {
            cout << " - Even";
        } else {
            cout << " - Odd";
        }
        cout << endl; 
        count++;       
    }
    return 0;
}








#include <iostream>
using namespace std;
int main () {
    
    float x,y;
    float sum, difference, product, quotient;
    
    cout << "Type a number: ";
    cin >> x;
    
    cout << "Type another number: ";
    cin >> y;
    
    sum = x + y;
    cout << "Sum is: " << sum << endl;
   
    difference = x - y;
    cout << "Difference is: " << difference << '\n';
   
    product = x * y;
    cout << "Product is: " << product << '\n';
    
    if(y != 0){
        cout << "The quotient is: " << x / y << '\n';
    } else 
    cout << "Cannot Divide by zero." << '\n';
    
    return 0;
}









#include <iostream>
#include <string>
using namespace std;
    
int main () {
        
    int age;
    string name, program;
        
    cout << "Enter your name: ";
    getline(cin, name);
        
    cout << "Enter your age: ";
    cin >> age;
        
    cout << "Enter your program: "; 
    cin >> program;
        
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "Program: " << program << '\n'; 
        
    return 0;
}







#include <iostream>
using namespace std;

int main () {
    
    float distance, time, speed;
    
    cout << "Input Distance: ";
    cin >> distance;
    
    cout << "Input Time: ";
    cin >> time;
    
    speed = distance / time;
    cout << "The speed is: " << speed << '\n';
    
    return 0;
}










#include <iostream>
#include <string>
using namespace std;
int main () {
    
    float math,science,filipino,history,pe,totalAverage;

    cout << "Enter Mathematics grade: ";
    cin >> math;
    
    cout << "Enter Science grade: ";
    cin >> science;
    
    cout << "Enter Filipino grade: ";
    cin >> filipino;
    
    cout << "Enter History grade: ";
    cin >> history;
    
    cout << "Enter Physical Education grade: ";
    cin >> pe;
    
    totalAverage = (math + science + filipino + history + pe) / 5;
    
    if(totalAverage >= 90 && totalAverage <= 100) {
        cout << "Grade: A" << endl;
    } else if(totalAverage >= 80 && totalAverage <= 89) {
        cout << "Grade: B" << endl;
    } else if(totalAverage >= 75 && totalAverage <= 79) {
        cout << "Grade: c" << endl;
    } else {
        cout << "Grade: F" << endl;
    }














#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main () {
    
    float convertedTemperature, temperature;
    char unit;
    
    cout << "Enter Temperature: ";
    cin >> temperature;
    
    cout << "Enter Unit(C for Celsius, F for Fahrenheit): ";
    cin >> unit;
    
    if(unit == 'C' || unit == 'c') {
        convertedTemperature = (temperature * 9/5) + 32;
        cout << "Converted temperature: " << convertedTemperature << " Fahrenheit." << endl;
    } else if (unit == 'F' || unit == 'f') {
        convertedTemperature = (temperature - 32) * 5/9;
        cout << "Converted temperature: " << convertedTemperature << " Celsius" << endl;
    } else {
        cout << "Invalid Unit";
    }
    
    return 0;
}







#include <iostream>
using namespace std;

int main () {
    
    float num, sum, count = 0;
    
    cout << "Enter the initial sum: ";
    cin >> sum;
    
    while(count < 6){
        cout << "Enter a number: ";
        cin >> num;
        sum = sum + num; count++;
        cout << "Sum = " << sum << '\n';
    }
    
    return 0;
}








#include <iostream>
using namespace std;
int main () {
  
    int num;
    int sumEven = 0;
    int sumOdd = 0;

    cout << "Enter integers(enter 0 to stop): ";
    cin >> num;
    
    while (num != 0) {
    cin >> num;

    if(num == 0){
        break;
    }
     if (num % 2 == 0) {
            sumEven += num;
            cout << "Sum of even integers: " << sumEven << '\n';
        } else {
            sumOdd += num;
            cout << "Sum of odd integers : " << sumOdd << '\n';
        }
    }
    return 0;
}








#include <iostream>
using namespace std;

int main () {

    float numTerms, next, i;
    float prev = 0, curr = 1;
    cout << "Enter the number of terms in the Fibonnaci sequence: ";
    cin >> numTerms;
    
    cout << "Fibonacci sequence up to " << numTerms << "Terms." << '\n';
    
    for (i = 1; i < numTerms; i++) {
        cout << prev;
        next = prev + curr;
        prev =curr;
        curr = next;
    } 
    return 0;
}










#include <iostream>
using namespace std;

double larger(double x, double y) {
    if(x >= y) {
        return x;
    } else {
        return y;
    }
}

int main () {
     
   double num, max;
   int count;

   cout << "Enter 10 numbers\n";
   cin >> num;

   max = num;

   for(count = 1; count < 10; count++) {
    cin >> num;
    max = larger(max, num);
   }
   
   cout << "The largest number is: " << max << '\n';

    return 0;
}












#include <iostream>
using namespace std;

int findSmallestIndex(int arr[], int size) 
{
int smallestIndex = 0;
for(int i = 1; i < size; i++){
  if(arr[i] < arr[smallestIndex]) {
    smallestIndex = i;
  }
}

return smallestIndex;
}

int findlargestIndex(int arr[], int size) 
{
int largestIndex = 0;
for(int i = 1; i < size; i++){
  if(arr[i] < arr[largestIndex]) {
    largestIndex = i;
  }
}
return largestIndex;
}
int main () {

    int arr[] = {7, 12, 5, 8, 1, 9, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallestIndex = findSmallestIndex(arr, size);
    int largestIndex = findlargestIndex(arr, size);

    cout << "The smallest is at index: " << smallestIndex << '\n';
    cout << "The smallest element is: " << arr[smallestIndex] << '\n';
    cout << "The largest is at index: " << largestIndex << '\n';
    cout << "The largest element is: " << arr[largestIndex] << '\n';

    return 0;
}















#include <iostream>
#include <string>
using namespace std;

int main () {

const int MAX_SIZE = 100;
char inputString[MAX_SIZE];

cout << "Enter a string: ";
cin.getline(inputString, MAX_SIZE);

cout << "Uppercase letters in the string: ";

for(int i = 0; inputString[i] != '\0'; i++){

    if(inputString[i] >= 'A' && inputString[i] <= 'Z'){
    cout << inputString[i];
    }
}
return 0;
}







15 AND 16
