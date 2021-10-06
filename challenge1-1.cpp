#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    /*같은 index를 가지는 배열의 곱의 합 = 내적*/
    for(int i = 0; i < a.size(); i++){
        answer += a[i]*b[i];
    }
    
    return answer;
}