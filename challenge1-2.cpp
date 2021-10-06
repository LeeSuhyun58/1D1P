#include <string>
#include <vector>

using namespace std;

    /*3으로 나눈 나머지와 몫을 이용해서 3진법 표현
    결과를 string에 저장
    그리고 index로 하나씩 꺼내서 *(3^0), *(3^1)...형태로 10진법 표현*/

int solution(int n) {
    int answer = 0;
    int a, b, i = 0;//a = 나머지, b = 몫
    int k = 1;
    int result[100];
    
    while(1){
        a = n%3;
        b = n/3;
        result[i] = a;
        n = b;
        i++;
        
        if(n == 0) break;
    }
    
    for(int j = i - 1; j>=0 ; j--){
        answer += result[j]*k;
        k *=3;
    }
    
    return answer;
}