#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

void reversePart(int a , int b , vector<int>&v){
    for(int i=a,j=b; i<j; i++,j--){
        // swap 
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

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

    int k;
    cout<<"enter rotation steps : ";
    cin>>k;
    if(k>n) k%=n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

}