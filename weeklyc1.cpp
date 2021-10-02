#include <iostream>
using namespace std;

/* 변수 타입의 중요성*/ 
long long solution(int price, int money, int count)
{
    long answer = -1;
    long Money = money;
    long sum = 0;
    
     for(int i=1; i<=count; i++){
        long result = price*i;
        sum += result;
     }
    
    if(Money < sum){
        answer = sum - Money;
    }
    else
        answer = 0;
    
    return answer;
}

int main(){
    int price, money, count;

    cin >> price >> money >> count;
    
    int result = solution(price, money, count);
    cout << result << endl;

    return 0;
}