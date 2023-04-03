#include <iostream>
#include <map>

using namespace std;

int main(){
  int A, B;
  cin >> A >> B;  //A와 B의 원소 개수 입력받기  
  map<int, bool> mapset;
  
  for(int i=0; i<A+B; i++)   //A+B만큼의 원소개수 받기.  
  {
    int k;
    cin >> k;
    
    if(mapset[k]!=0)    //m[k]가 0(false)이 아니면: k라는 값이 채워져있다는 의미. 
	{
    	mapset.erase(k);
	} 
    else       //m[k]==0:   k라는 값이 입력된 적 없음.  
	{
	    mapset[k]=true;	
	} 
  }
  cout << mapset.size();
  return 0;
}
