#include<iostream>
using namespace std;
/// Two numbers
int a,b;
/*!
* \brief multiply, multiplies two numbers
* A function of type int, designed to multiply two numbers.
* @param[in] a
* The first multiplier, type int.
* @param[in] b
* The second multiplier, type int.
* @return
* Returns an int value,which is the result of multiplication
*/
int multiply(int a,int b){
    return a*b;
}
/*!
* \brief the main function< the execution of the program begins whith it
*/
int main(){
    cin>>a;
    cin>>b;
    cout<<"multiply = "<<multiply(a,b);
}

