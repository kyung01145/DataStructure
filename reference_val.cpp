#include <bits/stdc++.h>
using namespace std;

int main(){

    int value = 5 ;
    int &ref = value ;
    value = 6 ;
    ref = 7 ;

    cout << "\n value1= " << value ;
    ++ref;
    cout << "\n value2= " << value ;

    cout << "\n &value= " << &value ;
    cout << "\n &ref= " << &ref ;
    return 0 ;
}

/*
   * reference( 참조 ) 는 주고 공간을 공유하므로 같은 주소공간을 쓰고 잇는 변수는 하나의 값이 변하면 당연히도 따라 변한다.
   * line 11 value = 7
   * line 12 value = 8
   * 주소값는 당연히 같겠지??
*/
