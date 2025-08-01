/*
- The solution seems very short but this is a very interesing problem

- If the string 's' can be constructed by multiple copies of its substring, it will have this structure: s = P + P ... P + P (where P is a substring of 's',and P appear k times, k>=2), at least s = P + P

- Now, if we double 's' we will have doubleS = s + s (2k times) and at least P + P + P + P 

- Then  remove the first and last character from doubleS so no complete s exists at the edges 

- After all doubleS has at least one 's' if 's' is true
*/
bool repeatedSubstringPattern(string s) {
    string doubleS = s + s ;
    return doubleS.substr(1,doubleS.size()-2).find(s) != string::npos;
}