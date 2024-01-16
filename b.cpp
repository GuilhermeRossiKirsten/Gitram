#include <stdio.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
#include <chrono>
#include <cmath>


using namespace std;

int main()
{
    // int teste3;
    // cout << teste3 << endl;

    // int teste1;
    // string teste2;
    // cout << teste1;

    // const int price_small{25};
    // const int price_large{35};
    // const double sales_tax{0.06};
    // const int valid{30};

    // int small_room{0};
    // int large_room{0};

    // cout << "How many small rooms would like cleaned? ";
    // cin >> small_room;
    // cout << "\nHow many large rooms would like cleaned? ";
    // cin >> large_room;

    // int cost{(small_room * price_small) + (large_room * price_large)};

    // cout << "Number of small rooms: " << small_room;
    // cout << "\nNumber of large rooms: " << large_room;
    // cout << "\nPrice per small rooms: " << price_small;
    // cout << "\nPrice per large rooms: " << price_large;
    // cout << "\nCost: $" << cost;
    // cout << "\nTax: $" << cost * sales_tax;
    // cout << "\n=============================";
    // cout << "\nTotal estimate: $" << cost + (cost * sales_tax);
    // cout << "\nThis estimate is valid for " << valid << " days";

    // int array_test[5];
    // int tamanho = sizeof(array_test) / sizeof(array_test[0]);
    // for (int i = 0; i < tamanho; i++)
    // {
    //     cout << array_test[i] << endl;
    // }

    // int array[][] = {{1, 2, 3}, {4, 5, 6, 7}};

    // cout << array[1][3];
    // vector<int> test_scores{1, 2, 3, 4, 5};

    // test_scores.push_back(90);

    // int tamanho = sizeof(test_scores) / sizeof(test_scores.at(0));

    // cout << tamanho << endl;

    // for (int i = 0; i < test_scores.size(); i++)
    // {
    //     cout << test_scores.at(i) << endl;
    // }

    // vector<int> vector1 {};
    // vector<int> vector2 {};

    // vector1.push_back(10);
    // vector1.push_back(20);

    // cout << vector1.at(0) << endl;
    // cout << vector1.at(1) << endl;
    // cout << "tamanho: " << vector1.size() << endl;

    // vector2.push_back(100);
    // vector2.push_back(200);

    // cout << vector2.at(0) << endl;
    // cout << vector2.at(1) << endl;
    // cout << "tamanho: " << vector2.size() << endl;

    // vector<vector<int>> vector_2d {};

    // vector_2d.push_back(vector1);
    // vector_2d.push_back(vector2);

    // cout << "===================" << endl;
    // cout << vector_2d.at(0).at(0) << endl;
    // cout << vector_2d.at(0).at(1) << endl;
    // cout << vector_2d.at(1).at(0) << endl;
    // cout << vector_2d.at(1).at(1) << endl;
    // cout << "===================" << endl;

    // vector1.at(0) = 1000;

    // cout << vector_2d.at(0).at(0) << endl;
    // cout << vector_2d.at(0).at(1) << endl;
    // cout << vector_2d.at(1).at(0) << endl;
    // cout << vector_2d.at(1).at(1) << endl;
    // cout << "===================" << endl;

    // cout << vector1.at(0) << endl;
    // cout << vector1.at(1) << endl;
    // cout << "===================" << endl;

    // double temperatures[]{98.6, 95.2, 88.7, 100.7, 89.0};
    // cout << temperatures[5] << endl;

    // int count{0};
    // int count2{0};

    // for (int i = 0; i < 10000; i++)
    // {
    //     long double caos{(i++ * 2 * 3.14) * (++i * 2 * 3.14)};
    //     cout << caos << endl;
    // }
    // int money;
    // cin >> money;
    // int rest{0};
    // int dollar{0};
    // int quarters{0};
    // int dimes{0};
    // int nickels{0};
    // int pennies{0};

    // dollar = money/100;
    // rest = money % 100;

    // quarters = rest/25;
    // rest = money % 25;

    // dimes = rest/10;
    // rest = money % 10;

    // nickels = rest/5;
    // rest = money % 5;

    // pennies = rest;

    // cout << dollar << endl;
    // cout << quarters << endl;
    // cout << dimes << endl;
    // cout << nickels << endl;
    // cout << pennies << endl;

    // enum Direction
    // {
    //     left,
    //     rigth,
    //     up,
    //     down
    // };

    // Direction direct{left};

    // switch (direct)
    // {
    // case left:
    //     cout << "left" << endl;
    //     break;

    // default:

    //     break;
    // }

    // int sum{0};
    // for (int i = 1; i <= 15; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //         cout << i << endl;
    //     }
    // }

    // cout << sum << endl;
    // vector<int> vec{1,2,3};
    // int result{0};
    // for (int i = 0; i < vec.size(); i++){
    //     for (int j = i+1; j < vec.size(); j++){

    //         result += vec.at(i) * vec.at(j);

    //     }

    // }
    // cout << result << endl;
    // vector<double> vec{0,1,2,3,4,5,6,7,8,9};
    // double num1{0.0};
    // double sum{0.0};
    // double teste{0.0};
    // double average{0.0};
    // double max_min{INT_MAX};
    // bool duplicated{0};
    // bool goodbye{1};
    // while (goodbye)
    // {
    //     char choice{};
    //     cout << "\ndigite uma letra: ";
    //     cin >> choice;
    //     switch (choice)
    //     {
    //     case 'A':
    //     case 'a':
    //         if (vec.size() != 0)
    //         {
    //             for (size_t i = 0; i < vec.size(); i++)
    //             {
    //                 cout << vec.at(i);
    //                 if (i < vec.size() - 1)
    //                 {
    //                     cout << " - ";
    //                 }
    //             }
    //         }
    //         else
    //         {
    //             cout << "\nEmpty vector" << endl;
    //         }
    //         break;

    //     case 'P':
    //     case 'p':

    //         cout << "entrer a  número: ";
    //         cin >> num1;
    //         for (size_t i = 0; i < vec.size(); i++)
    //         {
    //             if (vec.at(i) == num1)
    //             {
    //                 cout << "value duplicated" << endl;
    //                 duplicated = 1;
    //                 break;
    //             }
    //         }
    //         if (duplicated)
    //         {
    //             break;
    //         }
    //         vec.push_back(num1);
    //         cout << "\n"
    //              << num1 << " added." << endl;
    //         teste = 0;
    //         for (size_t i = 0; i <= vec.size(); i++)
    //         {
    //             ++teste;
    //         }
    //         break;

    //     case 'M':
    //     case 'm':
    //         if (vec.size() != teste)
    //         {
    //             sum = 0;
    //             for (auto i : vec)
    //             {
    //                 sum += i;
    //             }
    //         }
    //         average = sum / vec.size();
    //         cout << "Average: " << average << endl;
    //         break;

    //     case 'S':
    //     case 's':
    //         for (size_t i = 0; i < vec.size(); i++)
    //         {
    //             if (vec.at(i) < max_min)
    //             {
    //                 max_min = vec.at(i);
    //             }
    //         }
    //         cout << "Min: " << max_min << endl;
    //         break;

    //     case 'L':
    //     case 'l':
    //         for (size_t i = 0; i < vec.size(); i++)
    //         {
    //             if (vec.at(i) > max_min)
    //             {
    //                 max_min = vec.at(i);
    //             }
    //         }
    //         cout << "Max: " << max_min << endl;
    //         break;

    //     case 'Q':
    //     case 'q':
    //         cout << "Goodbye!!!" << endl;
    //         goodbye = 0;
    //         break;

    //     case 'C':
    //     case 'c':
    //         vec.clear();
    //         cout << "clearing vector" << endl;
    //         break;

    //     default:

    //         cout << "invalid" << endl;
    //         break;
    //     }
    // }

    // string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    // string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    // string decrypting{"calma"};
    // string encrypt{};
    // string decrypt{};

    // for (char letter : decrypting)
    // {
    //     for (size_t i = 0; i < alphabet.size(); i++)
    //     {
    //         if (letter == alphabet[i])
    //         {
    //             encrypt += key[i];
    //         }
    //     }
    //     if (!isalpha(letter))
    //     {
    //         encrypt += letter;
    //     }
    // }
    // cout << encrypt << endl;

    // for (char c : decrypting)
    // {
    //     int position = alphabet.find(c);
    //     if (position != string::npos)
    //     {
    //         char newchar{key[position]};
    //         encrypt += newchar;
    //     }
    //     else
    //     {
    //         encrypt += c;
    //     }
    // }

    // for (char c : encrypt)
    // {
    //     int position = alphabet.find(c);
    //     if (position != string::npos)
    //     {
    //         char newchar{key[position]};
    //         decrypt += newchar;
    //     }
    //     else
    //     {
    //         decrypt += c;
    //     }
    // }
    // cout << encrypt << endl;
    // cout << decrypt << endl;

   
}
