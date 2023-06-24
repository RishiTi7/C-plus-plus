#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <concepts>
#include <type_traits>

// #include <cstring>

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
long/ double 4 or 8 bytes
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

// we have to put suffixes for float and long other wise they chop off in float and chop off to double in long
// float = f
//long double = L

// int main(){
//     //Declare and initialize the variables
//     float number1 {1.12345678901234567890f}; // Precision : 7
//     double number2 {1.12345678901234567890}; // Precision : 15
//     long double number3  {1.12345678901234567890L};
    
//     //Print out the sizes
//     std::cout << "sizeof float : " << sizeof(float) << std::endl;
//     std::cout << "sizeof double : " << sizeof(double) << std::endl;
//     std::cout << "size of double long: " << sizeof(long double)<< std::endl;
//     std::cout << std::setprecision(20);
//     std::cout << "float: " << number1<< std::endl;
//     std::cout << "double : " << number2<< std::endl;
//     std::cout << "double long: " << number3<< std::endl;
//     return 0;

// }

// INFINITY AND NAN 

// int main(){
//      //Infinity and Nan
//     std::cout << std::endl;
//     std::cout << "Infinity and NaN" << std::endl;
    
//     double number10{ -5.6 };
//     double number11{};//Initialized to 0
//     double number12{};  //Initialized to 0

//     //Infinity
//     double result { number10 / number11 };
    
    
//     std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
//     std::cout<< result << "-inf" << "+" << number10 <<"yeilds" << result+number10<<std::endl;
    
//     //NaN
//     result = number11 / number12;
    
    
//     std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    
   
//     return 0;
// }

// boolean

// int main(){
//     bool red_light {true};
//     bool green_light {false};

//     if(red_light == false){
//         std::cout<< "stop" << std::endl;
//     }else{
//         std::cout<< "go" << std::endl;
//         std::cout<< sizeof(bool) << std::endl;
//         // std::cout<<boolalpha;
//     }
//     return 0;
// }

// char

// char name {65};
// char name {'A'}; // another way by integer

// int main(){
//     std:: cout << "hello "<< name << std::endl;
//     std:: cout << "value :"<< static_cast<int>(name) << std::endl; // to print value
//     return 0;
// }

// compiler auto detects the data type
// auto name {"rishi"};
// int main(){
//     std::cout << name << std::endl;
// }

// int main(){

// 	auto var1 {12};
//     auto var2 {13.0};
//     auto var3 {14.0f};
//     auto var4 {15.0l};
//     auto var5 {'e'};
    
//     //int modifier suffixes
//     auto var6 { 123u}; // unsigned
//     auto var7 { 123ul}; //unsigned long
//     auto var8 { 123ll}; // long long

//     std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
//     std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
//     std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
//     std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
//     std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
//     std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
//     std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
//     std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
   
//     return 0;
// }

// Assignments changing the variable

// int main(){
// int var {21};
// // std::cout << var;
// var = 222;
// std::cout << var;

// }
// auto var3 {333u};
// var3 = -21;
// // we cant do that unsigned to signed

// int main (){
//     bool red {true};

//     std::cout << red << std::endl;

//     red = false;

//      std::cout << red << std::endl;


// }

//operations on Data
// + - * / %
// division only returns int not float/decimal  modulus returns reminder 


//precedence(which operation first) and assosiativity(which direction left to right or vice versa)
// multiple operators in same expression one line

// int main(){

//     int a {6};
//     int b {3};
//     int c {8};
//     int d {9};
//     int e {3};
//     int f {2};
//     int g {5};
        

//         // M D A S A
//     int result = a + b * c -d/e -f + g; //  6 +  24  -   3 - 2 + 5
    
//     std::cout << "result : " << result << std::endl;

//     result = a/b*c +d - e + f;  //   16 + 9 - 3 + 2
//     std::cout << "result : " << result << std::endl;

//     result = (a + b) * c -d/e -f + g; // 72-3-2+5
//     std::cout << "result () : " << result << std::endl;

//     // use () for precedence
   
//     return 0;
// }

//postfix and prefix by one(1)
// ++value prefix 
// value++ postfix


// int main(){

//     int value = 5;

//     std::cout << value++ << std::endl;
//     std::cout << value << std::endl;
//     std::cout << value-- << std::endl;
//     std::cout << value << std::endl;
//     return 0;
// }

// compound operators

// int main(){

//     int value = 100;

//     value +=10;

//     std::cout << "compound value is :" << value << std::endl;

//     value -=10;

//     std::cout << "compound value is :" << value << std::endl;

//     value/= 2;

//     std::cout << "compound value is :" << value << std::endl;

//     value%= 10;

//     std::cout << "compound value is :" << value << std::endl;

//     return 0 ;

// }

// relational operators

// int main(){
//     int value {20};
//     int value2 {20};

//     std::cout << value << std::endl;
//     std::cout << value2 << std::endl;

//     std::cout<< std::boolalpha; // gives out tue or false statement

//     std:: cout << "number1 < number2 :" << (value < value2) <<std::endl;  
//     std:: cout << "number1 > number2 :" << (value > value2) <<std::endl;  
//     std:: cout << "number1 = number2 :" << (value == value2) <<std::endl;  
//     std:: cout << "number1 != number2 :" << (value != value2) <<std::endl; 
    
//     int num1 = 24;
//     int num2 = 23;

//     bool result = (num1 ==num2);

//     std::cout << num1 << " = "<< num2 << " " << result <<std::endl;
//     return 0; 
// }


// logical 

// int main(){

// 	bool a {true};
//     bool b {false};
//     bool c {true};
	
// 	std::cout << std::boolalpha; // true / false
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << "c : " << c << std::endl;

	
// 	//AND : Evaluates to true when all operands are true.
// 	//      A single false operand will drag 
//     //      the entire expression to evaluating false.
	
// 	std::cout << std::endl;
// 	std::cout << "Basic AND operations" << std::endl;

//     std::cout << " a && b : " << (a && b) << std::endl; // false
//     std::cout << " a && c : " << (a && c ) << std::endl; // true
//     std::cout << " a && b && c :" << (a && b && c) << std::endl; // false


// 	//OR : Evaluates to true when at least one operand true.
// 	//      A single true operand will push 
//     //      the entire expression to evaluating true.
// 	std::cout << std::endl;
// 	std::cout << "Basic OR operations" << std::endl;
//     std::cout << " a || b : " << (a || b) << std::endl;
//     std::cout << " a || c : " << (a || c ) << std::endl;
//     std::cout << " a ||b || c :" << (a || b || c) << std::endl;


// 	//NOT : Negates whateve operand you put it with
// 	std::cout << std::endl;
// 	std::cout << "Basic NOT operations" << std::endl;	
	
// 	std::cout << "!a : " << !a << std::endl;
// 	std::cout << "!b : " << !b << std::endl;
// 	std::cout << "!c : " << !c << std::endl;



// 	//Combinations of all these operators
// 	std::cout << std::endl;
// 	std::cout << "Combining logical operators" << std::endl;
// 	// !(a &&b) || c
// 	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true


//     //Combining logical operators with relational operators
// 	int d{45};
// 	int e{20};
// 	int f{11};
//     int z{45};
	
