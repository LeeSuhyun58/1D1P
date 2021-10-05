#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for(int j = left; j<=right; j++){
        int cnt = 0;
        
        for(int i = 1; i <= j; i++){
            
            if(j%i == 0){
                cnt++;
            }
        }
        
        if(cnt%2 == 0){
            answer += j;
        }
        else
            answer -= j;
    }

    return answer;
}