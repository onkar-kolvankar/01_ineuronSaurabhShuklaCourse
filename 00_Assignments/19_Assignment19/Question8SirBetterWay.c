// Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
//  word1 = “the”, word2 = “fox”, OUTPUT : 2 )

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int wordsCount = 7 , wordsLen = 20;
    char words[7][20] = {"fox","my","son","quick","to","fox","light"};
    char word1[20] = "quick" ,word2[20] = "fox";

    int min = 100000, temp ,i ,wordIndex1 = -1 , wordIndex2 = -1;

    
    for(i = 0 ; i < wordsCount ; i++)
    {
        if(strcmp(words[i],word1) == 0)
            wordIndex1 = i;
        if(strcmp(words[i] , word2) == 0)
            wordIndex2 = i;

        if(wordIndex1 >= 0 && wordIndex2 >= 0)
        {
            temp = abs(wordIndex2 - wordIndex1) -1 ; // count of words in between

            if(temp < min)
            {
                min = temp;
            }

        }

    }

    printf("Min distance between the two words = %d",min);



    return 0;
}