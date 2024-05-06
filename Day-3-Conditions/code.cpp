#include <iostream>
using namespace std;

// int main() {
//     // if else condition

//      int age;
//      cout << "Enter your age : ";
//      cin >> age;

//     if(age >= 18) {
//        cout << "Can Vote" << endl;
//     } else {
//        cout << "Cannot Vote" << endl;
//     }

//     if(age >= 18) {
//         cout << "Can Vote" << endl;
//     }
//     if(age >=45) {
//         cout << "contest for election" << endl;
//     }
//     }

//     float marks;
//     cout << "Enter your marks : " << endl;
//     cin >> marks;

//     if((marks >= 33) && (marks <= 100)){
//       cout << "You are Pass" << endl;
//     } if((marks > 100) || (marks < 0)) {
//         cout << "Enter Valid Marks" << endl;
//     } else {
//       cout << "You are Fail" << endl;
//     }
//      return 0;
// }

// else if Conditions

// #include <iostream>
// using namespace std;

// int main() {
//     float marks;

//     cout << "Enter your marks :" << endl;
//     cin >> marks;

//     if((marks >= 90) && (marks <= 100)) {
//         cout << "Grade A" << endl;
//     }  else if ((marks >= 80) && (marks <= 75)){
//         cout << "Grade B" << endl;
//     } else {
//         cout << "Grade C" << endl;
//     } 
//     return 0;
// }

// Ternary Operators ye ek dusra way hai if else codition ko likhne ka in a one line
 
//  #include <iostream>
//  using namespace std;

//  int main() {
//     bool isAdult;
//     int age;
//     cout << "Enter age : ";
//     cin >> age;

//     bool isAdult = age >= 18 ? true : false;
//     cout << "user is " << isAdult << endl;
//     return 0;
//  }

//Switch case

// #include <iostream>
// using namespace std;

// int main(){
//     int day = 1;
//     cout << "Enter day : ";
//     cin >> day;

//     switch (day)
//     {
//     case 1: cout << "Monday" << endl;
//         break;
//     case 2: cout << "Tuesday" << endl;
//         break;
//     case 3: cout << "Wednesday" << endl;
//         break;
//     case 4: cout << "Thursday" << endl;
//         break;
//     case 5: cout << "Friday" << endl;
//         break;
//     case 6: cout << "Saturday" << endl;
//         break;
//     case 7: cout << "Sunday" << endl;
//         break;
//     default: cout << "Invalid Day" << endl;
    
//     }
//     return 0;
// }

// Build a Calculator using operator + - * and /

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "enter Operators : ";
    cin >> op;

    switch (op)
    {
    case '+': cout << "a + b : " << (a+b) << endl;
        break;
    case '-': cout << "a - b : " << (a-b) << endl;
        break;
    case '*': cout << "a * b : " << (a*b) << endl;
        break;
    case '/': cout << "a / b : " << (a/b) << endl;
        break;
    default: cout << "Invalid Operator";
        break;
    }
    return 0;
}
