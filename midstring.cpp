#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int result;
    int length = s.length();
    
    if(length%2 == 0){
        result = length/2;
        answer.push_back(s[result-1]); 
        answer.push_back(s[result]); 
    }
    else{
        result = length/2;
        answer.push_back(s[result]);
    }
    
    return answer;
}