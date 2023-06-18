#include <iostream>
#include <string>

// endl is end line and a new statement 
// c out
// int main(){
//     std::cout << "number 1"  << std::endl;
//     std::cout << "number 2" << std::endl;
//     std::cout << "number 3" << std::endl;
// }

// int addNumbers( int firstNumber , int secondNumber){
//     int rishi = firstNumber + secondNumber;
//     return rishi;
// }

// int main(int argc, char **argv){
// int number1 {21};
// // int number1 = 12;  // another way
// int number2 {12};

// int sum = number1 + number2;

// std:: cout << "sum is: " << sum << std::endl;
// sum = addNumbers(100,100);
// std:: cout << "sum is: "<< sum << std:: endl;
// // std:: cout << "sum is: "<< addNumbers(100,100) << std:: endl; //another way
// return 0;
// }


// data inputs

// int age;
// std::string name;

// int main(){

// std::cout << "please type you name" << std::endl;
// std::cin >> name;

// std::cout << "please type you age" << std::endl;
// std::cin >> age;

// another way

// std::cin >> name;
// std::cin >> age;

// **another way 
// std::cin>> name>>age;

// std::cout << "hello! " << name << " you are " << age << " years old !" << std::endl;
// return 0;
// }

// data with spaces

// int main(){
//     std::string full_name;
//     int age2;

//     std::cout << "please type your full name" << std::endl;

//     std::getline(std::cin, full_name);

//     std::cin >> age2;

//     std::cout << "hello! " << full_name << " you are " << age2 << " years old !" << std::endl;
// }

// number system
// int main(){
// int num1 = 15; //decimal
// int num2 = 017; // octa
// int num3 = 0x0F; //hexa 
// int num4 = 0b00001111; // binary
// std::cout<< num1 << std::endl;
// std::cout<< num2 << std::endl;
// std::cout<< num3 << std::endl;
// std::cout<< num4 << std::endl;
// }

// int number1 (2.9); // implicit conversion chopps off the decimal error
// double number2 {2.9}; // perfect
// int main(){
//     int lion_count {};  // initializes to zeroB
//     std::cout << sizeof(number2);
//     return 0;
// }

//braced gives an compiler error {}
//modifiers
/*
short 2 bytes
int 4 bytes
long/ double 4 bytes
long long 8 bytes
*/

// signed means negative and positive -2 billion to +2 billion 
// unsigned is onyl positive integers 0 to 4 billion 

// int main(){
//     signed int value1 {10};
//     signed int value2 {-300};

//     std::cout << "value1 : " << value1 << std::endl;
//     std::cout << "value2 : " << value2 << std::endl;
//     std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
//     std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

//     unsigned int value3 {4}; // + only

//     short short_var {-32768} ; //  2 Bytes 
//     short int short_int {455} ; // 
//     signed short signed_short {122}; //
//     signed short int signed_short_int {-456}; // 
//     unsigned short int unsigned_short_int {456};
    
//     int int_var {55} ; // 4 bytes
//     signed signed_var {66};//
//     signed int signed_int {77};//
//     unsigned int unsigned_int{77};
    
//     long long_var {88}; // 4 OR 8 Bytes
//     long int long_int {33};
//     signed long signed_long {44};
//     signed long int signed_long_int {44};
//     unsigned long int unsigned_long_int{44};

//     long long long_long {888};// 8 Bytes
//     long long int long_long_int {999};
//     signed long long signed_long_long {444};
//     signed long long int signed_long_long_int{1234};
//     unsigned long long int unsigned_long_long_int{1234};

//         std::cout << "Short variable : " << short_var<<  " , size : "
//         << sizeof (short) << " bytes" << std::endl;

//         std:: cout << "short int variable: " << short_int << "size :" << sizeof(short int) << "bytes"<< std::endl;

//         std::cout << "Signed short : " << signed_short
//         << " , size : " << sizeof (signed short) << " bytes" << std::endl;

//         std::cout << "Signed short int :  " << signed_short_int
//         <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
        
//         std::cout << "unsigned short int :  " << unsigned_short_int
//         <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
        
//         std::cout << "---------------------" << std::endl;




//     std::cout << "Int variable :  " << int_var <<" , size : "
//         << sizeof (int) << " bytes" << std::endl;

//     std::cout << "Signed variable " << signed_var <<" , size : "
//         << sizeof (signed) << " bytes" << std::endl;

//     std::cout << "Signed int :  " << signed_int <<" , size : "
//         << sizeof (signed int) << " bytes" << std::endl;
        
//     std::cout << "unsigned int :  " << unsigned_int <<" , size : "
//         << sizeof (unsigned int) << " bytes" << std::endl;
        
//     std::cout << "---------------------" << std::endl;


//     std::cout << "Long variable :  " << long_var << " , size : "
//         << sizeof (long) << " bytes" <<std::endl;

//     std::cout << "Long int :  " << long_int <<" , size : "
//         << sizeof (long int) << " bytes" << std::endl;

//     std::cout << "Signed long :  " << signed_long <<" , size : "
//         << sizeof (signed long) << " bytes" << std::endl;

//     std::cout << "Signed long int : " << signed_long_int <<" , size : "
//         << sizeof (signed long int) << " bytes" << std::endl;
        
//     std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
//         << sizeof (unsigned long int) << " bytes" << std::endl;
        
//     std::cout << "---------------------" << std::endl;



//     std::cout << "Long long : " << long_long <<" , size : "
//         << sizeof (long long) << " bytes" << std::endl;

//     std::cout << "Long long int : " << long_long_int <<" , size : "
//         << sizeof (long long int) << " bytes" << std::endl;

//     std::cout << "Signed long long : " << signed_long_long <<" , size : "
//         << sizeof (signed long long) << " bytes" <<std::endl;
        
//     std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
//         << sizeof (signed long long int) << " bytes" << std::endl;
        
//     std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
//         << sizeof (unsigned long long int) << " bytes" << std::endl;

//          std::cout << "---------------------" << std::endl;

//          return 0;

// }

int main(){
    
}