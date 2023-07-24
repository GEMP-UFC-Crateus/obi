#include <stdio.h>
#include <stdlib.h>

int main() {
    int friends_levels[4];

    // Lê os níveis de jogo dos quatro amigos
    for (int i = 0; i < 4; i++) {
        scanf("%d", &friends_levels[i]);
    }

    // Calcula todas as diferenças possíveis entre os níveis dos amigos
    int diff1 = abs(friends_levels[0] + friends_levels[1] - (friends_levels[2] + friends_levels[3]));
    int diff2 = abs(friends_levels[0] + friends_levels[2] - (friends_levels[1] + friends_levels[3]));
    int diff3 = abs(friends_levels[0] + friends_levels[3] - (friends_levels[1] + friends_levels[2]));

    // Encontra a menor diferença
    int min_diff = diff1;
    if (diff2 < min_diff) {
        min_diff = diff2;
    }
    if (diff3 < min_diff) {
        min_diff = diff3;
    }

    printf("%d\n", min_diff);
    return 0;
}
