#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> number) {
    vector<int> result;

    // 더한값 모두 result 벡터에 저장
    for (int i = 0; i < number.size(); i++) {
        for (int j = i+1; j < number.size(); j++) {
            result.push_back(number[i] + number[j]);
        }
    }
    
    sort(result.begin(), result.end());

    // 겹치는 수 제거
    for (int i = 0; i < result.size(); i++) {
        for (int j = result.size() - 1; j > i  ; j--) {
            if (result[i] == result[j]) {
                result.erase(result.begin() + j);
             }
        }
   
        if (2 == result.size()) {
            if(result[0] == result[1]){
                result.erase(result.begin() + 1);
            }
        }
    }

    return result;
}