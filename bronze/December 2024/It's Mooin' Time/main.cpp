#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

#pragma region problem
    int calc(int arg){
        return 0;
    }
#pragma endregion

int correct = 0;
void checkans(int b, int comp){
    int answer;
    ans >> answer;
        if (comp!=answer){
            cout << "FAIL for N:"<<b<<": got " << comp << ", expected " << answer << endl;
        }
        if (comp==answer){correct++;}
}

string tc;
ifstream ans("testdata/"+tc+".out");
int main() {

    ifstream cin("testdata/"+tc+".in");
    cin >> tc;

    int numlines;
    cin >> numlines;
    for (int line = 0; line < numlines; line++){
        int b;
        cin >> b;
        int comp = calc(b);

        //comment out one of these lines
        checkans(b, comp);
        cout << comp << endl;
    }
    //cout<<correct<<"/"<<numlines<<" correct"<<endl;
    //cin >> tc;
    return 0;
}