// 	std::cout << std::endl;
// 	std::cout << "Relational and logic operations on integers" << std::endl;
// 	std::cout << "d : " << d << std::endl;
// 	std::cout << "e : " << e << std::endl;
// 	std::cout << "f : " << f << std::endl;
	
// 	std::cout << std::endl;
	
// 	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
// 	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
// 	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
// 	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
// 	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
// 	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
// 	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
// 	std::cout<< "(!a) || (d==z) :" << ((!a) ||(d == z)) << std::endl;
// 	std::cout<< "operator " << (a&&b) << std::endl;
// 	std::cout<< "operator " << (a||b) << std::endl;
// 	std::cout<< "operator " << (!b) << std::endl;
   
//     return 0;
// }



// int main(){

//     //std::endl : places a new line character on the output stream.
//     //       This is identical to placing '\n' on the output stream.
    
//     // std::cout << "Hello";
//     // std::cout << "World";
    
//     // std::cout << std::endl;
    
//     // std::cout << "-------------" << std::endl;
    
//     // std::cout << "Hello" << std::endl;
//     // std::cout << "World" << std::endl;
    
//     // std::cout << std::endl;
    
//     // std::cout << "Hello\n";
//     // std::cout << "World\n";
//     // std:: cout <<"rishikar\n";
//     // std:: cout <<"rishi";
    
    
//     // //===================================================================
//     // std::cout << std::endl;

// 	// //std::flush : flushesdirectly send to the terminl without the intermediate buffer. 
//     // std::cout << "This is a nice message...." << std::endl << std::flush;
    
//     // //===================================================================
//     // std::cout << std::endl;


//     //std::setw() : Adjusts the field with for the item about to be printed. 
//     //The setw() manipulator only affects the next value to be printed.
    
//     std::cout << "Unformatted table : " << std::endl;
//     std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
//     std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
//     std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
//     std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
//     std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
//     std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    
//     std::cout << std::left;
//     std::cout << "Formatted table : " << std::endl;
    
//     std::cout << std::setw(10) <<  "Lastname"  << std::setw(20) << "Firstname" << std::setw(5) << "Age" << std::endl;
//     std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
//     std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
//     std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
//     std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
//     std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
//     std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "Formatted table with variables: " << std::endl;
    
//     int col_width{14};
    
    
//     std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
//     std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
//     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width) <<  "33" << std::endl;
//     std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width) << "45" << std::endl;
//     std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
//     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) <<"27" << std::endl;
//     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;
    
    
//     //===================================================================
//     std::cout << std::endl;

//     //Justify : Values can be justified in their fields. There are three manipulators
//     //          for adjusting the justification: left, right, and internal. 
    
//     //right justified
//     std::cout << std::endl;
//     std::cout << "Right justified table(default) :  " << std::endl;
    
//     col_width = 20;
    
//     std::cout << std::right;
//     std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
//     std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
//     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
//     std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
//     std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
//     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
//     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    


//     //Left justified
//     std::cout << std::endl;
//     std::cout << "Left justified table :  " << std::endl;
    
//     col_width = 20;
    
//     std::cout << std::left;
//     std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
//     std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
//     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
//     std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
//     std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
//     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
//     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    

//     //Internal justified : sign is left justified , data is right justified
//     std::cout << std::endl;
//     std::cout << "Internal justified : " << std::endl;
//     std::cout << std::right;
//     std::cout << std::setw(10) << -123.45 << std::endl;
//     std::cout << std::internal;
//     std::cout << std::setw(10) << -123.45 << std::endl;
    
//     //===================================================================
//     std::cout << std::endl;

//     //setfill
    
//     std::cout << std::endl;
//     std::cout << "Table with fill characters :  " << std::endl;
    
    
//     col_width = 20;
    
//     std::cout << std::left;
//     std::cout << std::setfill('*'); // The fill character
//     std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
//     std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
//     std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
//     std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
//     std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
//     std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
//     std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    
//     //===================================================================
//     std::cout << std::endl;

//     //boolalpha and noboolapha : control bool output format : 1/0 or true/false
    
//     bool condition {true};
//     bool other_condition {false};
    
//     std::cout << "condition : " << condition << std::endl;
//     std::cout << "other_condition : " << other_condition << std::endl;
    
//     std::cout << std::endl;
//     std::cout << std::boolalpha;
//     std::cout << "condition : " << condition << std::endl;
//     std::cout << "other_condition : " << other_condition << std::endl;
    
//     std::cout << std::endl;
//     std::cout << std::noboolalpha;
//     std::cout << "condition : " << condition << std::endl;
//     std::cout << "other_condition : " << other_condition << std::endl;
    
//     //===================================================================
//     std::cout << std::endl;

//     //showpos and noshowpos : show or hide the +  sign for positive numbers
    
//     int pos_num {34};
//     int neg_num {-45};
    
//     std::cout << "pos_num : " << pos_num << std::endl;
//     std::cout << "neg_num : " << neg_num << std::endl;
    
//     std::cout << std::endl;
//     std::cout << std::showpos;
//     std::cout << "pos_num : " << pos_num << std::endl;
//     std::cout << "neg_num : " << neg_num << std::endl; 

//     std::cout << std::endl;
//     std::cout << std::noshowpos;
//     std::cout << "pos_num : " << pos_num << std::endl;
//     std::cout << "neg_num : " << neg_num << std::endl;   


//     //===================================================================
//     std::cout << std::endl;


//     //different number systems : std::dec, std::hex, std::oct
    
//     int pos_int {717171};
//     int neg_int {-47347};
//     double double_var {498.32};
    
//     std::cout << std::endl;
//     std::cout << "default base format : " << std::endl;
//     std::cout << "pos_int : " << pos_int << std::endl;
//     std::cout << "neg_int : " << neg_int << std::endl;
//     std::cout << "double_var : " << double_var << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "pos_int in different bases : " << std::endl;
//     std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
//     std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
//     std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "neg_int in different bases : " << std::endl;
//     std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
//     std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
//     std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "double_var in different bases : " << std::endl;
//     std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
//     std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
//     std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;
    
    
//     //===================================================================
//     std::cout << std::endl;


//     //uppercase and nouppercase

//     pos_int = 717171;
    
//     std::cout << "pos_int (nouppercase : default) : " << std::endl;
//     std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
//     std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
//     std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "pos_int (uppercase) : " << std::endl;
//     std::cout << std::uppercase;
//     std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
//     std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
//     std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    
//     //===================================================================
//     std::cout << std::endl;


//     //fixed and scientific : for floating point values
    
//     double a{ 3.1415926535897932384626433832795 };
//     double b{ 2006.0 };
//     double c{ 1.34e-10 };
    
//     std::cout << std::endl;
//     std::cout << "double values (default : use scientific where necessary) : " << std::endl;
//     std::cout << "a : " << a << std::endl;
//     std::cout << "b : " << b << std::endl;
//     std::cout << "c : " << c << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "double values (fixed) : " << std::endl;
//     std::cout << std::fixed;
//     std::cout << "a : " << a << std::endl;
//     std::cout << "b : " << b << std::endl;
//     std::cout << "c : " << c << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "double values (scientific) : " << std::endl;
//     std::cout << std::scientific;
//     std::cout << "a : " << a << std::endl;
//     std::cout << "b : " << b << std::endl;
//     std::cout << "c : " << c << std::endl;

