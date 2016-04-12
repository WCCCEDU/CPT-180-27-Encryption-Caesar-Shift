#include "EncryptionHeader.h"

namespace cpt_180_encryption {
    using std::cout;
    using std::endl;

    char LETTERS[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                      'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
                      'Y', 'Z'};

    char shift_letter(char current_letter, int shift){
      int current_index = index_of(current_letter);
      int shifted = current_index + shift;

      if(shifted > 25){
        shifted -= 26;
      }

      return LETTERS[shifted];
    }

    char unshift_letter(char current_letter, int shift){
      int current_index = index_of(current_letter);
      int unshifted = current_index - shift;

      if(unshifted < 0){
        unshifted += 26;
      }

      return LETTERS[unshifted];
    }

    int index_of(char letter){
      for(int i = 0; i < 26; i++){
        if(LETTERS[i] == letter){
          return i;
        }
      }
      return -1;
    }

    char* encrypt(std::string plain_text, int shift){
      int plain_length = plain_text.size();
      char* cypher = new char[plain_length + 1];

      for(int i = 0; i < plain_length; i++){
        cypher[i] = shift_letter(plain_text[i], shift);
      }
      cypher[plain_length] = '\0';
      return cypher;
    }

    char* decrypt(std::string cypher_text, int shift){
      int cypher_length = cypher_text.size();
      char* plain = new char[cypher_length + 1];

      for(int i = 0; i < cypher_length; i++){
        plain[i] = unshift_letter(cypher_text[i], shift);
      }
      plain[cypher_length] = '\0';
      return plain;
    }
}

