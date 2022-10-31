#include <bits/stdc++.h>
#define LINE cout << "\n----------------------------"
#define str(x) #x   // # 뒤에 오는 parameter는 문자열로 취급한다.
#define glue(a, b) a ## b  // ##은 두 parameter를 붙인다.
#define getmax(a, b) ((a>b) ? (a) : (b))
using namespace std;

int main() {

    vector < float > myv { 1.2, 3.4, 5.66, 7.77 } ;
    for( auto w : myv ) cout << w << " " ;

    LINE ;
    LINE ;
    LINE ;
    LINE ;
    
    myv.push_back( 3.14159 ) ;
    for( auto w : myv ) cout << w << " " ;
    cout << str( 김수완무거북이와두루미 ) ;
    glue(c, out) << " glue를 이용한 cout 만들기 " << "\n" ;
    glue(c, out) << getmax(5,2) << "\n" ;
    return 0 ;
}
