#include <iostream>
#include <vector>
using namespace std;

int total=0;
vector<pair<int,int>> procedure;

void hanoi(int num, int from, int to,int other){
    if(num==0) return;
    hanoi(num-1, from, other, to);
    procedure.push_back(make_pair(from, to));
    hanoi(num-1,other,to,from);
    total++;
}

int main(){
    int N;
    cin>>N;
    hanoi(N,1,3,2);

    cout<<total<<"\n";
    for(int v=0;v<procedure.size();v++){
        cout<<procedure[v].first<<" "<<procedure[v].second<<"\n";

    }
    
}