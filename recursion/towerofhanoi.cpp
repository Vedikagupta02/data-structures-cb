#include <iostream>
using namespace std;

void hnoi(int n, char helper, char dest, char src){
    if(n==0){
        return;
    }

    hnoi(n-1, dest, helper, src);
    cout<<"take disc no " << n << " from "<< src<<"to "<<dest <<endl;
    hnoi(n-1, src, dest, helper);
}
int main(){
    int n;
    cin>>n;

    // hnoi(n, 'A', 'B', 'C');
    hnoi(n, 'B', 'C', 'A');

}