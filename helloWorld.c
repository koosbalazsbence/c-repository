#include <stdio.h>

int main(){

    // This is a single line comment

    /* This 
        is 
        a
        multiline 
        comment 
    */

    /* escape sequence = character combination consisting of a backslash \ followed by one or more characters.
                        They specify actions within a liine or string of text.
                        \n = new line
                        \t = tab
                        \' = single quote
                        \" = double quote
                        \\ = backslash
                        \a = bell
                        \b = backspace
                        \f = form feed
                        \r = carriage return
                        \v = vertical tab
                        \ooo = octal value
                        */

    printf("\nHello\nWorld\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"Too often we... enjoy the comfort of opinion without the discomfort of thought. Share this Quote.\" - John F. Kennedy\n");
    return 0;
}