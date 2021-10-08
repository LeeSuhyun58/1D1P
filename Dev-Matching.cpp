#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt1 = 0, cnt2 = 0;
    
    for(int j = 0; j<lottos.size(); j++){
        for(int k = 0; k<lottos.size(); k++){
           if(lottos[j] == win_nums[k]){
                cnt1++;
            }
        }
    }
    
    for(int i = 0; i<lottos.size(); i++){
         if(lottos[i] == 0){
             cnt2++;
         }
    }
    
    int Max = cnt1+cnt2;
    
    for(int h = 0; h<2; h++){
        
        if(Max == 6){
            answer.push_back(1);
        }
        if(Max == 5){
            answer.push_back(2);
        }
        if(Max == 4){
            answer.push_back(3);
        }
        if(Max == 3){
            answer.push_back(4);
        }
        if(Max == 2){
            answer.push_back(5);
        }
        if(Max == 1){
            answer.push_back(6);
        }
        if(Max == 0){
            answer.push_back(6);
        }
        
        Max = cnt1;
    }
    
    return answer;
}