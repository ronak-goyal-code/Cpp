#include<iostream>
#include<vector>
using namespace std;
void change(vector< vector<int> > &v){
    v[0][0] = 100;
}

void length(vector< vector<int> > &v){
    cout<<v.size();
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // cout<<v[0][0]<<endl;
    // change(v);
    // cout<<v[0][0]<<endl;

    length(v);
    

    return 0;
}
// import matplotlib.pyplot as plt
// import math
// import random

// # Discrete Random Variable Distribution
// # Binomial Probability Distribution 
// def ncr(n,r):
//     if((n<=0) and (r<0 and r>n)): return 0
//     return math.factorial(n)/(math.factorial(n-r)*math.factorial(r))
// x = [i for i in range(100)]
// p = float(input("Enter Probability of Success : "))
// y = [ncr(100,i)*((p)**i)*((1-p)**(100-i)) for i in x]
// plt.plot(x,y)
// plt.show()

// # Poisson Probability Distribution
// x = [i for i in range(100)]
// lmbda = int(input("Enter Lmbda : "))
// y = [2.73**(-lmbda)*lmbda**i/math.factorial(i) for i in x]
// plt.plot(x,y)
// plt.show()

// # Continous Random Variable Distribution
