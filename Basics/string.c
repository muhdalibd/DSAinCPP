#include <stdio.h>

/*
    Task:
    You have to print the character, ch, in the first line. Then print a string, s, in next line. In the last line print the sentence, sen.
    Input Format
    First, take a character, ch as input.
    Then take the string, s as input.
    Lastly, take the sentence, sen as input.
    Sample Input:
    C
    Language
    Welcome To C!!
*/

int main(){
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    // scanf("\n");
    getchar();
    
    char s[100];
    // scanf("%s", s);  //  it accepts string only until it finds the first space.
    scanf("%[^\n]%*c", s);
    printf("%s\n", s);
    // scanf("\n");
    
    /*
    The statement will read a newline character, \n, from the previous line.
    This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
    The another way is getchar() => Consume the leftover newline.
    */
    
    char sen[100];
    scanf("%[^\n]s",sen);
    printf("%s", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}