#include <stdio.h> //เปิดหัวผิด

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ; //ไม่ใส่tagปิด
    scanf( "%s", Name ) ;
    
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ; //เติม&
    
    printf( "- - - - - -\n" ) ; //ไม่ใส่f
    printf( "Hello %s \n", Name ) ; //แก้___
    printf( "Age = %d\n", Age ) ; //แก้___
    
}//end main function