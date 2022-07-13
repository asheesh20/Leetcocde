class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        
        int len = s.length();
        
        int i;
        for(i=0; i<len; i++){

            switch(s[i]){
                    
                case 'I': {
                     if(s[i+1] == 'V'){
                        result += 4;
                        i++;
                        break;
                    }
                    if(s[i+1] == 'X'){
                        result += 9;
                        i++;
                        break;
                    }
                    result += 1;
                    break;
                }
                case 'V': {
                    result += 5;
                    break;
                }
                case 'X': {
                    if(s[i+1] == 'L'){
                        result += 40;
                        i++ ;
                        break;
                    }
                    if(s[i+1] == 'C'){
                        result += 90;
                        i++;
                        break;
                    }
                    result += 10;
                    break;
                }
                case 'L': {
                    result += 50;
                    break;
                }
                case 'C':{
                    if(s[i+1] == 'D'){
                        result += 400;
                        i++;
                        break;
                    }
                    if(s[i+1] == 'M'){
                        result += 900;
                        i++;
                        break;
                    }
                    result += 100;
                    break;
                }
                case 'D':{
                    result += 500;
                    break;
                }
                case 'M':{
                    result += 1000;
                    break;
                }
                default: {
                    cout << result;
                }
            }
            
        }
        
        return result;
        
    }
};
