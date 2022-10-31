#include <bits/stdc++.h>

namespace MYC {
    int val = -200 ;
    std::string my = "well done, boy!" ;
    
    int get_val(){
        return ( val*300 ) ;
    }    
}

using namespace std;

int main(){
    int val = 5 ;

    cout << "MYC::val= " << MYC::val << endl ;
    cout << "MYC::my= " << MYC::my << endl ;
    cout << "MYC::get_val= " << MYC::get_val << endl ;

    return 0 ;
}

/*
   * string은 std namespace안에 내장되어있는 type
   * namespace MYC 는 저러한 아이들을 담고 있는 그릇
   * namespace 를 만들어 줄시에 분업에 유리할 수 있다.
*/
