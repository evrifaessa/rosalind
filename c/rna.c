/**
 * Problem RNA: Transcribing DNA into RNA
 * https://rosalind.info/problems/rna/
 * 
 * github.com/evrifaessa
 * yagiz.dev
 */

#include <stdio.h>
#include <string.h>

/**
 * The only thing we needed to do was replacing Thymine with Uracil. Simple as that.
 * I was expecting something very very easy like the string.replaceAll() of JavaScript, but nah. We're writing C and this will take longer...
 * 
 * After a quick internet search, it seems like the reason C doesn't allow a more straigtforward way to do this comes to how it handles memory allocation.
 * Since I've begun coding, I've always been coding in higher-level programming languages and never had to deal with concepts like memory allocation and garbage collection myself.
 * This is all new to me, and since we will only be replacing single characters and not substrings varying in length I will be using a simple hack.
 */
char *replace_character(char *string, char old, char new)
{
    char *result = string;
    int length = strlen(string);

    for (int i = 0; i < length; ++i)
    {
        if (string[i] == old) {
            result[i] = new;
        }
    }

    return result;
}

int main()
{
    char DNAString[] = "CCGATATGACTTCGGAAGCAACGAGGCCGCGACGGTCTAGTTATGCTCGCTCACAACCGAGACCTCGAGCAATGAAGCTTGTTGCCCCGACAAGACTGTCCGCAATATAATAACGAAACAAACGACTTTCGCTAGCCCCACAACTTCTTCTGCGGCACGAACCCAGAGTAGTCCTAGAAATTCAGTGCAGGCTTGGCCTTCAGACGGGACAGTGATTGGGGCACTTACGACGTCTAGTGGTTTTGTAGGGCATAAAATTAGTCCTCAGAGTTGGCGCTAGAAGTGTCATCACAGCTGGGAACGGGTTACTGTGACAACCATGTCTGTTTTGCCACTTCCGAGATAGTCCTTGGGAGTACCTTCGCGAATCGTGAAGCCCAAGGAGGTCGATGATCGCCTACTAACTGTCATATTCACATAGACTTACTGGTATGAAATGTCTGTCTGTCCAGTCTGTTAGGATCGTCCGGGCTTAAGTTGTCGCCGATCCAATTCGACGAAACGATTGGTCGGTAGTTGATTGACAGTAAAATAGACCACGGTCGTTCAGGTCTGGTCTGATGTAAGTCATAGCTGGCCTGTCCACGGGCCTGATGAATTCTGTCGATGCAGTTACCGTGGACAGATTATGAACTCATGCCCAAATACGTGGCCGAGCACGAGCTAAAGCGTTGGCCGCCTTACGATGACAAAATAGCCGAACGGCAGGCGACGGTACGCGCAGCATAGACAGAATGTATACGTCTGTGACATAGAGGAGAGTGTCGAAGACTCACTAACAAATTAAGTCAATTTGGACATACCCTCGCGTTGCTCTTAGATCGTAGCTTTTTGGAAATGTAGTGGAATATTTTTATGCTGTCAGTGCGCCCTCTAACAAATTGCCTTATAACGGAAAATGGCCTAGGTCGGGATACGTGAAGCAGGCTCTGAGTGTGTTAATCGGGT";

    printf("%s\n", replace_character(DNAString, 'T', 'U'));

    return 0;
}