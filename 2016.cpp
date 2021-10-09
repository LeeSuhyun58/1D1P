#include <string>
#include <vector>

using namespace std;

//2월을 29일로 둔 해 = 윤년

string solution(int a, int b) {
    string answer = "";
    
    int day[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    for(int i=0;i<a-1;i++){
        sum+=day[i];
    }    
    sum+=b;
    
    switch(sum%7){ //7로 나누었을 때 나머지가 0인 요일은 THU이고 1은 FRI이므로 이를 기준으로 switch문 이용 
        case 0:
            answer = "THU";
            break;
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
      }
    
    return answer;
  }