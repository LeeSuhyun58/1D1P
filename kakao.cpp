#include <string>
#include <vector>
 /* 문자 -> 숫자 *stoi(), length(), s.compare(), s.erase(), find_first_of()
    원래 숫자로 이루어졌다면 그대로 출력 
    1. 숫자에 대응하는 문자열을 가진 배열생성(굳이 안해도 될 작업)
    2. 매개변수로 받는 문자열과 비교
    3. 해당하는 문자열이 없는 경우 = 숫자로만 이루어진 문자열
    => 문자열을 숫자로 변환 후 answer에 대입
    4. 해당하는 문자열이 있는 경우 문자열을 숫자로 바꿈 */

/*oneoneone -> 1oneone로 반환이 되는 문제 해결 필요*/

using namespace std;

int solution(string s) {
    int answer = 0;
    int length, index = 0;
    
    // while문 안에 for문으로 사이즈를 계속 바꾸기 s.length(),size()
    
    while(1){
        length = s.size();
        
        for(int i=0; i<length; i++){
            index = s.find("zero");
            if(index>=0){
                s.replace(index, 4, "0");
            }

            index = s.find("one");
            if(index>=0){
                s.replace(index, 3, "1");
            }

            index = s.find("two");
            if(index>=0){
                s.replace(index, 3, "2");
            }

            index = s.find("three");
            if(index>=0){
                s.replace(index, 5, "3");
            }

            index = s.find("four");
            if(index>=0){
                s.replace(index, 4, "4");
            }

            index = s.find("five");
            if(index>=0){
                s.replace(index, 4, "5");
            }

            index = s.find("six");
            if(index>=0){
                s.replace(index, 3, "6");
            }

            index = s.find("seven");
            if(index>=0){
                s.replace(index, 5, "7");            
            }

            index = s.find("eight");
            if(index>=0){
                s.replace(index, 5, "8");
            }

            index = s.find("nine");
            if(index>=0){
                s.replace(index, 4, "9");
            }
        }
        
    if(s.find("X")==-1)
        break;
    }
      
    answer = stoi(s);
   
    return answer;
}