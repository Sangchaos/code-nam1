#include <iostream>

// Cấu trúc biểu diễn đơn thức
struct Monomial {
    int coefficient; // Hệ số
    int exponent;    // Số mũ
};

// Cấu trúc biểu diễn đa thức
struct Polynomial {
    Monomial terms[100]; // Mảng các đơn thức
    int degree;          // Bậc của đa thức
};

// Hàm tính tổng của hai đa thức
Polynomial addPolynomials(const Polynomial& poly1, const Polynomial& poly2) {
    Polynomial result;
    int i = 0, j = 0, k = 0;

    // Lặp qua cả hai đa thức
    while (i < poly1.degree && j < poly2.degree) {
        // So sánh bậc của đơn thức hiện tại trong cả hai đa thức
        if (poly1.terms[i].exponent == poly2.terms[j].exponent) {
            // Cộng các đơn thức có cùng số mũ
            result.terms[k].coefficient = poly1.terms[i].coefficient + poly2.terms[j].coefficient;
            result.terms[k].exponent = poly1.terms[i].exponent;
            i++;
            j++;
        } else if (poly1.terms[i].exponent > poly2.terms[j].exponent) {
            // Đơn thức trong đa thức thứ nhất có bậc lớn hơn
            result.terms[k] = poly1.terms[i];
            i++;
        } else {
            // Đơn thức trong đa thức thứ hai có bậc lớn hơn
            result.terms[k] = poly2.terms[j];
            j++;
        }
        k++;
    }

    // Sao chép các đơn thức còn lại từ đa thức nào đó nếu có
    while (i < poly1.degree) {
        result.terms[k++] = poly1.terms[i++];
    }

    while (j < poly2.degree) {
        result.terms[k++] = poly2.terms[j++];
    }

    // Cập nhật bậc của đa thức kết quả
    result.degree = k;

    return result;
}

// Hàm in đa thức
void printPolynomial(const Polynomial& poly) {
    for (int i = 0; i < poly.degree; ++i) {
        std::cout << poly.terms[i].coefficient << "x^" << poly.terms[i].exponent;
        if (i < poly.degree - 1) {
            std::cout << " + ";
        }
    }
    std::cout << std::endl;
}

int main() {
    Polynomial poly1 = {{1, 2}, {3, 1}, {5, 0}, {0, 0}}; // 1x^2 + 3x + 5
    Polynomial poly2 = {{-2, 1}, {4, 0}};                // -2x + 4

    // In hai đa thức
    std::cout << "Polynomial 1: ";
    printPolynomial(poly1);

    std::cout << "Polynomial 2: ";
    printPolynomial(poly2);

    // Tính tổng và in kết quả
    Polynomial result = addPolynomials(poly1, poly2);
    std::cout << "Sum: ";
    printPolynomial(result);

    return 0;
}
