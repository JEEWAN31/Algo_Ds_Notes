/*A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if
abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... */

#include <iostream>
#include <math.h>
using namespace std;

//To calculate the order of the number
int order(int num)
{
    int count =0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

//Function to check if the number is armstrong or not
int armstrong(int num, int count)
{
    int sum = 0;
    while (num > 0)
    {
        //d is the remainder 
        int d = num % 10;
        //To calculate sum
        sum += pow(d, count);        
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    int d;
    cout << "Enter the number: ";
    cin >> num;    


    int count = order(num);     
    cout<<count<<endl;
    int sum = armstrong(num, count);
    cout<<sum<<endl;
    if (sum == num)
        cout << "Armstrong number";
    else
        cout << "Not an armstrong number";  

    return 0;      
}


