#include <iostream>
#include <string>
#include <iomanip>

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



int main(){

    //std::endl : places a new line character on the output stream.
    //       This is identical to placing '\n' on the output stream.
    
    // std::cout << "Hello";
    // std::cout << "World";
    
    // std::cout << std::endl;
    
    // std::cout << "-------------" << std::endl;
    
    // std::cout << "Hello" << std::endl;
    // std::cout << "World" << std::endl;
    
    // std::cout << std::endl;
    
    // std::cout << "Hello\n";
    // std::cout << "World\n";
    // std:: cout <<"rishikar\n";
    // std:: cout <<"rishi";
    
    
    // //===================================================================
    // std::cout << std::endl;

	// //std::flush : flushesdirectly send to the terminl without the intermediate buffer. 
    // std::cout << "This is a nice message...." << std::endl << std::flush;
    
    // //===================================================================
    // std::cout << std::endl;


    //std::setw() : Adjusts the field with for the item about to be printed. 
    //The setw() manipulator only affects the next value to be printed.
    
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    
    std::cout << std::left;
    std::cout << "Formatted table : " << std::endl;
    
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(20) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Formatted table with variables: " << std::endl;
    
    int col_width{14};
    
    
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;

    //Justify : Values can be justified in their fields. There are three manipulators
    //          for adjusting the justification: left, right, and internal. 
    
    //right justified
    std::cout << std::endl;
    std::cout << "Right justified table(default) :  " << std::endl;
    
    col_width = 20;
    
    std::cout << std::right;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    


    //Left justified
    std::cout << std::endl;
    std::cout << "Left justified table :  " << std::endl;
    
    col_width = 20;
    
    std::cout << std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    

    //Internal justified : sign is left justified , data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    
    //===================================================================
    std::cout << std::endl;

    //setfill
    
    std::cout << std::endl;
    std::cout << "Table with fill characters :  " << std::endl;
    
    
    col_width = 20;
    
    std::cout << std::left;
    std::cout << std::setfill('*'); // The fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    
    //===================================================================
    std::cout << std::endl;

    //boolalpha and noboolapha : control bool output format : 1/0 or true/false
    
    bool condition {true};
    bool other_condition {false};
    
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "condition : " << condition << std::endl;
    std::cout << "other_condition : " << other_condition << std::endl;
    
    //===================================================================
    std::cout << std::endl;

    //showpos and noshowpos : show or hide the +  sign for positive numbers
    
    int pos_num {34};
    int neg_num {-45};
    
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    
    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl; 

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;   


    //===================================================================
    std::cout << std::endl;


    //different number systems : std::dec, std::hex, std::oct
    
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    std::cout << std::endl;
    std::cout << "default base format : " << std::endl;
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "double_var in different bases : " << std::endl;
    std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
    std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
    std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;


    //uppercase and nouppercase

    pos_int = 717171;
    
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;


    //fixed and scientific : for floating point values
    
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };
    
    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
    
    
    //===================================================================
    std::cout << std::endl;

    //setprecision() : the number of digits printed out for a floating point. Default is 6
    
    a = 3.1415926535897932384626433832795;
    
    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a <<  std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;
    
    //If the precision is bigger than supported by the type, you'll just print garbage.
    
    //===================================================================
    std::cout << std::endl;


    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point
    
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};
    
    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12
    std::cout << "g : " << g << std::endl;
    
    std::cout << std::endl;
    std::cout << "showpoint: " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl; // 12.0
    std::cout << "g : " << g << std::endl;

    return 0;

    

    
}
