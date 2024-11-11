char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1), len2 = strlen(word2);
    char* merged = (char*)malloc(len1 + len2 + 1); // Allocate memory for the merged string
    int i = 0, j = 0, k = 0;

    // Alternate characters from word1 and word2
    while (i < len1 || j < len2) {
        if (i < len1) merged[k++] = word1[i++];
        if (j < len2) merged[k++] = word2[j++];
    }
    
    merged[k] = '\0'; // Null-terminate the merged string
    return merged;
}