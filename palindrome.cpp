#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
	string str;
	std::getline(cin,str);
	
	vector<char> chars;
	for (auto c: str){
		chars.push_back(c);
	}		
	
	sort(chars.begin(), chars.end());
				
	int cnt=1;
	int cnt_odd=0;
	char odd_char = NULL;
	for (int i=0; i<chars.size(); i++){
		if(chars[i]==chars[i+1]) cnt++;
		else{
			if(cnt%2==0){
				cnt=1;
				continue;
			} else {
				cnt=1;
				cnt_odd++;
				odd_char = chars[i];				
			}			
		}
		if(cnt_odd>1){
			cout << "I'm Sorry Hansoo" << endl;
			return 0;			
		}		
	}	
	
	for (int i=0; i<chars.size(); i++){
		if(chars[i]==odd_char){
			chars.erase(chars.begin()+i);
			break;	
		}
	}

	string result, temp;
	for (int i=0; i<chars.size(); i=i+2){
		result = result + chars[i];
	}
	
	temp = result;
	reverse(temp.begin(), temp.end());
		
	if(odd_char) result = result + odd_char;
	
	result += temp;	
	cout << result;
	
}
