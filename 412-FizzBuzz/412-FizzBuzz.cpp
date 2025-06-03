// Last updated: 03/06/2025, 11:20:42
class Solution {
public:
    vector<string> fizzBuzz(int n) {
    
    vector<string> fizzbuzz={};
       for(int i=1;i<=n;i++){
        int div_3 = i%3;
        int div_5 = i%5;
       

        if(div_3+div_5==0){
            fizzbuzz.push_back("FizzBuzz");
        }
        else if(div_3==0 && div_5 >0){
            fizzbuzz.push_back("Fizz");
        }
        else if(div_3>0 && div_5==0){
            fizzbuzz.push_back("Buzz");
        }
        else{
            fizzbuzz.push_back(to_string(i));
        }

       } 

       return fizzbuzz;
    }
};