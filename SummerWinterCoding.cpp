#include <vector>
#include <iostream>
using namespace std;

/*주어진 숫자 중 3개를 더 했을 때 소수가 되는 경우의 개수 return*/
/* 소수 = 1과 자기 자신을 약수로 가는 수(1과 자기자신으로 나눌 때에만 나머지가 0인 경우) */

int solution(vector<int> nums) {
    int result;
    int cnt2 = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
       for(int j = i+1; j<nums.size(); j++)
       {
           for(int k =j+1; k<nums.size(); k++)
           {
               result = nums[i]+nums[j]+nums[k];
               
               int cnt1 = 0;
               
               for(int h = 1; h<=result; h++)
               {
                   if(result%h == 0){
                      cnt1++;
                   }
               }
               
               if(cnt1 <= 2){
                   cnt2++;
               }   
            }
       }   
    }

    return cnt2;
}