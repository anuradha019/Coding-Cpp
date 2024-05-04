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

#include <iostream>
using namespace std;

int main() {
    float marks;

    cout << "Enter your marks :" << endl;
    cin >> marks;

    if((marks >= 90) && (marks <= 100)) {
        cout << "Grade A" << endl;
    }  else if ((marks >= 80) && (marks <= 75)){
        cout << "Grade B" << endl;
    } else {
        cout << "Grade C" << endl;
    } 
    return 0;
}