#include <stdio.h>

int main() {
    // Khoi tao danh sach 4 ma so thu tu kham ban dau
    int queue_numbers[4] = {1001, 1002, 1003, 1004};

    // Le tan muon cap nhat lai ma so uu tien cho Benh nhan vi tri thu 4
    int patient_position = 4; // Benh nhan vi tri thu 4 trong danh sach (1-based)
    int new_queue_number = 1099;

    // Chuyen doi tu vi tri thuc te (1-based) sang chi so mang trong C (0-based)
    int target_index = patient_position - 1;

    // Thao tac cap nhat ma so thu tu dung vi tri
    queue_numbers[target_index] = new_queue_number;

    // In ra danh sach 4 benh nhan ca sang
    printf("--- DANH SACH SO THU TU KHAM BENH ---\n");
    printf("Benh nhan 1 (Index 0): %d\n", queue_numbers[0]);
    printf("Benh nhan 2 (Index 1): %d\n", queue_numbers[1]);
    printf("Benh nhan 3 (Index 2): %d\n", queue_numbers[2]);
    printf("Benh nhan 4 (Index 3): %d\n", queue_numbers[3]);

    return 0;
}