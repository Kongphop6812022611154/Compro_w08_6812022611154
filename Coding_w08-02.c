#include <stdio.h>

int main() {
    int start, stop;    // กำหนดตัวแปร start และ stop 
    
    printf("Enter start number: ");     // รับค่าตัวเลขเริ่มต้นจากผู้ใช้
    scanf("%d", &start);    // เก็บค่าที่รับมาลงในตัวแปร start
    
    printf("Enter stop number: ");   // รับค่าตัวเลขสิ้นสุดจากผู้ใช้
    scanf("%d", &stop); // เก็บค่าที่รับมาลงในตัวแปร stop
     
    printf("Start number is %d and stop number is %d\n", start, stop);  // แสดงค่าของ start และ stop ที่ผู้ใช้ป้อนมา
    printf("---------------\n");    // แสดงเส้นคั่น

    printf("Sequence from start to stop:"); // แสดงข้อความบอกลำดับตัวเลขจาก start ถึง stop
     for (; start <= stop ; start++) {  // ใช้ for loop เพื่อแสดงค่าตัวเลขจาก start ถึง stop โดยเพิ่มค่า start ทีละ 1 ในแต่ละรอบ
        printf(" %d ",start);   // แสดงค่าของ start ในแต่ละรอบของลูป
    }
        printf("\nThank you.\n");   // แสดงข้อความ Thank you เมื่อจบการทำซ้ำ
    
    return 0;   // คืนค่า 0
}