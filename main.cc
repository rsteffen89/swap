#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
       
}
int main() {
    int a=2,b=3;
   
    swap(&a,&b);
    cout<< a <<" "<<b;
}

// Result will be a=3 ,b=2