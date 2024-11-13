#include <iostream>
#include <iomanip>

int main()
{
    // std::endl : places a new line character on the output stream.

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    // std::flush flushes the output buffer to its final destination.
    std::cout << "This is a nice message..." << std::endl
              << std::flush;
    // After this std::flush, we're sure that at this line, the message has been sent directly to the stream. This way may be important in some applications.

    std::cout << std::endl;

    // std::setw() : Adjusts the field width for the item about to be printed.
    // The setw() manipulator only affects the next value to be printed.

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;

    int col_width = 10;

    std::cout << std::endl;

    // Justify: Values can be justified in their fields. There are three manipulators
    //  for adjusting the justification: left, right, internal.

    std::cout << "Right justified table(default) : " << std::endl;

    col_width = 20;

    // right justified
    std::cout << std::right;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;

    // left justified
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;

    // Internal justified: sign is left justified, data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    // std::setfill is going to fill whitespaces with specified characters

    std::cout << std::endl;

    std::cout << std::left;
    std::cout << std::setfill('0');
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;

    // boolalpha and noboolalpha : control bool output format: 1/0 or true/false
    std::cout << std::endl;
    bool condition{true};
    bool other_condition{false};

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

    // showpos and noshowpos
    std::cout << std::endl;
    int pos_num{34};
    int neg_num{-34};

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

    // different number systems : std::dec, std::hex, std::oct

    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};

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

    std::cout << std::endl;

    // uppercase and nouppercase

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

    // fixed and scientific : for floating point values

    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};

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

    // setprecision() : the number of digits printed out for a floating point number. Default 6

    a = 3.23124374731597327598375;
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(6);
    std::cout << "a (precision(20)) : " << a << std::endl;

    // If the precision is bigger than supported by the type, you'll just print garbage

    // showpoint and noshowpoint : show trailing zeros if necessary
    // Force output of the decimal point
    double d{34.1};
    double e{101.99};
    double f{12.0};
    int m{35};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "m : " << m << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "m : " << m << std::endl;

    std::cout << std::endl;
    return 0;
}