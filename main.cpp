#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "EncryptionHeader.h"

std::string PLAIN_TEXT_FILE = "./plain.txt";
std::string CYPHER_TEXT_FILE = "./encrypted.txt";
std::string DECYPHER_TEXT_FILE = "./decrypted.txt";
int SHIFT = 1;

int main(int argc, char* argv[]) {

    int shift = SHIFT;
    if(argc > 1){
        int param_shift = atoi(argv[1]);
        if(param_shift > 0 && param_shift < 27){
            shift = param_shift;
        }
    }

    std::string file = PLAIN_TEXT_FILE;
    if(argc > 2) {
        std::string param_file = static_cast<std::string>(argv[2]);
        if(argv[1] != nullptr){
            file = param_file;
        }
    }

    std::cout << argc << " " << argv[0] << std::endl;

    // Open the Plain File and Read the first line
    std::ifstream plain_text;
    std::string line = "";
    plain_text.open(file);
    // plain_text.seekg(0L, plain_text.beg);
    getline(plain_text, line);
    plain_text.close();

    // Encrypt read line
    char* cypher = cpt_180_encryption::encrypt(line, shift);
    // Write Encrypted Text to File
    std::ofstream cypher_text;
    cypher_text.open(CYPHER_TEXT_FILE);
    cypher_text << cypher;
    cypher_text.close();

    // Test Decryption by decrypting the encrypted string
    // To a new file
    char* plain_again = cpt_180_encryption::decrypt(cypher, shift);
    std::ofstream plain_text_again;
    plain_text_again.open(DECYPHER_TEXT_FILE);
    plain_text_again << plain_again << std::endl;
    plain_text_again.close();
    return 0;
}

