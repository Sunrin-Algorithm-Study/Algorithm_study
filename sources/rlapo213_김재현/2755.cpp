#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    // your code goes here
    int N;
    int cnt = 0;
    cin >> N;
    double sum = 0;
    double t=0;
    string qq;
    cin >> qq;
    while (N--) {
        string str;
        string grade;
        getline(cin, str);
        //cout<<"\nSTRINGLENGTH"<<str.length()<<'\n';
        for (int i = 0; i < str.length(); i++) {
            if (isspace(str[i]) != 0) {
                cnt++;
                string p = "";
                p.push_back(str[i + 1]);
                int a = stoi(p);
                grade = str.substr(str.length() - 2, 2);
                t += a;
                if (grade == "A+")
                    sum += a * 4.3;
                else if (grade == "A0")
                    sum += a * 4.0;
                else if (grade == "A-")
                    sum += a * 3.7;
                else if (grade == "B+")
                    sum += a * 3.3;
                else if (grade == "B0")
                    sum += a * 3.0;
                else if (grade == "B-")
                    sum += a * 2.7;
                else if (grade == "C+")
                    sum += a * 2.3;
                else if (grade == "C0")
                    sum += a * 2.0;
                else if (grade == "C-")
                    sum += a * 1.7;
                else if (grade == "D+")
                    sum += a * 1.3;
                else if (grade == "D0")
                    sum += a * 1.0;
                else if (grade == "D-")
                    sum += a * 0.7;
                break;
            }

        }
    }
    printf("%.2f", sum / t + 0.000000001); // why ?? ???? 
    return 0;
}
