// // pyramid pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the rows of pyramid : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " "; // this loop prints spaces.
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             cout << n; // this is used to print number or any other thing
//         }
//         cout << endl;

//         for (int i = n - 1; i <= n; i++)

//         {

//             for (int j = 1; j <= n - i; j++)
//             {
//                 cout << " ";
//                 for (int k = 1; k <= 2 * i - 1; k++)
//                 {
//                     cout << n;
//                 }
//                 cout << endl;
//             }
//             return 0;
//         }
//     }
// }



#include <iostream>
using namespace std;
    int main (){
    int n;
    cout << "Enter the number of rows for the upper part of the diamond: ";
    cin >> n;
    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// int main() {
//     int n;
//     cout << "Enter the number of rows for the upper part of the diamond: ";
//     cin >> n;
//     printDiamond(n);
//     return 0;
// }