#include <iostream>
#include <string>

using namespace std;

int main(){

    /*Write a program in C++ to check whether a number is prime or not.
    //Sample Output:
    //Input a number to check prime or not: 13
    The entered number is a prime number.
    */

    //start from here :

    /*
    int given_number,check_sum = 0;
    cout<<"Input a number to check prime or not: ";
    cin>>given_number;

    for(int i=1;i<given_number+1;i++){

        if(given_number % i == 0){
            check_sum += 1;
        }
    }

    if(check_sum == 2){
        cout<<"The entered number is a prime number"<<endl;
    }
    else{
        cout<<"The entered number is not a prime number"<<endl;
    }
    */

    /*
    Write a program in C++ to find prime number within a range.
    Input number for starting range: 1
    Input number for ending range: 100
    The prime numbers between 1 and 100 are:
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
    The total number of prime numbers between 1 to 100 is: 25
    */

    //start from here :

    /*
    int starting_range,ending_range, sum=0;
    cout<<"Input number for starting range: ";
    cin>>starting_range;
    cout<<"Input number for ending range: ";
    cin>>ending_range;

    for(int j=starting_range; j<ending_range+1; j++){
    int given_number=j,check_sum=0;
    for(int i=1;i<given_number+1;i++){

        if(given_number % i == 0){
            check_sum += 1;
        }
    }

    if(check_sum == 2){
        cout<<given_number<<" ";
        sum+=1;
    }

    }
    cout<<"\nThe total number of prime numbers between " <<starting_range<<" to "<<ending_range<<" is: "<<sum<<endl;
    */

    /*
    Write a program in C++ to find the last prime number occur before the entered number.
    Sample Output:
    Input a number to find the last prime number occurs before the number: 50
    47 is the last prime number before 50
    */

    //start from here :

    /*
    int ending_range,check_last_prime=0;

    cout<<"Input a number to find the last prime number occurs before the number: ";
    cin>>ending_range;

    for(int j=1; j<ending_range; j++){

    int given_number=j,check_sum = 0;

    for(int i=1;i<given_number+1;i++){

        if(given_number % i == 0){
            check_sum += 1;
        }
    }

    if(check_sum == 2){
        check_last_prime = given_number;

    }

    }
    cout<<check_last_prime<<" is the last prime number before "<<ending_range<<endl;
    */

    return 0;
}