//     std::cout << std::endl;
//     std::cout << "double values (back to defaults) : " << std::endl;
//     std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
//     std::cout << "a : " << a << std::endl;
//     std::cout << "b : " << b << std::endl;
//     std::cout << "c : " << c << std::endl;
    
    
//     //===================================================================
//     std::cout << std::endl;

//     //setprecision() : the number of digits printed out for a floating point. Default is 6
    
//     a = 3.1415926535897932384626433832795;
    
//     std::cout << std::endl;
//     std::cout << "a (default precision(6)) : " << a <<  std::endl;
//     std::cout << std::setprecision(10);
//     std::cout << "a (precision(10)) : " << a << std::endl;
//     std::cout << std::setprecision(20);
//     std::cout << "a (precision(20)) : " << a << std::endl;
    
//     //If the precision is bigger than supported by the type, you'll just print garbage.
    
//     //===================================================================
//     std::cout << std::endl;


//     //showpoint and noshowpoint : show trailing zeros if necessary
//     //Force output of the decimal point
    
//     double d {34.1};
//     double e {101.99};
//     double f {12.0};
//     int    g {45};
    
//     std::cout << std::endl;
//     std::cout << "noshowpoint (default) : " << std::endl;
//     std::cout << "d : " << d << std::endl;
//     std::cout << "e : " << e << std::endl;
//     std::cout << "f : " << f << std::endl; // 12
//     std::cout << "g : " << g << std::endl;
    
//     std::cout << std::endl;
//     std::cout << "showpoint: " << std::endl;
//     std::cout << std::showpoint;
//     std::cout << "d : " << d << std::endl;
//     std::cout << "e : " << e << std::endl;
//     std::cout << "f : " << f << std::endl; // 12.0
//     std::cout << "g : " << g << std::endl;

//     return 0;

    

    
// }



// #include <iostream>
// #include <limits>  // ranges to numbers

// int main(){

// 	std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " 
//         << std::numeric_limits<short>::max() << std::endl;
        
//     std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " 
//         << std::numeric_limits<unsigned short>::max() << std::endl;
        
        
// 	std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " 
//         << std::numeric_limits<int>::max() << std::endl;
        
//     std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " 
//         << std::numeric_limits<unsigned int>::max() << std::endl;
        
//     std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " 
//         << std::numeric_limits<long>::max() << std::endl;
        
//     std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " 
//         << std::numeric_limits<float>::max() << std::endl;
        
//     std::cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " 
//         << std::numeric_limits<float>::max() << std::endl;
        
//     std::cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " 
//         << std::numeric_limits<double>::max() << std::endl;

//     std::cout << "the reange with lowesr for double long is from : " << std:: numeric_limits<double>::lowest() << "to" << std :: numeric_limits<double>::max() <<std::endl;    
//     std :: cout << "the float is "<< std::numeric_limits<unsigned int>:: min() << "to"<< std::numeric_limits<unsigned int>::max() <<std::endl;

//     std::cout << std::numeric_limits<int>::is_signed << std::endl;


//     return 0;
// }


// int main(){

// 	double weight { 7.7 };
    
//     //floor
//     std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
    
//     //ceil 
//     std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;
    
//     //abs
//     double savings {-5000 };
  
//     std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
//     std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;
    
//     //exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
//     double exponential = std::exp(10);
//     std::cout << "The exponential of 10 is : " << exponential << std::endl;
    
//     //pow
//     std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
//     std::cout << "9^3 is : " << std::pow(9,3) << std::endl;


//     //log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking
//     // to which exponent should we elevate 2 to get eight ? Log, by default computes the log
//     // in base e. There also is another function which uses base 10 called log10
    
//     // Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e = ? 
//     std::cout << "Log ; to get 54.59, you would elevate e to the power of : "
//              << std::log(54.59) << std::endl;
    
//     //log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
//     std::cout << "To get 10000, you'd need to elevate 10 to the power of : "
//                  << std::log10(10000) << std::endl; // 4



//     //sqrt
//     std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;
    
//     //round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
//     std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
//     std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
//     std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;
    
   
//     return 0;
// }

//flow control

// int num1 = 10;
// int num2 = 30;
// int num3 = 20;

// int main (){
// if (num1 == num2)
// {
//     std::cout << "fuck you";
// }
// else if (num2 == num3)
// {
//     std::cout << "ok";
// }
// else
// {
//     std::cout << "not okay";
// }

// bool red = false;
// bool green {true};
// bool yellow {false};
// bool police_stop{false};

//nested if 

// if(red = true){
//     if (police_stop)
//     {
//         std::cout << "stop";
//     }else{
//         std::cout << "go";
//     }
    
// }   
// if (green&&(!police_stop) )
// {
//     std::cout<< "go";
// }
// else
// {
//     std::cout << "wait";
// }


// }

// switch workks for only int char enums 
// no break every statement gets executed 

// const int Pen{ 10 };
// const int Marker{ 20 };
// const int Eraser{ 30 };
// const int Rectangle{ 40 };
// const int Circle{ 50 };
// const int Ellipse{ 60 };

// int main(){

//     int tool {Pen};

//     switch (tool)
//     {
//     case Marker:{
//         std::cout << " this is a marker";
//     }
//         break;
//     case Pen:{
//         std::cout << " this is a pen"<< std::endl;
//     }
//         break;
//     case Eraser:{
//         std::cout << " this is a pencil";
//     }
//         break;
    
//     default:{
//         std::cout<< "nothing";
//     }
//     break;

// }

// std::cout << "hi"<<std::endl;
// }

// ternary 

// #include <iostream>


// int main(){

// 	int max{};
// 	int min{};
    
//     int a{35};
//     int b{200};
	
//     std::cout << std::endl;
// 	std::cout << "using regular if " << std::endl;
	
//     /*
//     if(a >  b){
//         max = a;
//     }else{
//         max = b;
//     }
//     */

//     min = (a < b)? a : b;
//     max = (a > b)? a : b;
	
//     std::cout << "max : " << max << std::endl;
//     std::cout << "min : " << min << std::endl;
	
   
//     return 0;
// }

//loops   for, while, do-while

// int main(){
//     for ( int i = 0; i < 10; i++)
//     {
//        std::cout<< 2*i <<std:: endl;
//        std::cout<< "rishikar" <<std:: endl;
//     }    

//     int pen {10};

//     // while (pen = true)
//     // {
//     //    std::cout << "hi" <<std::endl;
//     // }

//     // do
//     // {
//     //     std::cout << "hi"<< std::endl;
//     // } while (pen == 100);
    
    
    
// }
// int main(){

	//Print I love C++ 10 times : The bad way
    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    */

   //for loop : the good way
    /*
   for( unsigned int i{0} ; i < 10000 ;++i){
       //Whatever we want the loop to run
       std::cout << i <<  " : I love C++" << std::endl;
   }
   std::cout << "Loop done!" << std::endl;
   */

  //Use size_t : a representation of some unsigned int for positive numbers [sizes]
  /*
  for(size_t i{0} ; i < 10 ; ++i){
      std::cout << i << " : I love C++" << std::endl;
  }
  std::cout << "Loop done!" << std::endl;
  */
    /*
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */


    //Scope of the iterator
    /*
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i : " << i << std::endl;Compiler error : i is not in scope
    */


   //Iterator declared outside the loop
   /*
    size_t i{0}; // Iterator defined outside

    for(i ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


    //Leave out the iterator declaration part
    /*
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


   //Don't hard code values : BAD!

    // const size_t COUNT{100};

    // for(size_t i{0} ; i < COUNT ; ++i){
    //     std::cout << i << " : I love C++" << std::endl;
    // }
    // std::cout << "Loop done!" << std::endl;
   
    // return 0;
   // unsigned size t positive numbers
    // for( size_t i{0} ; i < 10 ;++i){
    //     //Whatever we want the loop to run
    //     std::cout << i <<  " : I love C++\n";
    // }
    //     std::cout << sizeof(size_t) << std::endl;

// const size_t count{10};

// int i {0};

// while (i<count){
//     std::cout << "rishi" << std::endl;

//     ++i;
// }
// std::cout<< "done";
// {
//     /* code */
// }


