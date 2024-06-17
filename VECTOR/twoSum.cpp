#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array : ";

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int y;
    cout<<"enter x : ";
    cin>>y;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(y==v[i]+v[j]){
                cout<<v[i]<<","<<v[j]<<endl;
            }
        }
    }
    return 0;

}