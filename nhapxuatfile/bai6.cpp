// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005
#include <iostream> 
#include <fstream>
#include <conio.h>

using namespace std ;

int main() {
    ofstream output;
    string s ;
    char nut;

    output.open("D:\\nhapxuatfile\\guivao.txt");

    if (!output.is_open()) {
        cerr << "Không thể mở file để ghi!" << endl;
        return 1;
    }

    do {
        getline(cin, s);
        output << s << endl;
        nut = getch(); // Nhận ký tự từ bàn phím mà không hiển thị trên màn hình console
    } while (nut != 27); 

    output.close();
    return 0;
}
