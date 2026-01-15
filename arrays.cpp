// // when do we use arrays
// # include <iostream>
// using namespace std;

// // int main(){
// //     int arr[3];
// //     cin >> arr[0]>> arr[1] >> arr[2];
// //     cout << arr;
// //     return 0;
// // }
// // array elements are always stored next to each other in the memory but where the
// // first element will go is unknown

// int main(){
//     int array[3]= {1, 2, 3}; // you can just be 
//     cout << array<< endl;
// // this doesnt cout the array thou. it probably gives out the memory location or something similar.
//     return 0;
// }


// 2d arrays

# include <iostream>
using namespace std;

int main(){
    int arr[2][3];
    arr[0][2] = 12;
    cout << arr[0][2]<< endl; // should return 12
    return 0;
}
