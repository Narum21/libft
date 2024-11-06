#include <stddef.h>

char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i, j;

    // Si needle est une chaîne vide, on retourne haystack.
    if (*needle == '\0') {
        return (char *)haystack;
    }

    for (i = 0; i < len && haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0]) {  // Si on trouve le premier caractère
            for (j = 0; i + j < len && haystack[i + j] == needle[j]; j++) {
                if (needle[j + 1] == '\0') {  // Fin de la sous-chaîne trouvée
                    return (char *)(haystack + i);
                }
            }
        }
    }

    return NULL;  // Sous-chaîne non trouvée
}
#include <stdio.h>

int main() {
    const char *str = "j'aime les pizza au nutella";
    const char *sub = "pizza";
    char *result = strnstr(str, sub, 10);

    if (result) {
        printf("Sous-chaîne trouvée : %s\n", result);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}
