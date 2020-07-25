//
// Created by  on 7/25/20.
//

#ifndef BASE64_LIB_H
#define BASE64_LIB_H


extern int filetoBase64(char* filePath, char* outPut);
extern int base64ToFile(char* filePath, char* outPut);
extern int filetoBase64ToString(char* filePath,  char* content);
extern int base64ContentToFile(char* content, char* outPut);


#endif //BASE64_LIB_H
