#include <string>
#include <vector>

using namespace std;

    /*3으로 나눈 나머지와 몫을 이용해서 3진법 표현
    결과를 string에 저장
    그리고 index로 하나씩 꺼내서 *(3^0), *(3^1)...형태로 10진법 표현*/

int solution(int n) {
    int answer = 0;
    int k = 1;
    
    vector<int> v;
    
    while(n > 0){
        v.push_back(n%3);
        n/=3;
    }
    
    for(int j = v.size()-1; j>=0 ; j--){
        answer += v[j]*k;
        k *=3;
    }
    
    return answer;
}