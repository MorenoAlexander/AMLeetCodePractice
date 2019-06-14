//using System.Collections.Generic;
public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int i;
        int j;
        int maxl =0;
        int sSize = s.Length;
        HashSet<char> dset = new HashSet<char>();
        
         i = j = 0;
        
        while (i < sSize && j < sSize){
            if(dset.Contains(s[j])){
                dset.Remove(s[i++]);
            }else{
                dset.Add(s[j++]);
                maxl = Math.Max(maxl,j-i);
            }
        }
        return maxl;
        return 0;
    }
}