// }


// arrays

// int main(){
    // int scores[10];

    // scores[0] = 1;
    // scores[1] = 2;
    // scores[2] = 3;
    // scores[3] = 4;
    // scores[4] = 5;
    // scores[5] = 6;
    // scores[6] = 7;
    // scores[7] = 8;
    // scores[8] = 9;
    // scores[9] = 10;

    //another way

    // int scores[10] {1,2,3,4,5,6,7,8,9,10};
// constant array
    // const scores[10] {1,2,3,4,5,6,7,8,9,10};

    // for (int i {0}; i < 5; ++i)
    // {
    //     std::cout<< scores[i] ;
    // }


    // std::cout << scores[2]<< std::endl;
    // std::cout << scores[5]<< std::endl;
    // std::cout << scores[1]<< std::endl;
    // int sum = 5 ;
    // for (int element :scores)
    // {
    //     sum+=element;
    // }
    // std::cout << "score :" << sum;

    // return 0;

    // for (size_t i = 0; i < 10; i++)
    // {
    //     scores[i]= i+i+1;
    //     std::cout<< scores[i] ; 
    // }


    // dynamic size  auto sizes but we have to assign 
    // int rishi [] {1,2,3,4,5,6,7,8,9};
    // int sum{5};

    // for (int element: rishi)
    // {
    //     sum+= element;
    // }
    // std::cout<< std::size(rishi) << std::endl;
    // std::cout<< sum << std::endl;
    // std::cout<< "scores ["<<i<<"] :" <<scores[i]<<std::endl; 
    // return 0 ; 

    // int rishi [] {1,2,3,4,5,6,7,8,9};

    // int count {std::size(rishi)};

    // for (size_t i = 0; i < count; i++)
    // {
    //     std::cout << i <<std::endl;
    //     std::cout << rishi[i] <<std::endl;
    // }

    // null termination   c strings 
    // char names[6] {'a','b','c','d','e','\0'};

    // for ( auto c : names)
    // {
        
    // std:: cout << c<<std::endl;
    // }
    



    // char name [] {"rishikar rishi"}; // auto null terminated for string literals

    // std::cout << name <<std::endl;
    // std::cout << sizeof(name) <<std::endl; 


    
    
// }

//pointers
// int main(){
// int * p_number {}; // only stores the address of an int (null pointer) implicit

// double * p_frac_number{}; //only stores the address of an double 

// int * p_numbers {nullptr}; // points to nothing (explicit)


// std :: cout << "size of :" << sizeof(p_number)<< std::endl;
// std :: cout << "size of :" << sizeof(p_frac_number)<< std::endl;


// int int_var {21};

// int *ptr_int{&int_var};

// // std :: cout << "size of :" << ptr_int << std::endl;

// int int_var2 = 23;

// ptr_int = & int_var2;

// // std :: cout << "size of :" << ptr_int << std::endl;
// std :: cout << "size of :" << *ptr_int << std::endl;   // dereferencing a pointer



// char * ptr_name {};
// char  p_char_name {'A'};

// ptr_name = & p_char_name;

// std :: cout << "character is :" << *ptr_name << std::endl;

// const char * ptr_name{"rishikar"}; // const char string literals converts to const chars array ** if we dont put cont compiler will put this as a constant chars and that throws an error

// // we cant modify char pointer

// std :: cout << "name is :" << ptr_name << std::endl;
// std :: cout << "character is :" << *ptr_name << std::endl;

// to allow modifications to the string 

// char message[]{"rishikar"};

// message[0] = 'B';
// std :: cout << "character is :" << message << std::endl;



// }

//local scope stack memory
// int main(){

//     {
//         int var1 = 45;
//     }

    
// }

// heap memory

// int main(){

    // int *ptr_num {nullptr};

    // ptr_num = new int ; // ************ heap dynamic memory


    // *ptr_num = 45;

    //or

//     int * ptr_name1 {new int (22)};

//     // std::cout << * ptr_name1<< std::endl;

//     delete ptr_name1;

//     ptr_name1 = nullptr;

// // can reuse the heap 
//     ptr_name1 = new int(10);

//     std::cout << * ptr_name1<< std::endl;





    // resetting the memory to null

    // delete ptr_num;
    // ptr_num = nullptr;

    // std::cout << *ptr_num <<std::endl;


    // dont call delete twice 
// }

