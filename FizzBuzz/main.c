//
//  main.c
//  FizzBuzz
//
//  Created by Chris Dean on 2018-01-26.
//  Copyright © 2018 Chris Dean. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    for(i = 1; i < 101; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
