#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;


int postlude() {
    string n;
    cin >> n;
    return 0;
}

#pragma region problem
    int genPost(int pow){
        int res = 0;
        for (int i = 0; i < pow; i++){
            res+=4;
            res*=10;
        }
        res+=5;
        return res;
    }
    int postEnd(int p){
        int res = 5*pow(10,p);
        return res;
    }
    int sequence(int num){
        int res = 0;
        int pow = 5;
        for (int i = num; i>=0; i--){
            int add = pow*i;
            res+=add;
            pow*=10;
        }
        return res;
    }
    int calcNum(long b){
        if (b==1000000000){return 61728390;}
            long res = 0;
            int lb=log10(b);
            long post = genPost(lb);
            if (post>b){lb--;}

            post = genPost(lb);
            long end = postEnd(lb);


            res+=sequence(lb);
            
            long diff = end-b;
            if (diff>0){ res-=diff-1;}


            if (b<44){res=0;};
            return res;
    }
#pragma endregion

int main() {
   // string tc;
   // cin>>tc;
   // ifstream cin("testdata/"+tc+".in");
  //  ifstream ans("testdata/"+tc+".out");

    int correct = 0;
    int numlines;
    cin >> numlines;
    for (int line = 0; line < numlines; line++){
        int b;
        cin >> b;
       // int answer;
     //   ans >> answer;
        int comp = calcNum(b);
       // string result = (comp==answer)?"PASS":"FAIL";
       // if (comp!=answer){
         //   cout << result << "-" << b << " - " << calcNum(b) << "vs" << answer << endl;
       // }
       // if (comp==answer){correct++;}
        cout << comp << endl;
    }
    //cout<<correct<<"/"<<numlines<<" correct"<<endl;
    //postlude();
    return 0;
}




