// The letter value of a letter is its position in the alphabet starting from 0 (i.e. 'a' -> 0, 'b' -> 1, 'c' -> 2, etc.).

// The numerical value of some string of lowercase English letters s is the concatenation of the letter values of each letter in s, which is then converted into an integer.

// For example, if s = "acb", we concatenate each letter's letter value, resulting in "021". After converting it, we get 21.
// You are given three strings firstWord, secondWord, and targetWord, each consisting of lowercase English letters 'a' through 'j' inclusive.

// Return true if the summation of the numerical values of firstWord and secondWord equals the numerical value of targetWord, or false otherwise.

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
           string fsum = "0",ssum = "0", tsum ="0" ;
       for(long long i=0,n = firstWord.size();i<n;i++)
        {
            //fsum = fsum*pow(10,i)+ firstWord[i] - 'a';
            fsum += to_string(firstWord[i] - 'a');
        }
    //cout<<fsum<<endl;
        for(long long i=0,n = secondWord.size();i<n;i++)
        {
            //ssum = ssum*pow(10,i) + secondWord[i] - 'a';
            ssum += to_string(secondWord[i] - 'a');
        }
//cout<<ssum<<endl;
        for(long long i=0,n = targetWord.size();i<n;i++)
        {
            //tsum = tsum*pow(10,i) + targetWord[i] - 'a';
            tsum += to_string(targetWord[i] - 'a');
        }

//cout<<tsum<<endl;
    // if(firstWord == secondWord && fsum == tsum)
    // cout<<true;

    //     if(fsum + ssum == tsum)
    //    return true;
    //    else return  false;

    int fn = stoi(fsum);
    int sn = stoi(ssum);
    int tn = stoi(tsum);

    return (fn+sn == tn);
    }
};