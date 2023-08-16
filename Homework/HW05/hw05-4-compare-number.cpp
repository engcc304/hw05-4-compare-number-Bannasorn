/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับค่าจากผู้ใช้จำนวน 2 ค่า และให้เปรียบเทียบกัน
    
    Test case:
        Input 1 :
            6
        Input 2 :
            29
    Output:
        Number1 lower than Number2

    Test case:
        Input 1 :
            96
        Input 2 :
            63
    Output:
        Number1 greater than Number2

    Test case:
        Input 1 :
            50
        Input 2 :
            50
    Output:
        Number1 equal Number2
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num = 0 ;
    printf("Please Enter your number : ") ;
    scanf("%d", &num) ;
    if (num > -1 && num < 31)
    {
        switch (num)
        {
        case 0:
            cout << "Zero" ;
            break;
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        case 10:
            cout << "Ten";
            break;
        case 11:
            cout << "Eleven";
            break;
        case 12:
            cout << "Twelve";
            break;
        case 13:
            cout << "Thirteen";
            break;
        case 14:
            cout << "Fourteen";
            break;
        case 15:
            cout << "Fifteen";
            break;
        case 16:
            cout << "Sixteen";
            break;
        case 17:
            cout << "Seventeen";
            break;
        case 18:
            cout << "Eighteen";
            break;
        case 19:
            cout << "Nineteen";
            break;
        case 20:
            cout << "Twenty";
            break;
        case 21:
            cout << "Twenty One";
            break;
        case 22:
            cout << "Twenty Two";
            break;
        case 23:
            cout << "Twenty Three";
            break;
        case 24:
            cout << "Twenty Four";
            break;
        case 25:
            cout << "Twenty Five";
            break;
        case 26:
            cout << "Twenty Six";
            break;
        case 27:
            cout << "Twenty Seven";
            break;
        case 28:
            cout << "Twenty Eight";
            break;
        case 29:
            cout << "Twenty Nine";
            break;
        case 30:
            cout << "Thirty";
            break;
        }
    }
    else{
        printf("Error");
    }
    return 0;
}
