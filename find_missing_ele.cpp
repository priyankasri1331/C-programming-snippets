#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;

void print_vecofvec(vector<vector<int> > vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << "\t";
        }
        cout << endl;
    }

}


int main()
{
    
    vector<vector<int> > vec;
    vec.push_back({1,2,3,5,6,7});
    vec.push_back({4,5,6,8,9});
    vec.push_back({5,6,7,8,9,11});
    vec.push_back({1,3,4,5,6,7,9});

    //print_vecofvec(vec);

    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 1; j < vec[i].size(); j++)
        {
            if(vec[i][j - 1] ==  vec[i][j] - 1)
            {
                continue;
            }
            else
            {
                cout << vec[i][j - 1] << "\t" << vec[i][j] << "\t" << i << "\t" << j << endl;
            }
        }

    }
    
    return 0;
}