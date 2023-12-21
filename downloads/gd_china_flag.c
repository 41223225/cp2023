#include <stdio.h>
#include <gd.h>
#include <math.h>
int main() {
    // 繪製紅色背景
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 30; ++j) {
            printf("\033[41m  \033[0m");  // 使用 ANSI escape code 設置紅色背景
        }
        printf("\n");
    }

    // 繪製五星紅旗的五顆星星和小圓點
    printf("\033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m\n");
    printf("  \033[43m  \033[0m\n");
    printf("\033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m  \033[43m  \033[0m\n");

    return 0;
}