// dangling pointers not pointing to valid memory address
// int main(){
//multiple pointer pointing to the same address. 
    // int * ptr_num1(new int(21));
    // int * ptr_num2(ptr_num1);

    // std::cout << *ptr_num2<<std::endl;
    // std::cout << *ptr_num1<<std::endl;

    // exception new fail, memory overload

    // for (size_t i = 0; i < 100000000000000; i++)
    // {
    //     try
    //     {
    //         int * data = new int[10000000000000];
    //     }
    //     catch(const std::exception& e)
    //     {
    //         std::cerr << "fuck you " <<  e.what() << '\n';
    //     }  


    // }

    //   for (size_t i = 0; i < 100000000000000; i++)
    // {
    //     int * data = new (std::nothrow) int[10000000000000];

    //     if(data!=nullptr){
    //         std::cout << "data allocated"<<std::endl;
    //     }else{
    //         std::cout<< "nice";
    //     }

    // }

    //memory leak

    // int *p_number { new int{55}};

    // p_number = new int{44};

    // //or

    //    int *p_numbers { new int{100}};

    //    int number {90};

    //    p_number = &number;

    //    // declaring in the local scope

    //    {
    //     int*ptr_number5 {new int {1212}};
    //    }

       // after this scope int gets leaked


       // dynamic arrays

    //    const size_t size{10};

    //    double *p_salaries { new double [size]};

    //    int * p_students { new(std::nothrow) int [size]{}};

    //    double * p_scores { new( std::nothrow) double [size]{1,2,3,4,5}};

    //    // to release the memory

    //    delete [] p_salaries;

    //    p_salaries = nullptr;

    //    delete [] p_students;

    //    p_students = nullptr;
    //    delete [] p_scores;

    //    p_scores = nullptr;

    //    return 0;

    // int scores[10]{1,2,3,4,5,6,7}; //static

    // int * p_scores = new int[10]{1,2,3,4,5,6,7}; //dynamic


    // references (alias)

    // int data {33};

    // data = 45;
    // double ddata {10};

    // int& bhavan {data}; // referencing

    // double& rishi {ddata};

    // bhavan = 100;

    // std::cout << bhavan << std::endl;
    // std::cout << data << std::endl;
    // std::cout << rishi ;

    // return 0 ;

    // const ref

    // int data = 15;

    // const int& rishi {data};

    // // rishi = 10; // we cant do this

    // std::cout <<rishi ;
    // return 0;

    // char manipulation c-string facilities

    // std::cout << "C is alphanumeric? : " << std::isalnum('C') << std::endl;
    // std::cout << "C is alphanumeric? : " << std::isalpha('C') << std::endl;

    // char message []{"hi my name is rishikar sup  !!"};

    // int blank_count {};

    // for (size_t i = 0; i < std::size(message); i++)
    // {
    //     if (std::isblank(message[i]))
    //     {
    //         std::cout << "found it: [" <<i <<"]" << std::endl;
    //         ++blank_count;
    //     }
        
    // }
    // std::cout <<"total " << blank_count ; 


    // char rishi []{"hi this cp30 connecting u to 1234"};

    // int number_count{};

    // for(auto numbers : rishi){
    //     if( std::isdigit(numbers)){
    //         std::cout << "found it ["<<numbers<<"]" << numbers << std::endl;
    //         ++number_count;

    //     }
    // }

    // std::cout << "total is :" << number_count;

    // char rishi[] {"rishikar is a good boy"};
    // char result_kar[std::size(rishi)];
    // char result[std::size(rishi)];

    // for (size_t i = 0; i < std::size(rishi); i++)
    // {
    //     result_kar[i] = std::toupper(rishi[i]);
    // }
    // for (size_t i = 0; i < std::size(rishi); i++)
    // {
    //     result[i] = std::tolower(rishi[i]);
    // }
    // std::cout<< result_kar<<std::endl;
    // std::cout<< result;


    // size_t n{3};


    // const char message [] {"rishikar"};
    // const char message2 [] {"rishikaR"};

    // std::cout<< std::strnmp(message,message2); // comparing if equal then 0
    // std::cout<< std::strncmp(message,message2,n); // comparing if equal then 0
    // std::cout<< std::strlen(message);          // length
    

    // const char *rishi {"rishikar is a good boy and hes rebellious and his name is rishi"};

    // char target = 'r';

    // const char *result = rishi; // an array pointer

    // while ((result = std::strchr(result,target))!=nullptr)
    // {
    //     std::cout <<"found" <<target << result;
    //     result++;
        
    // }
    
    //c string by pointer

    // const char * rishi {"rishikar"};    // we can change this coz its a pointer 

    // const rishi []{"rishikar"};  //we cant change this 

// int *rishi(nullptr);
// int *ris(rishi);

// *ris = 200;

// std::cout << *ris;
// std::cout << *rishi;

// }

// int main(){


    // char dest[50] = "hello";
    // char src[50] = "world";

    // // std::strcat(dest, src);
    // std::strncat(dest, src,3);  // no of chars to concat
    // std::strcat(dest, "goodbye");
    // std::cout <<dest << std::endl;

    //std::strcpy - signature : char* strcpy( char* dest, const char* src );
    /*
    std::cout << std::endl;
	std::cout << "std::strcpy : " << std::endl;
    const char* source3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[std::strlen(source3) + 1];// +1 for the null character
													//Contains garbage data
													//Not initialized
													
    std::strcpy(dest3,source3);
    
    std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
    std::cout << "dest3 : " << dest3 << std::endl;
    */


    //std::strncpy : Copy n characters from src to dest -
    //signature : char *strncpy( char *dest, const char *src, std::size_t count );
	// std::cout << std::endl;
    // std::cout << "std::strncpy:" << std::endl;
    // const char* source4 = "Hello";
    // char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f','\0'}; // Have to put the terminating
	// 													//null char if we want to print
    
    // std::cout << "dest4 : " << dest4 << std::endl;
    
	// std::cout << "Copying..." << std::endl;
    // std::strncpy(dest4,source4,5);
    
    // std::cout << "dest4 : " << dest4 << std::endl;


    // int *ptr_num {new int (122)};

    // // ptr_num = new int ; // ************ heap dynamic memory


    // *ptr_num = 45;
    // std::cout<< *ptr_num;


// }

// int main(){
//     std::string full_name;
//     std::string planet_name{"rishikar. hi very nice meeeting you nice"};
//     std::string weird_msg(5,'e');
//     std::string message{"earth",2} ;
//     std::string rishi_hello{ message,0,5} ;

//     std::cout << planet_name<< std::endl;
//     // std::cout << full_name<< std::endl;
//     std::cout << weird_msg<< std::endl;
//     std::cout << message<< std::endl;
//     std::cout << rishi_hello<< std::endl;
// }

// void enter_bar(unsigned int age){   // function parameter
//     if(age > 18){
//         std::cout<< "enter"<<std::endl;
//     }else{
//         std::cout<< "cant"<<std::endl;
//     }
//     return ;
// }

// we have to call in main function first function then main function


// int maxx(int a, int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }

// int lucky_number(){
//     return 22;
// }


// int main(){
//     // enter_bar(18);  // function argument
//     // enter_bar(118);

//     // for (size_t i = 0; i < 20; i++)
//     // {
//     //     enter_bar(i);
//     // }

//     int result = maxx(1002,11);
//     std::cout<< result;
//     return 0;

// int result = lucky_number();
// std::cout << result;




    
// }

// we can split the function

// int max(int a , int b);   // declaration

// int main(){

//     std::cout << max(1,2)<<std::endl;
// }

// int max(int a, int b ){    // definition
//     if (a>b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
    
// }


// first preprocessor then terminal unit then linker operations header file is .h we can store definitions in header and declaration in operations files linker goes to main m=function finds the definition TU then goes to operations file which has definitions.

// pass by value
// #include <iostream>

// void say_age(int age){ // Parameter
//     ++age;
//     std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;
// }

// int main(){

//     int age{23}; // Local
//     std::cout << "age (before call) : " << age << "&age : " << &age << std::endl;
//     say_age(age); // Argument
//     std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl;

//     return 0;
// }

// pass by pointer

// void say_age(int* age); // Declaration

// int main(){

//     int age{23}; // Local
//     std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
//     say_age(&age); // Argument
//     std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

//     return 0;
// }


// void say_age(int* age){ // Parameter
//     ++(*age); 
//     std::cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  std::endl;//24
// }

// pass by reference

// void say_age(int& age); // Declaration

// int main(){

//     int age{23}; // Local
//     std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23
//     say_age(age); // Argument
//     std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

//     return 0;
// }


// void say_age(int& age){ // Parameter
//     ++age; 
//     std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;//24

// }


// input and output parameters getting things out of functions

// void max_str(const std::string input1, const std::string input2,  std::string& result){
//     if (input1 > input2)
//     {
//         result = input1;
//     }
//     else
//     {
//         result = input2;
//     }
    
// }

// int main(){
//     std :: string out_put ;

//     std:: string input1("rishikaar");
//     std:: string input2("rishi");
//     max_str(input1,input2, out_put); //passed by reference

//     std::cout << out_put;
// }

// we cant overload the function with the same parameters even the return type is the same 
// so we have to put the different parameters to not overload the function


// int max(int a, double b ){
//     if( a >b){
//         return a;
//     }else{
//         return b;
//     }

// }
// int max(double a, int b ){
//     if( a >b){
//         return a;
//     }else{
//         return b;
//     }

