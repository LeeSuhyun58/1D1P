#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    /*absolutes 배열의 길이 필요 = signs 길이
    signs 값이 true인경우 +, false인 경우 - 
    sum필요 sum = answer */
    
    int length = absolutes.size();
    
    for(int i = 0; i< length; i++){
        if(signs[i] == true){
            absolutes[i] = absolutes[i];
        }
        else{
            absolutes[i] = absolutes[i]*(-1);
        }
        
        answer += absolutes[i];
    }
    
    return answer;
}