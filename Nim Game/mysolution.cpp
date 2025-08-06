/*
- When the pile has a multiple of 4 stones, whatever you take (1, 2, or 3), you leave your opponent with a non-multiple of 4.
- Then your opponent can always respond to bring it back to a multiple of 4, repeating until you are forced to take the last stone.
*/
bool canWinNim(int n) {
        if(n%4==0) return false;
         return true;
}