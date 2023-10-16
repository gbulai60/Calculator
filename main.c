//#include <stdio.h>
//
//int main() {
//    int n=1;
//    while(n!=0) {
//        printf("Calculator!\n");
//        int num1, num2;
//        char operator;
//        printf("Introduceti o expresie in formatul '1+2' \n");
//        scanf("%d%c%d",&num1,&operator,&num2);
//
//        switch (operator) {
//            case '+':{printf("=%d",num1+num2);break;}
//            case '-':{printf("=%d",num1-num2);break;}
//            case '*':{printf("=%d",num1*num2);break;}
//            case '/':{printf("=%.2f",(float)num1/num2);break;}
//            case '%':{printf("=%d",num1%num2);break;}
//            default:
//                printf("Ati introdus o operatie care nu este suportata de acest calculator!");
//        }
//        printf("\nDoriti sa mai efectuati o operatie? \n1--DA\n0--NU ");
//        scanf("%d",&n);
//    }
//
//    return 0;
//}
