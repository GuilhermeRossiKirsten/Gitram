#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    
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
    vector<int> test_scores{1, 2, 3, 4, 5};

    test_scores.push_back(90);

    

    int tamanho = sizeof(test_scores) / sizeof(test_scores.at(0));

    cout << tamanho << endl;

    for (int i = 0; i < tamanho; i++)
    {
        cout << test_scores.at(i) << endl;
    }
    test_scores
    

    return 0;
}
