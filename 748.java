
/** Author : Shiv anand **/

class Solution {
    public String shortestCompletingWord(String licensePlate, String[] words) {
 		int[] counts = new int[26];
 		for(char c : licensePlate.toCharArray()) {
 			if(Character.isAlphabetic(c)){
 				counts[Character.toLowerCase(c) - 'a']++;
 			}
 		}

 		String res="";
 		for(String word : words){
 			if(isComplete(word, counts)){
 				if(res.equals("")) {
 					res = word;
 				} else if(word.length() < res.length()){
 					res = word;			
 				}
 			}
 		}
 		return res;       
    }

    private boolean isComplete(String word,int[] counts){
    	int[] tmp = counts.clone();
    	for(char c : word.toCharArray()) {
    		if(tmp[c - 'a'] > 0){
    			tmp[c - 'a']--;
    		}
    	}
    	for(int i : tmp){
    		if(i != 0){
    			return false;
    		}
    	}
    	return true;
    }
}