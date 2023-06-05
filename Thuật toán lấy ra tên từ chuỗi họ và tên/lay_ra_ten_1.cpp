// Yêu cầu:
// 1. cho chỗi "Nguyễn Ngọc Linh"
// 2. lấy ra chữ "Linh"

#include <iostream>
#include <string>
using namespace std;

int main(){
    // fake nhập vào 1 chuỗi
    string str = "Nguyen Ngoc Linh";

    // việc 1:
    // tìm vị ví của dấu cách đầu tiên --> ' '
    // tìm từ cuối về đầu
    // sử dụng .rfind() để tìm
    int vi_tri = str.rfind(" ", str.length() - 1);

    // việc 2:
    // có được vị trí dấu cách rồi
    // thì lấy chuỗi từ sau dấu cách đến phần tử cuối cùng
    // sử dụng .substr()
    // thế là thu được tên

    int vi_tri_sau_dau_cach = vi_tri + 1;

    string ten = str.substr(vi_tri_sau_dau_cach, (str.length() - 1) - vi_tri);

    cout << "Ket qua: " + ten + "\n";

    return 0;
}