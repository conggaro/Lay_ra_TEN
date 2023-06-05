// Yêu cầu:
// 1. cho chỗi "Nguyễn Ngọc Linh"
// 2. lấy ra chữ "Linh"

// thuật toán này thì đảo ngược tên
// sau đó dùng .find()

#include <iostream>
#include <string>
using namespace std;

// hàm lấy ra tên
string Ham_Lay_Ra_Ten(string thamSo){
    string daoNguoc = ""; // đảo ngược chuỗi
    
    int index = thamSo.length() - 1;
    
    while(index >= 0){
        daoNguoc = daoNguoc + thamSo[index];
        index = index - 1;
    }

    string ten_nguoc = ""; // tên ngược

    for (int i = 0; i < daoNguoc.length(); i++)
    {
        if(daoNguoc[i] == ' '){
            break;
        }

        ten_nguoc = ten_nguoc + daoNguoc[i];
    }

    string ten = "";
    
    for (int i = ten_nguoc.length() - 1; i >= 0 ; i--)
    {
        ten = ten + ten_nguoc[i];
    }
    
    return ten;
}

int main(){
    // fake nhập vào tên
    string str = "Nguyen Ngoc Linh";

    // gọi hàm lấy ra tên
    cout << "Ket qua: " + Ham_Lay_Ra_Ten(str) + "\n";

    return 0;
}