// }
// double max(double a, double b ){
//     if( a >b){
//         return a;
//     }else{
//         return b;
//     }

// }

// int main(){

//     std::cout << max(1.2347575, 2.3455958);


// }

// lambda functions
// int main(){
// // [](){
// //     std::cout <<"hi" ;
// // }();

// auto func = [](int a, int b){
//     return (a+b);
// }(12,120);

// std:: cout <<func ;

// }


// #include <iostream>



// int main(){
    /*
    Lambda function signature : 
                                [capture list] (parameters) ->return type{
                                        // Function body
                                }
    */

   //Declaring a lambda function and calling it through a name
   /*
   auto func = [](){
       std::cout << "Hello World!" << std::endl;
   };
   func();
   func();
   */


    //Declare a lambda function and call it directly
    /*
    [](){
       std::cout << "Hello World!" << std::endl;
    }();
    */


    //Lambda function that takes parameters

    /*
    [](double a, double b){
       std::cout << "a + b : " << (a + b)  << std::endl;
    }(10.0,50.0);
    */

   /*
    auto func1 = [](double a, double b){
       std::cout << "a + b : " << (a + b)  << std::endl;
    };

    func1(10,20);
    func1(5,7);
    */


   //Lambda function that returns something
    /*
    auto result = [](double a, double b){
        return a + b;
    }(10,60);

    //std::cout << "result : " << result << std::endl;
    std::cout << "result : " << [](double a, double b){
        return a + b;
    }(10,60) << std::endl;
    */


   /*
    auto func1 = [](double a, double b){
        return a + b;
    };

    auto result1 = func1(23,7);
    auto result2 = func1(9,45);

    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;
    std::cout  <<"direct call : " << func1(5,2) << std::endl;
    */

    //Explicitly specify the return type
//     auto func3 = [](double a, double b)-> int{
//         return a + b;
//     };

//     auto func4 = [](double a, double b){
//         return a + b;
//     };

//     double a{6.9};
//     double b{3.5};

//     auto result3 = func3(a,b);
//     auto result4 = func4(a,b);

//     std::cout << "result3 : " << result3 << std::endl;
//     std::cout << "result4 : " << result4 << std::endl;
//     std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl; // 4
//     std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl; // 8


//    std::cout << "Done!" << std::endl;
   
//     return 0;

// auto func = [](double a , double b)-> int{
//     return a + b;
// }(12.2131,12.43431);

// std:: cout<< func;

// #include <iostream>

// int main(){

    //Capture lists
    /*
     double a{10};
     double b{20};
     
     auto func = [a,b](){
         std::cout  << "a + b : " << a + b << std::endl;
     };
     func();
     */

    //Capturing by value
    /*
     int c{42};
     
     auto func = [c](){
         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
         func();
         ++c;
     }

     */

    //Capture by reference
    //  int c{42};
     
    //  auto func = [&c](){
    //      std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
    //  };
     
    //  for(size_t i{} ; i < 5 ;++i){
    //      std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
    //      func();
    //      ++c;
    //  }
    
    // return 0;




    // int c{21};

    // auto rishi = [&c](){
    //     std::cout<<( c +5);
    // };
    // rishi();




    
// }

// }



// int main(){

//     //Capture everything by value
//     /*
//      int c{42};
     
//      auto func = [=](){
//          std::cout << "Inner value : " << c << std::endl;
//      };
     
//      for(size_t i{} ; i < 5 ;++i){
//          std::cout << "Outer value : " << c << std::endl;
//          func();
//          ++c;
//      }
//      */


//     //Capturing all reference
//      int c{42};
//      int d{5};
     
//      auto func = [&](){
//          std::cout << "Inner value : " << c << std::endl;
//          std::cout << "Inner value(d) : " << d << std::endl;
//      };
     
//      for(size_t i{} ; i < 5 ;++i){
//          std::cout << "Outer value : " << c << std::endl;
//          func();
//          ++c;
//      }
  
//     return 0;
// }

// function blueprints not real c ++ code

// template <typename R> R max(R a, R b);

// int main(){
// // use same type
//     int a {21};
//     int b {222};

//     std::string x {"rishikar"};
//     std::string y {"rishi"};
//     auto result = max(x,y); 
//     // auto result = max(a,b); 

//     std:: cout << "max: " << result;
// }

// template <typename R > R max(R a, R b){   // template instancce gets created as a function.
//     return ( a > b )? a:b; 
//     // this will get converted into an function
// }

// explicit conversions of templates

// template <typename T> T maximum( T a, T b){
//     return (a > b) ? a : b;
// }

// int main(){

// 	int a{10};
// 	int b{23};
// 	double c{34.7};
// 	double d{23.4};
// 	std::string e{"hello"};
// 	std::string f{"world"};

//     //Explicit template arguments

//     auto max = maximum<double>(a,f);  // explicit  int and double works but double and string doesnt work
//     std::cout << "max : " << max << std::endl;
   
//     return 0;
// }

// by reference

// template <typename T> const T& maximum(const T& a, const T& b); // Declaration
// //template <typename T> T maximum(T a, T b); // Declaration

// int main(){

//     double a {23.5};
//     double b {51.2};

//     std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
//     auto result = maximum(a,b);
//     std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
  
//     return 0;
// }


// //Definition
// template <typename T> const T& maximum(const T& a, const T& b){
//     std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
//     return (a > b ) ? a : b ;  // same address
// }

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;   // different address


}
*/

// template specialization

// const pointer comparison in the function is not possible(coz it gives out address) so we are explicitly declaring the template

// template <typename T> T maximum(T a,T b){
//     return (a > b) ? a : b ; 
// }


// template <>
// const char * maximum<const char*> (const char* a, const char* b){
//     return ( std::strcmp(a,b) > 0) ? a : b;   // turnary operator
// }


// int main(){

//     /*
// 	int a{10};
// 	int b{23};
// 	double c{34.7};
// 	double d{23.4};
// 	std::string e{"hello"};
// 	std::string f{"world"};
	
// 	auto max_int = maximum(a,b); // int type deduced
// 	auto max_double = maximum(c,d);// double type deduced
// 	auto max_str = maximum(e,f) ;// string type deduced
	
// 	std::cout << "max_int : " << max_int << std::endl;
// 	std::cout << "max_double : " << max_double << std::endl;
// 	std::cout << "max_str : " << max_str << std::endl;
//     */

//     //
// 	const char* g{"wild"};
// 	const char* h{"animal"};
	
// 	//This won't do what you would expect : BEWARE!

//     const char* result = maximum(g,h);
// 	std::cout << "max(const char*) : " << result << std::endl;
   
//     return 0;
// }

// concepts (constraints in the template)

//Syntax1
/*
template <typename T>
requires std::integral<T>
T add( T a, T b){
    return a + b;
}
*/

//Syntax2

// template <std::integral T>
// T add( T a, T b){
//     return a + b;
// }


//Syntax3

// auto add(std::integral auto a , std::integral auto b){
//     return a + b;
// }


//Syntax4

// template <typename T>
// T add( T a, T b) requires std:: integral<T>{
//     return a + b;
// }

// int main(){

   
// 	char a_0{10};
// 	char a_1{20};
	
// 	auto result_a = add(a_0,a_1);
// 	std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;
	
