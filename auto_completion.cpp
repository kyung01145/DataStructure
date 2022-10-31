#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> intv {10,14,16,28} ;
    vector<int> myv ;
    
    intv.push_back( 400 ) ;

    // 초기화를 하면 auto completion이 작동하지 않는다.
    // 새로운 변수를 만들면 member function이 pop_up으로 올라온다.
    for(auto w : intv ) cout << w << " : ";

    // Code Completion의 options에서 check를 해야한다.

    return 0;
}
