#include <iostream>

// Số lượng tối đa của đơn thức trong đa thức
const int SO_LUONG_TOI_DA = 100;

// Cấu trúc biểu diễn đơn thức
struct DonThuc {
    int he_so; // Hệ số
    int mu;    // Số mũ
};

// Cấu trúc biểu diễn đa thức
struct DaThuc {
    DonThuc cac_don_thuc[SO_LUONG_TOI_DA]; // Mảng cố định các đơn thức
    int so_luong_don_thuc;                 // Số lượng đơn thức trong đa thức
};

// Hàm nhập đa thức từ người dùng
void nhapDaThuc(DaThuc& da_thuc) {
    std::cout << "Nhap so luong don thuc trong da thuc: ";
    std::cin >> da_thuc.so_luong_don_thuc;

    std::cout << "Nhap tung don thuc (he so mu):" << std::endl;
    for (int i = 0; i < da_thuc.so_luong_don_thuc; ++i) {
        std::cin >> da_thuc.cac_don_thuc[i].he_so >> da_thuc.cac_don_thuc[i].mu;
    }
}

// Hàm tính tổng của hai đa thức
DaThuc tinhTongDaThuc(const DaThuc& da_thuc1, const DaThuc& da_thuc2) {
    DaThuc ket_qua;
    int i = 0, j = 0, k = 0;

    // Lặp qua cả hai đa thức
    while (i < da_thuc1.so_luong_don_thuc && j < da_thuc2.so_luong_don_thuc) {
        if (da_thuc1.cac_don_thuc[i].mu == da_thuc2.cac_don_thuc[j].mu) {
            // Cộng các đơn thức có cùng số mũ
            ket_qua.cac_don_thuc[k].he_so = da_thuc1.cac_don_thuc[i].he_so + da_thuc2.cac_don_thuc[j].he_so;
            ket_qua.cac_don_thuc[k].mu = da_thuc1.cac_don_thuc[i].mu;
            i++;
            j++;
        } else if (da_thuc1.cac_don_thuc[i].mu > da_thuc2.cac_don_thuc[j].mu) {
            // Đơn thức trong đa thức thứ nhất có mũ lớn hơn
            ket_qua.cac_don_thuc[k] = da_thuc1.cac_don_thuc[i];
            i++;
        } else {
            // Đơn thức trong đa thức thứ hai có mũ lớn hơn
            ket_qua.cac_don_thuc[k] = da_thuc2.cac_don_thuc[j];
            j++;
        }
        k++;
    }

    // Sao chép các đơn thức còn lại từ đa thức nào đó nếu có
    while (i < da_thuc1.so_luong_don_thuc) {
        ket_qua.cac_don_thuc[k++] = da_thuc1.cac_don_thuc[i++];
    }

    while (j < da_thuc2.so_luong_don_thuc) {
        ket_qua.cac_don_thuc[k++] = da_thuc2.cac_don_thuc[j++];
    }

    // Cập nhật số lượng đơn thức trong đa thức
    ket_qua.so_luong_don_thuc = k;

    return ket_qua;
}

// Hàm in đa thức
void inDaThuc(const DaThuc& da_thuc) {
    std::cout << "Da thuc: ";
    for (int i = 0; i < da_thuc.so_luong_don_thuc; ++i) {
        std::cout << da_thuc.cac_don_thuc[i].he_so << "x^" << da_thuc.cac_don_thuc[i].mu;
        if (i < da_thuc.so_luong_don_thuc - 1) {
            std::cout << " + ";
        }
    }
    std::cout << std::endl;
}

int main() {
    DaThuc da_thuc1, da_thuc2;

    std::cout << "Nhap da thuc 1:" << std::endl;
    nhapDaThuc(da_thuc1);

    std::cout << "Nhap da thuc 2:" << std::endl;
    nhapDaThuc(da_thuc2);

    // Tính tổng và in kết quả
    DaThuc ket_qua_tong = tinhTongDaThuc(da_thuc1, da_thuc2);
    inDaThuc(ket_qua_tong);

    return 0;
}
