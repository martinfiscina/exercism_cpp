#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here
    map<string, string> RNA{
     {"AUG","Methionine"},
     {"UUU","Phenylalanine"},
     {"UUC","Phenylalanine"},
     {"UUA","Leucine"},
     {"UUG","Leucine"},
     {"UCU","Serine"},
     {"UCC","Serine"},
     {"UCA","Serine"},
     {"UCG","Serine"},
     {"UAC","Tyrosine"},
     {"UAU","Tyrosine"},
     {"UGU","Cysteine"},
     {"UGC","Cysteine"},
     {"UGG","Tryptophan"},
     {"UAA","STOP"},
     {"UAG","STOP"},
     {"UGA","STOP"}
    
    };
    
vector<string> proteins(string arn){
    
    vector<string> protein;
    
    for(size_t i = 0; i < arn.size(); i+=3){
        string codon = arn.substr(i, 3);
        string aa = RNA[codon];
        if(aa == "STOP"){
            return protein;
        };
        protein.emplace_back(aa);
    }
    return protein;
}
}  // namespace protein_translation
