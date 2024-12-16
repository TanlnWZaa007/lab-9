#include <iostream>
using namespace std;

// ฟังก์ชัน printO
void printO(int N, int M) {
    // ตรวจสอบเงื่อนไข Input ถ้าค่าใด <= 0
    if (N <= 0 || M <= 0) {
        cout << "Invalid input" << endl;
        return; // หยุดการทำงานของฟังก์ชันทันที
    }

    // ใช้ for loop 2 ชั้นในการพิมพ์ตัว 'O'
    for (int i = 0; i < N; i++) { // Loop ควบคุมจำนวนบรรทัด (N)
        for (int j = 0; j < M; j++) { // Loop ควบคุมจำนวนตัวอักษร 'O' ต่อบรรทัด (M)
            cout << "O";
        }
        cout << endl; // ขึ้นบรรทัดใหม่หลังจากพิมพ์ครบ M ตัว
    }
}