// 	// int b_0{11};
// 	// int b_1{5};
// 	// auto result_b = add(b_0,b_1);
// 	// std::cout << "result_b : " << result_b << std::endl;


// 	// double c_0 {11.1};
// 	// double c_1 {1.9};
// 	// auto result_c = add(c_0,c_1);
//     // std::cout << "result_c : " << result_c << std::endl;
 
  
//     return 0;
// }


// own concepts


// #include <iostream>
// #include <type_traits>
// #include <concepts>

//Syntax1





// template <typename T>
// concept Multipliable =  requires(T a, T b) {
// 	a * b; // Just makes sure the syntax is valid
// };


// template <typename T>
// concept Incrementable = requires (T a) {
// 	a+=1;
// 	++a;
// 	a++;
// };

// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;


// template <typename T>
// requires MyIntegral<T>
// T add (T a, T b){
//     return a + b;
// }


// int main(){

    // int  x{6};
    // int y{7};

    //std::string x{"Hello"};
    //std::string y{"World"};

    // int result = add(x,y);

    // std::cout << result << std::endl;
    
    // return 0;

// }

// # include <concepts>
// template <typename T>
// concept TinyType = requires (T t){
//     sizeof(T) < 4;

// };
// TinyType auto add(TinyType auto a, TinyType auto b){
//     return a +b;
// };

// int main(){
//     char x{24};
//     char y{21};

//     add(x,y);
//     return 0 ;
// }


//using logical and concepts together

// template <typename T>
// concept TinyType = requires (T t){
//     sizeof(T) <= 4 ;
//     requires sizeof (T) <=4;

// };

// template <typename T >

// // requires std:: integral <T> || std:: floating_point<T>
// requires std:: integral <T>&& TinyType <T>
// T add (T a , T b){
//     return a + b;
// }

// int main(){

//     int c {2};
//     int d {2};

//     auto result = add(c,d);

//     std:: cout << result;
//     return 0 ;    

// }

// oops
// classes


// const double PI {3.1415926589123433797412};

// // by default classes are private 
// class cylinder
// {
// public:
//     double base_radius {1.22};  // members cant be references
//     double height {2.32};
// public:
//     double volume (){
//         return PI * base_radius *base_radius *height;
//     }
// };

// int main(){

//     cylinder cylinder1;  // objects
//     std::cout << "volume is" << cylinder1.volume() <<std::endl;
    
//     cylinder cylinder2 ;
//     cylinder1.base_radius = 3.0;
//     cylinder1.height = 31.0;
//     std::cout << "volume is" << cylinder2.volume() <<std::endl;

//     return 0;
// }

// constructors


// const double PI {3.1415926589123433797412};

// // by default classes are private 
// class cylinder
// {
// private:
//     double base_radius {1.22};  // members cant be references
//     double height {2.32};

//     public:
//     cylinder(){
//         double base_radius {1.22}; 
//         double height {2.32};

//     }

//     double volume (){
//         return PI * base_radius *base_radius *height;
//     }
// };

// int main(){
//     cylinder cylinder1;
//     std:: cout << cylinder1.volume();

// }

// const double PI {3.1415926589123433797412};

// // by default classes are private 
// class cylinder
// {
// private:
//     double base_radius {1.22};  // members cant be references
//     double height {2.32};

//     public:
//     cylinder(){
//         double base_radius {1.22}; 
//         double height {2.32};

//     }
//     cylinder(double rad_param,double height_param){
//         base_radius = rad_param;
//         height = height_param;

//     }

//     double volume (){
//         return PI * base_radius *base_radius *height;
//     }
// };

// int main(){
//     cylinder cylinder1(12,22);
//     std:: cout << cylinder1.volume();

// }

// default constructor


// const double PI {3.1415926535897932384626433832795};

// class Cylinder {
//     public : 
//         //Constctors
//         Cylinder() = default;
//         Cylinder(double rad_param,double height_param){
//             base_radius = rad_param;
//             height = height_param;
//         }
   
//         //Functions (methods)
//         double volume(){
//             return PI * base_radius * base_radius * height;
//         }

//     private : 
//         //Member variables
//         double base_radius{1};
//         double height{1};
// };


// int main(){
//     Cylinder cylinder1(12,32);
//     std::cout << "volume : " << cylinder1.volume() << std::endl;
   
//     return 0;
// }


// setters and getters
// #include "constants.h"    
    // class cylinder{

    //     public : 
    //     //Constctors
    //         // cylinder() = default;
    //         // cylinder(double rad_param,double height_param){
    //         //     base_radius = rad_param;
    //         //     height = height_param;
    //         // }
    
    //         //Functions (methods)
    //         double volume(){
    //             return PI * base_radius * base_radius * height;
    //         }


    // //getters
    //     public:
    //     double get_base_radius(){
    //         return base_radius;
    //     }
    //     double get_height(){
    //         return height;
    //     }
    // // setters
    //     void set_base_radius(double radius_param){
    //         base_radius = radius_param;
    //     }
    //     void set_height(double height_param){
    //         height = height_param;
    //     }
    //     private :
    //         double base_radius{1.212};
    //         double height{1.212};
    // };


    // int main(){

    //     cylinder cylinder1;
    //     std::cout << cylinder1.volume();

    // }

    // we can get private stuff by setters and getters


    // access through pointers
    
// #include <iostream>
// #include "cylinder.h"

// int main(){

//     Cylinder cylinder1(10,10);

//     cylinder1.volume();

//     //Managing a stack object through pointers
//     Cylinder* p_cylinder1 = &cylinder1;

//     //std::cout << "volume : " << (*p_cylinder1).volume() << std::endl;
//     std::cout << "volume : " << p_cylinder1->volume() << std::endl;

//     //Create a cylinder heap object through the new operator
//     Cylinder* p_cylinder2 = new Cylinder(100,2); // Heap

//     std::cout << "volume(clylinder2) : " << p_cylinder2->volume() << std::endl;
//     std::cout << "base_rad(cylinder2) : " << p_cylinder2->get_base_radius() << std::endl;




//     delete p_cylinder2;
   
    
//     return 0;
// }


// destructor

// #include <string_view>

// class Dog{
//     public : 
//         Dog() = default;
//         Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
//         ~Dog(); // destructor ~dog(); 

//     private : 
//         std::string name;
//         std::string breed;
//         int * p_age{nullptr};
// };
// Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
//     name = name_param;
//     breed = breed_param;
//     p_age = new int;
//     *p_age = age_param;
//     std::cout << "Dog constructor called for " << name << std::endl;
// }

// Dog::~Dog(){     // called Dog :: ~Dog(){}
//     delete p_age;
//     std::cout << "Dog destructor called for : " << name << std::endl;
// }

// void some_func(){
//     Dog* p_dog = new Dog("Fluffy","Shepherd",2);

//     delete p_dog;// Causes for the destructor of Dog to be called
// }



// int main(){ 

//     some_func();
    

//     std::cout << "Done!" << std::endl;
//     return 0;
// }

// stack order for destructor 

// this pointer



// class Dog{
//     public : 
//         Dog() = default;
//         Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
//         ~Dog();

//         void print_info(){
//             std::cout << "Dog (" << this << ") : [ name : " << name 
//                 << " breed : " << breed << " age : " << *p_age << "]" << std::endl;
//         }

