class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        return(s+s).find(goal)!=string::npos;









//NOTE: 

        //find() searches for a substring (or character) inside a string.
        //It returns the starting index where the substring is found.
        //string::npos is a special constant provided by the C++ string class.
//         Why do we need it?

// find() normally returns an index:

// string s = "hello";

// cout << s.find("ll");   // 2
// cout << s.find("o");    // 4

// But what should it return if the substring doesn't exist?

// s.find("xyz");

// C++ returns:

// string::npos

// which means:

// "I searched the whole string and couldn't find it."

        
    }
};