#include <iostream>

namespace cpt_180_encryption {
    using std::string;

    char* encrypt(string plain_text, int shift);
    char* decrypt(string cypher_text, int shift);
    char shift_letter(char current_letter, int shift);
    char unshift_letter(char current_letter, int shift);
    int index_of(char letter);
}
