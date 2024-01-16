#include <stdio.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
#include <chrono>
#include <cmath>

using namespace std;

int sum_of_digits(int n);
void msg(vector<int> &txt);

int main()
{
    //     int vec[]{1, 2, 3, 4, 5};
    //     int tamanho = sizeof(vec) / sizeof(vec[0]);
    //     for (size_t i = 0; i < tamanho ; i++)
    //     {
    //         cout << vec[i] << " teste1"<< endl;
    //     }
    //     msg(vec,tamanho);
    //     for (size_t i = 0; i < tamanho; i++)
    //     {
    //         cout << vec[i] << " teste2" << endl;
    //     }

    //     return 0;
    // }

    // void msg(int vec[], int k){
    //     for (size_t i = 0; i < k; i++)
    //     {
    //         vec[i] = 0;
    //     }
    //     for (size_t i = 0; i < k; i++)
    //     {
    //         cout << "ATENCAO ZERANDO " << vec[i] << endl;
    //     }

    vector<int> vec{1, 2, 3, 4, 5};
    cout << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << endl;
    msg(vec);
    cout << vec[0] << vec[1] << vec[2] << vec[3] << vec[4] << endl;
}
inline void msg(vector<int> &txt)
{
    
    for (size_t i = 0; i < txt.size(); i++)
    {
        txt[i] = i + 5;
        cout << txt[i] << endl;
    }
//     int result {sum_of_digits(5678)};
//     cout << result << endl;
//     result = sum_of_digits(9999);
//     cout << result << endl;
//     result = sum_of_digits(1000);
//     cout << result << endl;

//     return 0;
// }

// int sum_of_digits(int n)
// {
//     // Write your code below this line
//     int sum{0};
//     while (n != 0)
//     {
//         int digito = n % 10;
//         sum += digito;
//         n /= 10;
//     }
//     return sum;

//     // Write your code above this line
}