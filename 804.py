class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        set1 = set()
        for w in words:
            s = ""
            for char in w:
                s += morse[ord(char)-97]
            set1.add(s)
        return len(set1)
