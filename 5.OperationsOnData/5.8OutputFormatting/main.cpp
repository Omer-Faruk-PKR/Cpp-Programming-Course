#include <iostream> // for io stream :)
#include <iomanip>  // for io formatting
#include <bitset>   // for binary conversion

int main(){

    std::cout<<"Hello"<<std::endl;
    std::cout<<"Hello\n";

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    // with std::flush, message is shown immediately, otherwise message may wait in a buffer to be shown
    std::cout<< "This is an important message! \n"<<std::flush;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    // formatted table
    std::cout<< std::left;  //aligns text left (default right)
    std::cout<< std::setw(15) << "NAME" << std::setw(14) << "SURNAME" << std::setw(7) << "AGE" << std::endl;
    std::cout<< std::setw(15) << "Yunus" << std::setw(14) << "Akgun" << std::setw(7) << 25 << std::endl;
    std::cout<< std::setw(15) << "Baris Alper" << std::setw(14) << "Yilmaz" << std::setw(7) << 24 << std::endl;
    std::cout<< std::setw(15) << "Mauro" << std::setw(14) << "Icardi" << std::setw(7) << 30 << std::endl;
    std::cout<< std::setw(15) << "Victor" << std::setw(14) << "Osimhen" << std::setw(7) << 26 << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    // internal justified: sign is left justified, data is right
    std::cout<< std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout<< std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    std::cout<< std::left;  //aligns text left (default right)
    std::cout<< std::setfill('.');  //the fill character
    std::cout<< std::setw(15) << "NAME" << std::setw(14) << "SURNAME" << std::setw(7) << "AGE" << std::endl;
    std::cout<< std::setw(15) << "Yunus" << std::setw(14) << "Akgun" << std::setw(7) << 25 << std::endl;
    std::cout<< std::setw(15) << "Baris Alper" << std::setw(14) << "Yilmaz" << std::setw(7) << 24 << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    float pos_num = 1.23;
    float neg_num = -1.23;

    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::noshowpos;    // default
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    int pos_number = 124;
    std::cout << "number : " << pos_number << std::endl;
    std::cout << "dec number : " << std::dec << pos_number << std::endl;
    std::cout << "hex number : " << std::hex <<pos_number << std::endl;
    std::cout << "oct num : " << std::oct <<pos_number << std::endl;
    std::cout << "binary number : " << std::bitset<8>(pos_number) << std::endl;

    float frac_number = 124.124;    // does not work on fractional numbers
    std::cout << "\nnumber : " << frac_number << std::endl;
    std::cout << "dec number : " << std::dec << frac_number << std::endl;
    std::cout << "hex number : " << std::hex <<frac_number << std::endl;
    std::cout << "oct num : " << std::oct <<frac_number << std::endl;
    std::cout << "binary number : " << std::bitset<8>(frac_number) << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    std::cout<<std::endl;
    std::cout << "hex number(lowercase) : " << std::hex <<pos_number << std::endl;    
    std::cout << std::uppercase;    // default is lowercase
    std::cout << "hex number(uppercase) : " << std::hex <<pos_number << std::endl;

    std::cout<<"-   -   -   -   -   -   -   -   -   -   -\n";

    double a {3.14155926395239058293589032421094};
    
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;    


    return 0;
}