//         //Setters
//         //Chained calls using pointers
//         /*
//         Dog* set_dog_name(std::string_view name){
//             //name = name; // This does nothing
//             this->name = name;
//             return this;
//         }
//         Dog* set_dog_breed(std::string_view breed){
//             this->breed = breed;
//             return this;
//         }

//         Dog* set_dog_age(int age){
//             *(this->p_age) = age;
//             return this;
//         }
//         */

//        //Chained calls using references
//         Dog& set_dog_name(std::string_view name){
//             //name = name; // This does nothing
//             this->name = name;
//             return *this;
//         }
//         Dog& set_dog_breed(std::string_view breed){
//             this->breed = breed;
//             return *this;
//         }

//         Dog& set_dog_age(int age){
//             *(this->p_age) = age;
//             return *this;
//         }

//     private : 
//         std::string name;
//         std::string breed;
//         int * p_age{nullptr};
// };
// Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
//     name = name_param;
//     breed = breed_param;
//     p_age = new int;
//     *p_age = age_param;
//     std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
// }

// Dog::~Dog(){
//     delete p_age;
//     std::cout << "Dog destructor called for " << name << " at " << this <<  std::endl;
// }

// int main(){

//     Dog dog1("Fluffy","Shepherd",2); //Constructor
//     dog1.print_info();

//     /*
//     dog1.set_dog_name("Pumba");
//     dog1.set_dog_breed("Wire Fox Terrier");
//     dog1.set_dog_age(4);
//     */

//     //Chained calls using pointers
//     //dog1.set_dog_name("Pumba")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);

//     //Chained calls using references
//     dog1.set_dog_name("Pumba").set_dog_breed("Wire Fox Terrier").set_dog_age(4);


//     dog1.print_info();
   

//     std::cout << "Done!" << std::endl;
//    //Destructor
//     return 0;
// }

// struct
/*
members are private by default in class 
members are public by default in struct 
remaining all is same */ 

// struct rishi
// {
//     std:: string name;
// };
// class bhavan
// {
//     std:: string name;
// };

// int main(){
//     rishi rishikar1{"rishikar"};
//     std:: cout << rishikar1.name;
//     // bhavan bhavan1{"bhavan"};
//     // std:: cout << bhavan1.name;  we cant do this coz class is private
// }

// size of the class is the size of members added if we have two ints we gonna have 8 bytes as the size of the class.
// for string it is constant

// inheritance
// #include <iostream>
// #include "player.h"


// int main(){

//     Player p1("Basketball");
//     p1.set_first_name("John");
//     p1.set_last_name("Snow");
//     std::cout << "player : " << p1 << std::endl;
   
//     return 0;
// }


// protected ( to access the private stuff in the derived class ,only in derived class, not in like main function or sny other functions only in derived class)

/*
base derived class public, protected, private
public:

if we derive by public anything which is public from base class stays public in derived class 
if we derive by public anything which is protected from base class stays protected in derived class 
if we derive by public anything which is private from base class stays private in derived class 

protected :

if we derive by protected anything which is public from base class becomes protected in derived class 
if we derive by protected anything which is protected from base class stays protected in derived class 
if we derive by protected anything which is private from base class stays private in derived class 

private :

if we derive by private anything which is public from base class becomes private in derived class 
if we derive by private anything which is protected from base class becomes private in derived class 
if we derive by private anything which is private from base class stays private in derived class

so we can access public in main file
so we can't access protected in main file
so we can't access private in main file


*/
// we can resurrect the public and protected stuff by the (**using**) keyword any member which is private we cant resurrect it

/*
if we have a function which is public in base class
and we inherit that privately in derived class by we wanted to resurrect the function by using keyword so we use that
 now in second derived class we can use that function xoz we resurrected it
*/


/* constructors are called in an heirarchy 
first base class default constructor is called
then derived class default constructor is called
then second derived class default constructor is called */

// ss of initializer ( we can only initialize the members which belong to the same class other wise it wont work)

// Engineer:: Engineer(std::cout string_view fullname, int age, std::string_view address , int contract_count_param):person(fullname, age, address),contract_count(contract_count_param)
                                                                                                                     //base constructor called        initializing our own members
// by this we are inheriting a class initializing its memebers and forwaring members with this own members
// so enginner class is forwarding the derived class members to it

// civilenginner:: civilenginner(std::string_view fullname,int age, std::string_view address, int contract_count, std::string_view speciality ) : enginner(fullname, age, address, contract_count, ), m_speciality(speciality){}
// dont initialize in body 


//copy constructor
//   base class  
/*person::person( const person& source)   here source is object created for the class person passed by reference
: m_full_name{source.m_full_name},   // initializing
 m_last_name{source.m_last_name},
 m_age{source.m_age} */

 // but whatif we have the to pass the constructor to the base class

// derived class
//  enginner::enginner(const enginner& source)
//  : person(source),
//  contract_n(source.contract_n){}

// second derived class


// civilenginner:: civilengineer( const civilenginner& source)
// : engineer(source), m_speciality(source.m_speciality){

// };

// have to follow the heirarchy

// inheriting base constructor in the derived class constructor.

// using person :: person ; // will have all the parameters as the base class , will have all the constructors
 
// destructors are called in the reverse order.

// protected -> child class.

// if we have the same name for the members in the parent and child class
// if we call the main function with a name child class will gets displayed
// but if we want the parent memebers to be displayed we have to use the following syntax
// child.parent:: print_var();


// polymorphism using a base class pointer/ reference to manage the derived class objects.

// shape * ptr         >> circle 
//                        rectangle
//                        triangle
//                        etc
#include "shape.h"
#include "oval.h"
#include "circle.h"


void draw_shape(Shape* s){
    s->draw();
}

void draw_shape_r(Shape& s_r){
    s_r.draw();
}

int main(){
    Shape shape1 ("shape1");
    // shape1.draw();
    Oval oval1 ( 2.0,3.5,"oval1");
    // oval1.draw();
    Circle circle1 (3.3,"circle1");
    // circle1.draw();


// static binding not dynamic binding

    // Shape * shape_ptr = &shape1;

    // // shape_ptr -> draw();

    // shape_ptr = &oval1;
    // shape_ptr ->draw();


    // shape_ptr = &circle1;
    // shape_ptr ->draw();


    // // this is still static binding for references 


    // Shape& shape_ptr = shape1;

    // // shape_ptr -> draw();

    // shape_ptr = oval1;
    // shape_ptr ->draw();


    // shape_ptr = circle1;
    // shape_ptr ->draw();




// dynamic binding pointer (polymorphism) ( virtual keyword)
     Shape * shape_ptr = &shape1;
    // shape_ptr -> draw();

     shape_ptr = &oval1;
     //shape_ptr ->draw();


     shape_ptr = &circle1;
     //shape_ptr ->draw();


    // draw_shape(&circle1);

    // draw_shape_r(oval1);


    // shapes stored in collections

    Shape * shape_collections []{ &shape1,&oval1,& circle1};

    for (Shape* shape_ptr : shape_collections)
    {
        shape_ptr->draw();
    }
    




    return 0;

}

// dynamic binding or poly is only going to be called if the method or function is virtual

// if we dont use base pointer or references the compiler gonna slice the classes and return the base class 

// circle circle1(0.3, "circle1");
// shape shape = Circle1;  // no pointers or references to the base class 
// shape.draw();

// it slices the remaining classes only returns the shape class 

