#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main() {
    char str[20];
    char ch;
    cin >> str;
    stack<char> s; //LINE-1

    for(int i = 0; i < strlen(str); i+=2)
      s.push(str[i]); //LINE-2

    int len = s.size();

    for(int i = 0; i < len; i++) {
      ch = s.top();  //LINE-3
      cout << ch;
        s.pop();
    }
    return 0;
}




#include <iostream>
#include <cmath>     //LINE-1 

using namespace std;

struct point{
    int x, y;
};

double get_len(point p1, point p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));    //LINE-2
}

int main() { 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    point p1, p2;
    p1.x = x1;
    p1.y = y1;
    p2.x = x2;
    p2.y = y2;
    cout << round(get_len(p1, p2));
    return 0;
}






#include <iostream>
#include <algorithm>
using namespace std;

bool max_str(string a, string b){
    return a > b;
}

int main() {
    std::string words[3], word;
    for(int i = 0; i < 3; i++){
        cin >> word;
        words[i] = word;
    }
    sort(words, words + 3, max_str);
    for (int i = 0; i < 3; i++)
        cout << words[i] << " ";
    return 0;
}
