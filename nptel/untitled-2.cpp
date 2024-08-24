/*
#include <iostream> 
#include <algorithm>

using namespace std;

int main() {

int iarr[]={10, 20, 50, 40, 10, 50}; 
rotate(&iarr[0], &iarr[2], &iarr[6]);

remove(&iarr[0], &iarr[6], 10); //LINE-1

for (int i=0; i < 4; ++i)

cout << iarr[i] << " ";

return 0;
}

// What will be the output?

// a) 40 10 10 20

// b) 50 40 50 20

// e) 50 50 40 20

// 1) 40 10 40 20



*/

/*

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool compare(char c1, char c2) {
    return tolower(c1) > tolower(c2);
}

int main() {
    char arri[20] = "C++ Program", arr2[20] = "C Program";
    cout << lexicographical_compare(arri, arri + strlen(arri), arr2, arr2 + 5, compare);
    return 0;
}
*/


/*
#include <iostream>
#include <algorithm>
using namespace std;

void modify(int* arr) {
    rotate(arr,arr + 3, arr + 5);
    rotate(arr,arr + 2, arr + 4);
}

int main() {
    int iarr[5];
    for (int i = 0; i < 5; i++)
        *(iarr+i) = i * 2;
    
    modify(iarr);
   
    for (int i = 0; i < 5; ++i)
        cout << *(iarr + i) << " ";
    return 0;
}

*/


/*
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main() {
    char str[10] = "COMPUTER";
    stack<char> s1, s2;
    int i;
    for (i = 0; i < strlen(str)/3; i++)
        s1.push(str[i]);
    for (; i < strlen(str); i++)
        s2.push(str[i]);
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()) {
        cout << s2.top();
        s2.pop();
    }
    return 0;
}

*/


/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int data[] = {50, 30, 40, 10, 20};
    sort(&data[2], &data[5]);
    for (int i=0; i < 5; i++)
        cout << data[i] << " ";
    return 0;
}


*/


/*

#include <iostream> 
#include<cmath>

int main(){ int n = 4;

//LINE-1

return 0;
}
// Fill in the blank at LINE-1 such that the output is 16 2.
//  a) std::cout << std::pow(n,2) << " " << std::sqrt(n)

// b) cout << pow(n,2) <<<< sqrt(n) 
// c)std::cout<<atd::pow(n)<<" "<<std::sqr(n);
// d) cout << pov(n) << " " << sqrt(n)

*/