//
//  main.cpp
//  test
//
//  Created by Nasiba Alimova on 17/11/22.
//

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // Copying Array
//    int first[] = {10, 20, 30};
//    int second[size(first)];
//
//    for(int i = 0; i < size(first); i++){
//        second[2] = first[2];
//    }
//
//    for (int i = 0; i < size(second); i++){
//        cout << second[i] << " ";
//    }
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // Comparing Array
//    int first[] = {10, 20, 40};
//    int second[] = {10, 20, 30};
//
//    bool areEqual = true;
//
//    for (int i = 0; i < size(first); i++){
//        if(first[i] == second[i]){
//            areEqual = true;
//            //cout <<boolalpha<< areEqual << endl;
//        }else
//            areEqual = false;
//    }
//    cout << boolalpha<<areEqual << endl;
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    // Unpacking Array
//
//    int temp[] = {10, 20, 30};
//    auto[x, y, z] = temp;
//
//    cout << "x: " << x << " y: " << y << " z: " << z << endl;
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int find(int numbers[], int size, int input){
//    for(int i = 0; i < size; i++){
//        if(numbers[i] == input)
//            return i;
//    }
//    return -1;
//}
//
//int main() {
//
//    // Searching Array
//
//    int arr[] = {10, 20, 30};
//    int input;
//    cin >> input;
//
//    if( find(arr, size(arr), input)  == -1 )
//        cout << "This number is not in the array" << endl;
//
//    if( find(arr, size(arr), input)  != -1 )
//        cout << "This number is in the array" << endl;
//
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void sort(int numbers[], int size){
//    for(int z = 0; z < size; z++){
//        for(int i = 1; i < size; i++){
//            if(numbers[i] < numbers[i-1]){
//                int temp = numbers[i];
//                numbers[i] = numbers[i-1];
//                numbers[i-1] = temp;
//            }
//        }
//    }
//
//    for(int i = 0; i < size; i++){
//        cout << numbers[i] << " ";
//    }
//}
//
//int main() {
//
//    // Sorting Array
//
//    int arr[] = {8, 2, 6, 12, 31, 5};
//
//    sort(arr, size(arr));
//
//    return 0;
//}

#include <iostream>
using namespace std;

//const int rows = 2;
//const int columns = 3;
//
//void printMatrix(int matrix[rows][columns]){
//    for(int row = 0; row < rows; row++){
//        for(int col = 0; col < columns; col++){
//            cout << matrix[row][col] <<" ";
//        }
//        cout << endl;
//    }
//}

int main() {

    // Two-dimensional Array

    // matrix: 2x3  2 rows 3 columns
   
    
    string a;
    int n, counter_y = 0, counter_z = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a == "Yes" || a=="YES" || a == "yES" || a == "yes" || a == "yEs" || a == "YeS"){
            counter_y++;
        }else counter_z++;
    }
    
    for(int i = 0; i < counter_y; i++){
        cout<< "YES" << endl;
    }
    
    for(int i = 0; i < counter_z; i++){
        cout<< "NO" << endl;
    }
    
    
    
    
    
    
    
//    int arr[rows][columns] = {
//        {1, 2, 5},
//        {3, 4, 6}
//    };
//
//    printMatrix(arr);
//

    return 0;
}
